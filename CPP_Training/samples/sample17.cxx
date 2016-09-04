        // sample17

   #include <iostream>
	using namespace std;
   class  class4
   {
   private:
                char a;
   public:
                void display() { std::cout << a << std::endl; }

                class4(char b)
                {  a = b;
                   std::cout << "In constructor..." << std::endl ;
                }
   };

   int main()
   {
		int i=0;
        class4 object[5] = {'a','b','c','d','e'};
		class4 *pointer;

		pointer = object;

		cout << "Use Object Array" << endl;
		for(i=0; i<5; i++)
        	object[i].display();
		
		cout << "Use Object Pointer" << endl;
		for(i=0; i<5; i++)
		{
			pointer->display();
			pointer++;
		}

/*
		int iter;
		cout << "Use ITERATORs" << endl;
		for (auto iter : object)
		{
			cout << iter.display() << endl;
		}

*/
        return 0;
   }
