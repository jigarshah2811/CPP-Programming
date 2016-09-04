
        // sample16b

   #include <iostream>

   class  class3
   {
   private:
                long int a,b;
   public:
                void set_a_b(long int c,long int d)
                {  a=c;b=d; }

                long int product() {return a * b; }
		class3   *pointer;

                ~class3()
                {  extern long int count;
                   std::cout << "In destructor for a=" << a <<" and b=" << b<< std::endl ;
                }
   };


   int main()
   {
        class3    *pointer;
        pointer = new class3[5];
	
                long int i;
        if (pointer)
        {
                for (i = 0; i < 5 ; i++)
		{
                        pointer[i].set_a_b(i,i);
			pointer[i].pointer=pointer;
		}

                for (i = 0; i < 5 ; i++)
                std::cout << "product [" << i << "] is: "
                     <<  pointer[i].product() << std::endl;
        }
        else
                std::cout << "allocation failure..." << std::endl ;

                for (i = 0; i < 5 ; i++)
		{
		pointer[i].~class3();
		}
   	
	delete [] pointer;
        return 0;
   }
