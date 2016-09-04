
        //      sample4b

   #include <iostream>

   int main()
   {

   long int index = 31;

   std::cout << "The decimal value of index is ";
   std::cout.width(8);
   std::cout << index << std::endl;

   std::cout << "The std::octal value of index is " ;
   std::cout.width(8);
   std::cout.fill('X');
   std::cout.unsetf(ios::dec);
   std::cout.setf(ios::std::oct);
   std::cout << index << std::endl;
   std::cout.unsetf(ios::std::oct);
   std::cout.setf(ios::dec | ios::showpoint);
   std::cout.precision(5);
   std::cout << "The cast value of index is " << (float)index << std::endl;

   return 0;

   }

