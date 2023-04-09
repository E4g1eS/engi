#ifndef UTILITY_H
#define UTILITY_H

#include <string>

class Debug
{
public:
    Debug& operator<<(const char str[]);
    Debug& operator<<(const std::string &str);
    Debug& operator<<(const Debug &otherDebug);
    Debug& newline();
};

extern Debug debug;

#endif