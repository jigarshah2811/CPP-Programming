// const_cast_a
//
#include <iostream>

void f(int *p) 
{
  std::cout << *p << std::endl;
}

int main(void) 
{
  const int  a = 10;
  const int *b = &a;

// Function f() expects int *, not const int *
//
 f(b);
// int *c = const_cast<int *>(b);
// f(c);

 return 0;
}
