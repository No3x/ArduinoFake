#ifndef IPADDRESS_FAKE_H
#define IPADDRESS_FAKE_H

#include "ArduinoFake.h"
#include "PrintableFake.h"
#include "arduino/IPAddress.h"

struct IPAddressFake : public PrintableFake
{
    // Constructors
    //TODO: what to do with constructors?
    //IPAddress();
    //IPAddress(uint8_t first_octet, uint8_t second_octet, uint8_t third_octet, uint8_t fourth_octet);
    //IPAddress(uint32_t address);
    //IPAddress(const uint8_t *address);

    //TODO: bool fromString(const char *address);
    //TODO: bool fromString(const String &address) { return fromString(address.c_str()); }

    // Overloaded cast operator to allow IPAddress objects to be used where a pointer
    // to a four-byte uint8_t array is expected
    //TODO: operator uint32_t() const { return _address.dword; };
    //TODO: bool operator==(const IPAddress& addr) const { return _address.dword == addr._address.dword; };
    //TODO: bool operator==(const uint8_t* addr) const;

    // Overloaded index operator to allow getting and setting individual octets of the address
    //TODO: uint8_t operator[](int index) const { return _address.bytes[index]; };
    //TODO: uint8_t& operator[](int index) { return _address.bytes[index]; };

    // Overloaded copy operators to allow initialisation of IPAddress objects from other types
    //TODO: IPAddress& operator=(const uint8_t *address);
    //TODO: IPAddress& operator=(uint32_t address);

    virtual size_t printTo(Print& p) const;
};

#endif // IPADDRESS_FAKE_H
