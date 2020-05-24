//clang++ -std=c++14 -O2 -Wall -pedantic -pthread ArtAscii.cpp && ./a.out

#include <iostream>

int main()
{
    std::cout << R"(
                   ,  ,
                   \\ \\
                   ) \\ \\    _p_
                   )^\))\))  /  *\
                    \_|| || / /^--
           __       -\ \\--/ /
         <'  \\----/   ___. )'
              `====\ )___/\\
                   //     `|
                   \\    /  \
                   `  +========+
                      |I       |
                      |Love    |
                      |C++     |
                      +========+
)" << '\n';
    return 0;
}