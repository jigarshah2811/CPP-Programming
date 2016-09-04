   #include <cstdlib>

   #include <sample11.h>

   void class1::set_private(long int x,long int y)
   {
        a = x;
        b = y;
   }
   long int class1::get_private_a()
   {
        return a;
   }
   long int class1::get_private_b()
   {
        return b;
   }
