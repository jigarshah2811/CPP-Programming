// unique
// 
#include <iostream>
#include <memory>

void foo(int *p)
{
   std::cout << *p << std::endl;
}

int main()
{
std::unique_ptr<int> p1(new int(42));
std::unique_ptr<int> p2 = std::move(p1); 

if(p1)
  foo(p1.get());

(*p2)++;

if(p2)
  foo(p2.get());

return 0;
}
