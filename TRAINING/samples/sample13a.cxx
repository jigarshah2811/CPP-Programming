
        // sample13a

   #include <iostream>

   class class2
   {
   private:
                long int a;
	
   public:
                class2();
                ~class2();
                void    show();
   };

   class2::class2()
   {
        std::cout << "in constructor..." << this << std::endl ;
        a = 15;
   }

   class2::~class2()
   {
        std::cout << "in destructor..." << this << std::endl ;
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
