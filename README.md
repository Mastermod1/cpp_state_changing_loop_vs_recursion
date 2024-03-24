# Setup
Building and running looped test:
```
cd looped
make all
```
Building and running recursive test:
```
cd recursive
make all
```
# Outputs
## Loop
```
Created Ctx
Created Other
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Other::render().end
Ctx::render().end
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Other::render().end
Ctx::render().end
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Other::render().end
Ctx::render().end
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Other::render().end
Ctx::render().end
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Other::render().end
Ctx::render().end
Destructed Ctx
Destructed Other
```

## Recursion
```
Created Ctx
Created Other
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Ctx::render().start
Other::render().start
Created Other
Destructed Other
Other::render().end
Ctx::render().end
Other::render().end
Ctx::render().end
Other::render().end
Ctx::render().end
Other::render().end
Ctx::render().end
Other::render().end
Ctx::render().end
Destructed Ctx
Destructed Other
```

# Conclusion
Using looped method is much better as it clears each call tree after iteration and recursive solution does it oppsoite way. Recursive solution clears call tree at the end of program which might lead to stack overflow at some point.
