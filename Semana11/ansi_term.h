#ifndef CONSOLE_H
#define CONSOLE_H

#if defined(_MSC_VER)
#include "Windows.h"
#endif
#include <iostream>

/* -----------------------------------------------------
 *
 * (c) 2019-2024
 * Georges Alfaro S.
 *
 * version 2.3.4 2024-05-30
 * - Se cambia la función de inicialización para que utilice la biblioteca
 *   propia de Windows al configurar la página de códigos de la consola.
 *
 * version 2.3.3 2024-05-13
 * - Se cambia la secuencia de escape '\e' por '\x1B', ya que
 *   la secuencia es una extensión no estándar de GCC.
 * - Se sustituyen los códigos de página por valores constantes,
 *   ya que algunos compiladores (en especial MS Visual Studio)
 *   no permiten modificar el valor de los elementos en una enumeración.
 *
 * version 2.2.1 2023-04-25
 *
 * https://invisible-island.net/xterm/ctlseqs/ctlseqs.html
 * https://www.ecma-international.org/publications-and-standards/standards/ecma-48/
 * https://www.ecma-international.org/wp-content/uploads/ECMA-48_5th_edition_june_1991.pdf
 * http://www.zedwood.com/article/cpp-utf8-strlen-function
 *
 * -----------------------------------------------------
 */

namespace ansi_term {

    enum color {
        BLACK = 0,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE,

        BRIGHT_BLACK,
        BRIGHT_RED,
        BRIGHT_GREEN,
        BRIGHT_YELLOW,
        BRIGHT_BLUE,
        BRIGHT_MAGENTA,
        BRIGHT_CYAN,
        BRIGHT_WHITE
    };

#if defined(_MSC_VER)
#else
    const int IBMPC_OEM_CP = 437;
    const int IBMPC_850_CP = 850;
    const int UNICODE_CP = 65001;
#endif

#if defined(_MSC_VER)
    void init(int = CP_UTF8);
#else
    void init(int = UNICODE_CP);
#endif

    std::string reset();

    std::string clear();
    std::string clear_eol();
    std::string home();
    std::string gotoxy(int, int);

    std::string color(int);
    std::string background(int, bool = false);

    int utf8_strlen(const std::string&);

};

#endif /* CONSOLE_H */
