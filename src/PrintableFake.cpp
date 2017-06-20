#include "ArduinoFake.h"
#include "PrintableFake.h"

size_t Printable::printTo(Print& p) {
    return ArduinoFakeInstance(Printable)->printTo(p);
}
