#pragma once

#ifdef UNIT_TEST
    #include "ArduinoFake.h"
#else
    #include "Arduino.h"
#endif

#include <Client.h>

class ServiceA
{
  public:
    ServiceA (Client &client);
    String request(const char*  url);

  private:
    Client* _client;
};
