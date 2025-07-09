//Efrain Retana Segura UNA

#ifndef SMARTPTR_H
#define SMARTPTR_H

#include <iostream>
#include <sstream>
#include "baseObject2.h"

template <class T>
class smartPtr : public base::baseObject2 {
public:
    explicit smartPtr(T* = nullptr);
    virtual ~smartPtr();
    smartPtr(const smartPtr<T>&);
    smartPtr<T>& operator=(const smartPtr<T>&);

    virtual T& operator*() const;
    virtual T* operator->() const;
    virtual T* get() const;
    virtual int use_count() const;
    virtual std::string toString() const override;

private:
    void release();

    T* _ptr;
    int* _ref_count;
};

template <class T>
smartPtr<T>::smartPtr(T* ptr) : _ptr(ptr), _ref_count(new int(1)) {
    std::cout << "smartPtr(" << *this << ")" << std::endl;
}

template <class T>
smartPtr<T>::smartPtr(const smartPtr<T>& other) : _ptr(other._ptr), _ref_count(other._ref_count) {
    ++(*_ref_count);
    std::cout << "smartPtr(" << *this << ") (copia)" << std::endl;
}

template <class T>
smartPtr<T>& smartPtr<T>::operator=(const smartPtr<T>& other) {
    if (this != &other) {
        release();

        _ptr = other._ptr;
        _ref_count = other._ref_count;
        ++(*_ref_count);
        std::cout << "smartPtr(" << *this << ") (=)" << std::endl;
    }
    return *this;
}

template <class T>
smartPtr<T>::~smartPtr() {
    release();
}

template <class T>
T& smartPtr<T>::operator*() const {
    return *_ptr;
}

template <class T>
T* smartPtr<T>::operator->() const {
    return _ptr;
}

template <class T>
T* smartPtr<T>::get() const {
    return _ptr;
}

template <class T>
int smartPtr<T>::use_count() const {
    return *_ref_count;
}

template <class T>
std::string smartPtr<T>::toString() const {
    std::stringstream ss;
    ss << "{";
    ss << "ref_count: " << *_ref_count;
    ss << "}";
    return ss.str();
}

template <class T>
void smartPtr<T>::release() {
    if (--(*_ref_count) == 0) {
        std::cout << *this << " (deleted)" << std::endl;
        delete _ptr;
        delete _ref_count;
    } else {
        std::cout << *this << " (released)" << std::endl;
    }
}
#endif //SMARTPTR_H
