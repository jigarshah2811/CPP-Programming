//  static_cast_a
//
#include <memory>

class base {};
class derived : public base {};
class derived2 {};

int main()
{
  derived *d = new derived;
  base *b = static_cast<base *>(d); 

  return 0;
}
