
        // lab26

	#include <iostream>
	#include <vector>
	#include <cstdio>
	using namespace std;

	int main()
	{
	vector<long int> array(10);
	vector<long int>::iterator pointer=array.begin();

	long int size=array.size();
	cout << "Initial size of array "<< size << endl;

	for (long int i=1;pointer != array.end();++i){*pointer++ = i;}	

	pointer = array.begin();
	while (pointer != array.end()){printf("%3ld",*pointer++);}

	cout << endl;

	pointer = array.end() - 1;
	while (pointer >= array.begin()){printf("%3ld",*pointer--);}

	cout << endl;

	return 0;
	}

