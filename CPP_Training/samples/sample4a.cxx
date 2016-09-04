        //      sample4a

   #include <iostream>

   int main()
   {

   long int index = -23;
   float distance = 12.345;
   char letter = 'X';
   char name[] = {"C++ is like C, but definitely different !"};


   std::cout << "The value of index is "    << index    << std::endl ;
   std::cout << "The value of distance is " << distance << std::endl ;
   std::cout << "The value of letter is "   << letter   << std::endl ;
   std::cout << "The value of name is "     << name     << std::endl ;

   index = 31;

   std::cout.setf(std::ios::dec | std::ios::showpos);
   std::cout << "The decimal value of index is " << index << std::endl ;
   std::cout.unsetf(std::ios::dec);
   std::cout.setf(std::ios::oct,std::ios::basefield);
   std::cout.setf(std::ios::showbase);
   std::cout << "The octal value of index is " << index << std::endl ;
   std::cout.unsetf(std::ios::showbase | std::ios::oct);
   std::cout.setf(std::ios::showpoint | std::ios::dec | std::ios::fixed);
   std::cout << "The cast value of index is " << (float)index << std::endl ;

   return 0;

   }

