        // sample69a

	#include <iostream>
	#include <vector>
	#include <cstdio>

	int main()
	{
	std::vector<long int> array(100);

	long int size=array.size();
	std::cout << "Initial size of array "<< size << std::endl;

	array.resize(1000000);	

	std::cout << "New size of array "<< array.size() << std::endl;

	return 0;
	}

