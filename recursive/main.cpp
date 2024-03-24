#include "ctx.hpp"
#include <memory>
int main()
{
    auto ctx = std::make_shared<Ctx>();
    ctx->attach();
    ctx->render();
}
