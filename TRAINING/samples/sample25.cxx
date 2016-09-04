        // sample25

   	#include <iostream>

   class class1
   {
   private:
                long int a;
                long int b;
   public:
                long int c;
                class1(long int x,long int y)
                {
                a = x;
                b = y;
                }
                long int  get_a() { return a;}
                long int  get_b() { return b;}
   };

   main()
   {
   class1 object1(1,2);
   class  class1 object2(4,5);

   object1.c = 3;
   object2.c = 6;

   std::cout << "Object1's values are: "       << object1.get_a()
        << "," << object1.get_b() << "," << object1.c << std::endl; 

   std::cout << "Object2's values are: "       << object2.get_a()
        << "," << object2.get_b() << "," << object2.c <<  std::endl;

   return 0;
   }
