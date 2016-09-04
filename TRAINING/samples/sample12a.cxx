        // sample12a

   #include <iostream>

   class class2
   {
   private:
                long int a;
                class2();
   public:
                
                void    show();
   };

   class2::class2()
   {
        std::cout << "in constructor function..." << std::endl ;
        a = 15;
   }

   void class2::show()
   {
        std::cout << "value of variable a is " << a << std::endl ;
   }

   int main()
   {
   class2 object2;

   object2.show();

   return 0;
   }
