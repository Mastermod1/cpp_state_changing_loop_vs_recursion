#include "ctx.hpp"
#include <memory>
int main()
{
    auto ctx = std::make_shared<Ctx>();
    ctx->attach();
    for (int i = 0; i < 5; i++)
        ctx->render();
}
