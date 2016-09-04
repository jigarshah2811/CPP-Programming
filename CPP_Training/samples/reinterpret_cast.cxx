   //     reinterpret_cast 

   #include <iostream>

   int main()
   {

   float *a = new float(5.2);
   int   *b = reinterpret_cast<int *>(a);

   std::cout << *a << std::endl; 
   std::cout << *b << std::endl; 

   return 0;

   }

