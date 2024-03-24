#include <iostream>
#include <memory>

class Ctx;

class Other {
public:
  Other(std::shared_ptr<Ctx> ptr) : ptr_(ptr) {
    std::cout << "Created Other\n";
  }
  void render();
  ~Other() { std::cout << "Destructed Other\n"; }

  std::weak_ptr<Ctx> ptr_;
};
