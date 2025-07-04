//Efrain Retana Segura UNA

#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <memory>
#include <sstream>
#include "baseObject1.h"

namespace base {

    template <class T> class lista;
    template <class T> class nodo;
    template <class T> class iterador;

    // ----------------------------------------------------------------

    template <class T>
    class lista : public baseObject1 {
    public:
        lista();
        virtual ~lista();

        lista(const lista<T>&) = delete;
        lista<T> operator=(const lista<T>&) = delete;

        virtual bool estaVacia() const;
        virtual lista<T>& agregar(const T&);
        virtual void eliminarTodos();

        virtual std::string toString() const override;

        // Nota:
        // Para construir una clase iterable in C++, se necesita:
        // 1 - definir una clase iteradora
        // 2 - definir los métodos begin() and end() en la clase que regresen
        //     referencias al inicio y final de la colección.

        virtual iterador<T> begin() const;
        virtual iterador<T> end() const;

    private:
        std::shared_ptr<nodo<T>> _primero;
    };

    // ----------------------------------------------------------------

    template <class T>
    class nodo : public baseObject1 {
        friend class lista<T>;
        friend class iterador<T>;
    public:
        nodo(const T&);
        nodo(const T&, std::shared_ptr<nodo<T>>);
        virtual ~nodo();

        virtual std::string toString() const override;

    private:
        std::shared_ptr<T> _info;
        std::shared_ptr<nodo<T>> _siguiente;
    };

    // ----------------------------------------------------------------

    template <class T>
    class iterador {
    public:
        iterador(std::shared_ptr<nodo<T>>);

        // Nota:
        // El iterador debe proveer métodos para la inicialización,
        // obtener la referencia al elemento actual (dereference),
        // incrementar la posición del iterador y sobrecargar el operador
        // de comparación (para verificar el final de la lista).

        virtual T& operator*() const;
        virtual iterador<T>& operator++();
        virtual bool operator!=(const iterador<T>&) const;

    private:
        std::shared_ptr<nodo<T>> _cursor;
    };

    // ----------------------------------------------------------------

    template <class T>
    lista<T>::lista() {
    }

    template <class T>
    lista<T>::~lista() {
        std::cout << "lista<T>::~lista()" << std::endl;
    }

    template <class T>
    bool lista<T>::estaVacia() const {
        return !_primero;
    }

    template <class T>
    lista<T>& lista<T>::agregar(const T& info) {
        std::shared_ptr<nodo < T>> tmp = std::make_shared<nodo < T >> (info);

        if (_primero.get() == nullptr) {
            _primero = tmp;
        } else {
            nodo<T>* cursor = _primero.get();
            while (cursor->_siguiente != nullptr) {
                cursor = cursor->_siguiente.get();
            }
            cursor->_siguiente = tmp;
        }
        return *this;
    }

    template <class T>
    void lista<T>::eliminarTodos() {

        // Nota:
        // Observe que el método NO elimina los elementos de manera
        // explícita. Solamente se actualiza la referencia del
        // primer elemento.
        // Al hacer que el puntero tenga un valor nulo, la memoria
        // se recupera automáticamente en el destructor de la lista,
        // ya que no existirán referencias a los objetos correspondientes.

        _primero = nullptr;
    }

    template <class T>
    std::string lista<T>::toString() const {
        std::stringstream ss;
        ss << "[";
        if (_primero.get() != nullptr) {
            ss << "\n\t" << *_primero;
        }
        ss << "\n]";
        return ss.str();
    }

    template <class T>
    iterador<T> lista<T>::begin() const {
        return iterador<T>(_primero);
    }

    template <class T>
    iterador<T> lista<T>::end() const {
        return iterador<T>(nullptr);
    }

    // ----------------------------------------------------------------

    template <class T>
    nodo<T>::nodo(const T& info) : _info(std::make_shared<T>(info)) {

        // Nota (¡importante!):
        // Al crear el nodo, se hace una copia del parámetro.
        // El nodo contiene entonces una instancia propia del objeto,
        // distinta del objeto original.
        // Observe también que la inicialización del atributo que contiene
        // la información del elemento usa siempre la clase base e impide
        // el uso correcto de polimorfismo.
    }

    template <class T>
    nodo<T>::nodo(const T& info, std::shared_ptr<nodo<T>> siguiente)
    : _info(std::make_shared<T>(info)), _siguiente(siguiente) {

        // Nota:
        // (ver nota enterior)
    }

    template <class T>
    nodo<T>::~nodo() {
        std::cout << "nodo<T>::~nodo()" << std::endl;
    }

    template <class T>
    std::string nodo<T>::toString() const {
        std::stringstream ss;
        ss << "{";
        ss << "info: " << *_info;
        if (_siguiente.get() != nullptr) {

            // Se agrega al resultado la instancia en forma de una hilera,
            // de manera recursiva.

            ss << ", sgte: " << *_siguiente;
        }
        ss << "}";
        return ss.str();
    }

    // ----------------------------------------------------------------

    template <class T>
    iterador<T>::iterador(std::shared_ptr<nodo<T>> primero) : _cursor(primero) {
    }

    template <class T>
    T& iterador<T>::operator*() const {
        return *(_cursor.get()->_info);
    }

    template <class T>
    iterador<T>& iterador<T>::operator++() {
        _cursor = _cursor->_siguiente;
        return *this;
    }

    template <class T>
    bool iterador<T>::operator!=(const iterador<T>& otro) const {
        return _cursor != otro._cursor;
    }

}

#endif //LISTA_H
