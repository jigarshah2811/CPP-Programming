        // sample18

   #include <iostream>

   class  class5
   {
   private:
                long int a;
   public:
                long int get_it() { return a; }

                class5(long int b)
                {  a = b; }
   };

   int main()
   {
        class5    newclass(145);

        class5    *pointer;
        pointer = &newclass;

        std::cout << "value through object "
             	  << newclass.get_it() << std::endl;

        std::cout << "value through pointer "
             	  << pointer->get_it() << std::endl;

        std::cout << "value through pointer "
             	  << (*pointer).get_it() << std::endl;

        return 0;
   }
