        // sample68

	#include <iostream>
	#include <vector>

	int main()
	{
	std::vector<long int> array(100);

	std::cout << "Initial size of array "<< array.size() << std::endl;

	for (long int i=0;i < array.size();++i){array[i]=i;}	

	auto last=array.back();
	auto first=array.front();

	for (long int i=0;i < 4;++i){std::cout << first++ << " ";}

	std::cout << std::endl;

	for (long int i=0;i < 4;++i){std::cout << last-- << " ";}

	std::cout << std::endl;

	return 0;
	}

