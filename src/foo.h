#pragma once
#include "static_init.h"

class Foo
{
public:
    DECLARE_STATIC_INIT(Foo);
    Foo();
};
