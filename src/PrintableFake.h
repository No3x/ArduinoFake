#ifndef PRINTABLE_FAKE_H
#define PRINTABLE_FAKE_H

#include "ArduinoFake.h"
#include "PrintFake.h"
#include "arduino/Printable.h"

struct PrintableFake
{
    virtual size_t printTo(Print& p) const = 0;
};

#endif // PRINTABLE_FAKE_H
