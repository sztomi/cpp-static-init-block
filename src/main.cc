#include <iostream>
#include "static_init.h"
#include "foo.h"

class Bar
{
    DECLARE_STATIC_INIT(Bar);
};

STATIC_INIT(Bar)
{
    std::cout << "I'm the static initialization block of Bar\n";
}

int main()
{
    static_init::execute();
    Foo foo1, foo2;
}
