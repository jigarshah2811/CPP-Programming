        // sample11c

   #include <iostream>

   class class1
   {
   public:
                static long int obj_count;
                class1(){obj_count++;}
		~class1(){obj_count--;}
   };

   long int class1::obj_count = 0;

   int main()
   {
   std::cout << "count of objects is " << class1::obj_count << std::endl;

   class1 object1, object2, *pointer;

   std::cout << "count of objects is now " << object1.obj_count << std::endl;

   pointer = new class1;   

   std::cout << "count of objects is now " << pointer->obj_count << std::endl;

   delete pointer;   

   std::cout << "count of objects is now " << object2.obj_count << std::endl;

   return 0;
   }
