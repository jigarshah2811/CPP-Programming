   //      sample4c

   #include <iostream>
   #include <iomanip>

   int main()
   {

   long int index = 31;

   std::cout << "The decimal value of index is " << std::setw(8)
        << index << std::endl;

   std::cout << "The std::octal value of index is "  << std::setw(8)
        << std::setfill('X') << std::oct << index << std::endl;

   std::cout << "The cast value of index is "
        << std::setiosflags(std::ios::showpoint|std::ios::fixed)  
        << std::setprecision(5) << (float)index << std::endl;

   return 0;

   }

