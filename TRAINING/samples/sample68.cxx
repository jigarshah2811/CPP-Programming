
        // sample68

	#include <iostream>
	#include <vector>
	#include <cstdio>

	int main()
	{
	std::vector<long int> array(100);

	std::cout << "Initial size of array "<< array.size() << std::endl;

	for (long int i=0;i < array.size();++i){array[i]=i;}	

	auto last=array.back();
	auto first=array.front();

	for (long int i=0;i < 4;++i){std::printf("%8ld",first++);}

	std::cout << std::endl;

	for (long int i=0;i < 4;++i){std::printf("%8ld",last--);}

	std::cout << std::endl;

	return 0;
	}

