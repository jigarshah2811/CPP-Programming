        // sample7

   #include  <iostream>

   int main()

   {

   char  c;

   std::cout << "Enter keys, 'x' to finish" << std::endl;

   do  {
        std::cout << ": ";
        std::cin  >> c;
        std::cout << "Key entered was " << c << std::endl;
       }  while (c != 'x');

   return 0;

   }
