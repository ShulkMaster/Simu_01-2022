#include "Console.h"

void Console::print(char *line) {
    std::cout << line;
}

void Console::print(int lines, ...) {
    va_list list;
    va_start(list, lines);
    for (int i = 0; i < lines; ++i) {
        const char *line = static_cast<char *>(va_arg(list, char *));
        std::cout << line;
    }
}

void Console::printLine(char *line) {
    std::cout << line << std::endl;
}

void Console::printLines(int lines, ...) {
    va_list list;
    va_start(list, lines);
    for (int i = 0; i < lines; ++i) {
        const char *line = static_cast<char *>(va_arg(list, char *));
        std::cout << line << std::endl;
    }
}

