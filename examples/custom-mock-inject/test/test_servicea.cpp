#include <ArduinoFake.h>
#include "ServiceA.h"
#include <unity.h>

using namespace fakeit;

ServiceA* service;

void test_connect(void)
{
    When(Method(ArduinoFake(), connect)).Return();

    service->request("google.com");

    Verify(Method(ArduinoFake(), connect)).Once();

}


void setUp(void)
{
    Client clientMock = ArduinoFake(Client).get();
    ServiceA service(&clientMock);
    ArduinoFakeReset();
}

int main(int argc, char **argv)
{
    UNITY_BEGIN();

    RUN_TEST(test_connect);

    UNITY_END();

    return 0;
}
