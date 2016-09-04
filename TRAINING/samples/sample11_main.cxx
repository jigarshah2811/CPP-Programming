        // sample11

   #include <unistd.h>
   #include <iostream>
   #include <cstdlib>

   #include <sample11.h>

   int main()
   {
   class1 object1;
   class  class1 object2;

   object1.set_private(1,2);
   object1.c = 3;

   object2.set_private(4,5);
   object2.c = 6;

   std::cout << "Object1's values are: "       << object1.get_private_a()
        << "," << object1.get_private_b() << "," << object1.c << std::endl;

   std::cout << "Object2's values are: "       << object2.get_private_a()
        << "," << object2.get_private_b() << "," << object2.c << std::endl;

   pause();
   return 0;
   }
