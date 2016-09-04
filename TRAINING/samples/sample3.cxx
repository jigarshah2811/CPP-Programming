
        //      sample3

   #include <iostream>

   int main()
   {

   long int     i = 1024;
   long int     *p = &i;

   std::cout << "i:  " << i << "\t&i:\t" << &i << std::endl;

   std::cout << "*p: " << *p << "\tp:\t" << p << std::endl
        << "\t\t&p:\t" << &p << std::endl;

   return 0;
  }
