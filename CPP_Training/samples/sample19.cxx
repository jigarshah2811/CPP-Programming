        // sample19

   #include <iostream>

   class class6
   {
   private:
                long int a;
   public:
                class6() { a = 56 ; }
                void get_a() {
                              std::cout <<"direct a: "<<a<<std::endl;
                              std::cout <<"this->a: "
                                   << this->a << std::endl;
                              }
   };

   int main()
   {
   class6 object6;

        object6.get_a();

   return 0;
   }
