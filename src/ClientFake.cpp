#include "ArduinoFake.h"
#include "ClientFake.h"

int Client::connect(IPAddress ip, uint16_t port)
{
    return ArduinoFakeInstance(Client)->connect(ip, port);
}

int Client::connect(const char *host, uint16_t port)
{
    return ArduinoFakeInstance(Client)->connect(host, port);
}

size_t Client::write(uint8_t m)
{
    return ArduinoFakeInstance(Client)->write(m);
}

size_t Client::write(const uint8_t *buf, size_t size)
{
    return ArduinoFakeInstance(Client)->write(buf, size);
}

int Client::available(void)
{
    return ArduinoFakeInstance(Client)->available();
}

int Client::read(void)
{
    return ArduinoFakeInstance(Client)->read();
}

int Client::read(uint8_t *buf, size_t size)
{
    return ArduinoFakeInstance(Client)->read(buf, size);
}

int Client::peek(void)
{
    return ArduinoFakeInstance(Client)->peek();
}

void Client::flush(void)
{
    ArduinoFakeInstance(Client)->flush();
}

void Client::stop(void)
{
    ArduinoFakeInstance(Client)->stop();
}

uint8_t Client::connected(void)
{
    return ArduinoFakeInstance(Client)->connected();
}

//? Client Client;
