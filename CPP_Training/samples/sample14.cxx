        // sample14

   #include <iostream>
   #include <iomanip>

   int main()
   {
        long int *pointer;

        pointer = new long int;

        if (pointer)
        {
                *pointer = 1000;
                std::cout << "value at address " << 
		     std::setiosflags(std::ios::showbase) << pointer
                     << " is " << *pointer << std::endl ;
                delete pointer;
        }
        else
                std::cout << "allocation failure..." << std::endl ;

        return 0;
   }
