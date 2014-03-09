#include "foo.h"

#include <iostream>

STATIC_INIT(Foo)
{
    std::cout << "I'm the static initialization block of Foo\n";
}

Foo::Foo()
{
    std::cout << "I'm the constructor of Foo\n";
}
