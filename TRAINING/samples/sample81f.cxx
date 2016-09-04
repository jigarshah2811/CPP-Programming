// sample81f
	
#include <iostream>
#include <memory>

class sample{
	 public:
	  sample() { std::cout << "constructor..."  << std::endl;}
	  ~sample() { std::cout << "destructor..."  << std::endl;}
	  void hello() {std::cout <<"hello" << std::endl;}
	   };
int main()
{
	std::shared_ptr<sample> ptr1(new sample);

	std::cout << "ownership count: " << ptr1.use_count() << std::endl;
	std::shared_ptr<sample> ptr2(ptr1);
	std::cout << "ownership count: " << ptr2.use_count() << std::endl;
	std::shared_ptr<sample> ptr3(ptr1);
	std::cout << "ownership count: " << ptr1.use_count() << std::endl;
	ptr2.reset();
	std::cout << "ownership count: " << ptr3.use_count() << std::endl;
	ptr3.reset();
	std::cout << "ownership count: " << ptr1.use_count() << std::endl;
	ptr1.reset();
	std::cout << "at end..." << std::endl;

	return 0;
}
