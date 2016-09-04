        //     nullptr 

   #include <iostream>

   int main()
   {

   int *p1 = NULL;
   int *p2 = nullptr;   
   if(p1 == p2)
   {
   std::cout << "two forms of null are the same" << std::endl;
   }

   return 0;
  }
