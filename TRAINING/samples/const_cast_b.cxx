// const_cast_b
//
#include <iostream>

int main(void) 
{

// int a, the object referred to by c, has
// not been declared const
//
int a = 40;
const int *b = &a;
int *c = const_cast<int *>(b);
  
*c = 50;	// considered possibly unsafe

  return 0;
}
