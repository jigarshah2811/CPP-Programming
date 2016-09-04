        //      sample1a

   #include <iostream>
   #include <cstring>

   long int count = 1;
  
   int main()
   {

   long int count = 2;

   std::cout << "local count = " << count << std::endl;
   std::cout << "global count = " << ::count << std::endl;

   return 0;
  }
