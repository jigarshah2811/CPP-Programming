// sample81e
	
#include <iostream>
#include <memory>

class sample{
	 public:
	  sample() { std::cout << "constructor..."  << std::endl;}
	  ~sample() { std::cout << "destructor..."  << std::endl;}
	   };
int main()
{
	std::shared_ptr<sample> ptr1(new sample);

	std::cout << ptr1.get() << std::endl;

	std::shared_ptr<sample> ptr2(ptr1);

	std::cout << ptr1.get() << std::endl;
	std::cout << ptr2.get() << std::endl;

	return 0;
}
