#include "utility.h"

#include <iostream>

Debug debug;

Debug &Debug::operator<<(const char str[])
{
    std::cout << str;
    return debug;
}

Debug &Debug::operator<<(const std::string &str)
{
    *this << str.c_str();
    return debug;
}

Debug &Debug::operator<<(const Debug &otherDebug)
{
    return debug;
}

Debug &Debug::newline()
{
    std::cout << std::endl;
    return debug;
}
