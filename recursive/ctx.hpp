#include <iostream>
#include <memory>

class Other;

class Ctx : public std::enable_shared_from_this<Ctx> {
public:
  Ctx() { std::cout << "Created Ctx\n"; }
  void render();
  void newState();
  void attach();
  ~Ctx() { std::cout << "Destructed Ctx\n"; }

  std::shared_ptr<Other> ptr_;
  int counter_ = 0;
};
