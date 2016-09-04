        // sample17

   #include <iostream>

   class  class4
   {
   private:
                long int a;
   public:
                void display() { std::cout << a << std::endl; }

                class4(long int b)
                {  a = b;
                   std::cout << "In constructor..." << std::endl ;
                }
   };

   int main()
   {
        class4    newclass(45);

        newclass.display();

        return 0;
   }
