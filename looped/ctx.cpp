#include "other.hpp"
#include "ctx.hpp"

void Ctx::render() {
    if (counter_ > 5)
        return;
    counter_++;
    std::cout << "Ctx::render().start\n";
  ptr_->render();
  std::cout << "Ctx::render().end\n";
}
void Ctx::newState() {
  ptr_ = std::make_shared<Other>(shared_from_this());
}

void Ctx::attach() { ptr_ = std::make_shared<Other>(shared_from_this()); }
