#include "ctx.hpp"
#include "other.hpp"

void Other::render() {
  std::cout << "Other::render().start\n";
  ptr_.lock()->newState();
  std::cout << "Other::render().end\n";
}
