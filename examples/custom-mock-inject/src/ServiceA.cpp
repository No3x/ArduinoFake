#include "ServiceA.h"

ServiceA::ServiceA(Client &client)
: _client(&client)
{}

ServiceA::request(const char *url) {
  //TODO: meaningful implementation.
  // Currently not implemented because testing/mock is the focus
  // Can I inject a client mock and verify interaction with connect?
  client->connect(url, 80);
  return url;
}
