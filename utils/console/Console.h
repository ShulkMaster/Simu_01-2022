#ifndef SIMULATION_CONSOLE_H
#define SIMULATION_CONSOLE_H

#include <cstdarg>
#include <iostream>


class Console {
public:
    static void print(char * line);
    static void print(int lines, ...);

    static void printLine(char * line);
    static void printLines(int lines, ...);

};


#endif //SIMULATION_CONSOLE_H
