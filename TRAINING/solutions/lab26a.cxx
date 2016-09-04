        // lab26a

	#include <iostream>
	#include <vector>
	#include <cstdio>
	#include <algorithm>

	void output(int i) {printf("%3ld ",i);}

	int main()
	{
	std::vector<long int> array(10);
	auto pointer=array.begin();

	long int size=array.size();
	std::cout << "Initial size of array "<< size << std::endl;

	for (long int i=1;pointer != array.end();++i){*pointer++ = i;}	

	std::for_each(array.begin(),array.end(),output);

	std::cout << std::endl;

	pointer = array.end() - 1;
	while (pointer >= array.begin()){printf("%3ld",*pointer--);}

	std::cout << std::endl;

	return 0;
	}

