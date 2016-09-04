
        // sample70

	#include <iostream>
	#include <vector>
	#include <cstdio>

	int main()
	{
	vector<long int> array(100);
	vector<long int>::iterator pointer=array.begin();

	long int size=array.size();
	std::cout << "Initial size of array "<< size << std::endl;

	for (long int i=0;pointer != array.end();++i){*pointer++ = i;}	

	pointer = array.begin();
	for (long int i=0;i < 4;++i){printf("%8ld",*pointer++);}

	std::cout << std::endl;

	for (long int i=0;i < size;++i){array.push_back(i + 100);}

	std::cout << "New size of array "<< array.size() << std::endl;

	
	pointer = array.end() - 1;
	for (long int i=0;i < 4;++i){printf("%8ld",*pointer--);}

	std::cout << std::endl;

	return 0;
	}

