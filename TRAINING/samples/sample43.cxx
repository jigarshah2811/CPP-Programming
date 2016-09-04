

        // sample43

	#include <iostream>

   class class2
   {
   private:
                long int a;
                long int b;
   public:
                class2() { a = 5; b = 6;}
                class2(long int n) { a = n; b = 6; }
                class2(long int n,long int m) { a = n; b = m;}
                void    show();
   };

   void class2::show()
   {
        std::cout << "value of variables a and b are "
             << a << " and " << b << std::endl;
   }

   int main()
   {
   class2 object1;
   class2 object2(16);
   class2 object3(14,15);

   object1.show();
   object2.show();
   object3.show();

   return 0;
   }
