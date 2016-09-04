//  static_cast_b
//
  #include <memory>

class base {};
class derived : public base {};
class derived2 {};

int main()
{
  derived *d = new derived;

  derived2 *x = static_cast<derived *>(d); 
  return 0;
}
