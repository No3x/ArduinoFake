#include "ArduinoFake.h"
#include "IPAddressFake.h"

size_t IPAddress::printTo(Print& p) const
{
    return ArduinoFakeInstance(IPAddress)->printTo(p);
}
