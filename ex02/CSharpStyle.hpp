#ifndef CSHARPSTYLE_HPP
#define CSHARPSTYLE_HPP

#include <iostream>
#include <string>

#define string std::string

#define foreach(TYPE, item, ptr) \
    for (TYPE** _p = (ptr); *_p != NULL; ++_p) \
        for (TYPE* item = *_p; item; item = NULL)

void WriteLine(const string& s);

#endif