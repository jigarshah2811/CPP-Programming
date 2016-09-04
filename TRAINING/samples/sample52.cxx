        // sample52

	#include <iostream>

	template <class TYPE>
	TYPE max(TYPE *array,long int size)
	{
	TYPE value = array[0];
	long int i;

	for (i=1; i < size; ++i)
	if (array[i] > value) value = array[i];

	return value;
	}

	int main()
	{

	long int  array1[] = {10,54,-999,543,23};
	double array2[] = {15.3,34.5,-87.5,55.12};

	long int  size1 = sizeof (array1) / sizeof(long int);
	long int  size2 = sizeof (array2) / sizeof(double);

	std::cout << "maximum value in array1 is: "
     	     << max(array1,size1) << std::endl;

	std::cout << "maximum value in array2 is: "
     	     << max(array2,size2) << std::endl;

	return 0;

	}
