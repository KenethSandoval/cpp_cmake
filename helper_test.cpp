#include "helper.h"

#include <cassert>

int main() {
  assert(signum(0) == 1);
  assert(signum(1) == 1);
}
