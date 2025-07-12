#ifndef CONSOLE_H
#define CONSOLE_H

#if defined(_MSC_VER)
#include "Windows.h"
#endif
#include <iostream>

namespace ansi_term1 {

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
    // Windows code page constants
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

}

#endif /* CONSOLE_H */
