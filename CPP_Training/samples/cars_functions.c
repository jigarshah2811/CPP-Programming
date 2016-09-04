
        //   cars_functions2.c

	#include	<stdio.h>
	#include	<stdlib.h>
	#include	<string.h>

	struct  entry
	{
	char     make[10];
	char     model[10];
	long int year;
	long int miles;
	long int value;
	};

        void dump(void)
        {
	extern struct entry cars[12];
	
	for (long int count = 0 ; count < 12; ++count)

	printf("car: %-8s make: %-8s year: %ld\n",
		cars[count].make,cars[count].model,cars[count].year);
        }

	void makes(void)
	{
	extern struct entry cars[12];

	struct makes
	{
	char	 make[10];
	long int count;
	}array[8]={{"plym",0},{"chevy",0},{"ford",0},
		   {"fiat",0},{"volvo",0},{"honda",0},
		   {"toyota",0}};

	for (long int counter = 0 ; counter < 12; ++counter)
	   for (long int counter2 = 0 ; counter2 < 7; ++counter2)
		if (strcmp(array[counter2].make,cars[counter].make) == 0) 
		++array[counter2].count;

	for (long int counter = 0 ; counter < 7; ++counter)
	printf("make: %-8s in-stock: %ld\n",
		array[counter].make,array[counter].count);
	}
