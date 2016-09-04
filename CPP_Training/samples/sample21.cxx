
        // sample21

	#include <iostream>

	class class8
	{
	private:
		long int a;
	public:
		class8(long int n){
			a = n; 
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
	class8  object[4] = {1,2,3,4};

	long int i;
	for (i = 0; i < 4; i++)
        	std::cout << object[i].get_a() << std::endl;
	return 0;
	}
