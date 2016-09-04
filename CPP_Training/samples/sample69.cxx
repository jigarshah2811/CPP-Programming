        // sample69

	#include <iostream>
	#include <vector>
	#include <cstdio>

	int main()
	{
	std::vector<long int> array(100);
	auto first=array.front();

	long int size=array.size();
	std::cout << "Initial size of array "<< size << std::endl;

	for (long int i=0;i < size;++i){array[i]=i;}	

	for (long int i=0;i < 4;++i){std::printf("%8ld",first++);}

	std::cout << std::endl;

	for (long int i=0;i < size;++i){array.push_back(i + 100);}

	std::cout << "New size of array "<< array.size() << std::endl;

	auto last=array.back();

	for (long int i=0;i < 4;++i){std::printf("%8ld",last--);}

	std::cout << std::endl;

	return 0;
	}

