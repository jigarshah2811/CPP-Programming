
        //      sample5

   #include <iostream>
   #include <iomanip>

   int main()
   {

   long int index = 100;
   float distance = 12.345678;


   std::cout << index << std::endl;
   std::cout << std::setfill ('X') << std::setw(10)  << index    << "\n";

   std::cout << distance << std::endl;
   std::cout << std::setprecision(4) << distance << "\n";
   std::cout << std::setw(12) << std::setprecision(3) << distance << "\n";
   return 0;

   }

