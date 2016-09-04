
        //     sample71.cxx 

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
        }   cars[12] =

        {  {"plym"  ,"fury"   ,77,73,2500},
	{   "chevy" ,"nova"   ,79,60,3000},
	{   "ford"  ,"mustang",65,45,10000},
	{   "volvo" ,"gl"     ,78,102,9850},
	{   "ford"  ,"ltd"    ,83,15,10500},
	{   "chevy" ,"nova"   ,80,50,3500},
	{   "fiat"  ,"600"    ,65,115,450},
	{   "honda" ,"accord" ,81,30,6000},
	{   "ford"  ,"thundbd",84,10,17000},
	{   "toyota","tercel" ,82,180,750},
	{   "chevy" ,"impala" ,65,85,1550},
	{   "ford"  ,"bronco" ,83,25,9500},
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

        //  cars_main.c 

	int main()
        {

	void dump(void);
	void makes(void);

	dump();

	makes();

	return 1;
 
        }
