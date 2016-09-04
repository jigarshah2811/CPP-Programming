
        // sample21a

	#include <iostream>

	class class8
	{
	private:
		long int a;
	public:
		class8(){
			a=5; 
			std::cout << "In constructor..."
			     << this << std::endl;
				  }
		long int get_a() { return a; }
		~class8(){ std::cout << "In destructor..."
				<< this << std::endl;
			 }
	};

	int main()
	{
	class8  object[40000];

	long int i;
	for (i = 0; i < 4; i++)
        	std::cout << object[i].get_a() << std::endl;

	return 0;
	}
