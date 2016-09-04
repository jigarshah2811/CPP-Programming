
        // sample18a

   #include <iostream>

   class  class5
   {
   private:
                long int a;
   public:
                long int get_it() { return a; }
                long int c;
                class5(long int b)
                {  a = b;
		   c = b;
		}
   };

   int main()
   {

	long int class5::*data_pointer;
        data_pointer = &class5::c;

        class5    newclass (145);

        class5    *pointer;
        pointer = &newclass;

        std::cout << "value through object "
             	  << newclass.get_it() << std::endl;

        std::cout << "value through pointer "
             	  << pointer->get_it() << std::endl;

        std::cout << "value through pointer "
             	  << (*pointer).get_it() << std::endl;


	std::cout << "value through ptr-to-member "
	     << newclass.*data_pointer << std::endl;

        return 0;
   }
