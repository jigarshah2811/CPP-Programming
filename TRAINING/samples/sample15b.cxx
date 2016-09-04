        // sample15b

   #include <iostream>
   #include <cstdlib>
   #include <new>

   class  class3
   {
   private:
                long int a,b;
   public:
                long int product() {return a * b; }

		class3(){ std::cout << "In constructor..." 
			       << this << std::endl;
			  a=5 ; b=6;
			}
                ~class3()
                {  std::cout << "In destructor..." 
			<< this << std::endl ; }
   };

   int main()
   {
        class3    *pointer;

        pointer = (class3 *)malloc(sizeof(class3));

        if (pointer)
        {
 	new(pointer) class3();	
        }
        else
                std::cout << "allocation failure..." << std::endl ;

	std::cout << pointer -> product() << std::endl;
	pointer -> ~class3();

	free(pointer);

        return 0;
   }
