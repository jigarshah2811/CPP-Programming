        // sample11a

   #include <iostream>
   #include <cstdlib>

   class class1
   {
   private:
                long int a;
                long int b;
   public:
                long int c;
                void set_private(long int x,long int y);
                long int  get_private_a();
                long int  get_private_b();
   };

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

   int main()
   {
   class1 object1;
   class  class1 object2;

   object1.set_private(1,2);
   object1.c = 3;

   object2.set_private(4,5);
   object2.c = 6;

   object1.a = 5;

   std::cout << "Object1's values are: "       << object1.get_private_a()
        << "," << object1.get_private_b() << "," << object1.c << std::endl;

   std::cout << "Object2's values are: "       << object2.get_private_a()
        << "," << object2.get_private_b() << "," << object2.c << std::endl;

   return 0;
   }
