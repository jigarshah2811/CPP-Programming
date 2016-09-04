// unique
// 
#include <iostream>
#include <memory>

int output(int *p)
{
   return *p;
}

int main()
{
std::unique_ptr<int> p1(new int(42));

if(p1)
  std::cout << "ptr: p1=" << output(p1.get()) << std::endl;;

std::unique_ptr<int> p2 = std::move(p1); 
(*p2)++;

if(p1)
  std::cout << "ptr: p1=" << output(p1.get()) << std::endl;;

if(p2)
  std::cout << "ptr: p2=" << output(p2.get()) << std::endl;;

return 0;
}
