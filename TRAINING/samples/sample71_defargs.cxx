
        //     sample71.cxx 

	#include	<iostream>
	#include	<map>
	#include	<string>
	#include	<cstring>
	
	class entry
        {
	public:
        	char     make[10];
        	char     model[10];
        	long int year;
        	long int miles;
        	long int value;


		entry(char *a="plym",char *b="fury",long int c=85,
		      long int d=2000,long int e=100)
		{
		   strcpy(make,a);
		   strcpy(model,b);
		   year=c;
		   miles=d;
		   value=e;
		}
        };   

	int main()
        {
	entry cars[400] = {
	   entry("plym"  ,"fury"   ,77,73,2500),
	   entry("chevy" ,"nova"   ,79,60,3000),
	   entry("ford"  ,"mustang",65,45,10000),
	   entry("volvo" ,"gl"     ,78,102,9850),
	   entry("ford"  ,"ltd"    ,83,15,10500),
	   entry("chevy" ,"nova"   ,80,50,3500),
	   entry("fiat"  ,"600"    ,65,115,450),
	   entry("honda" ,"accord" ,81,30,6000),
	   entry("ford"  ,"thundbd",84,10,17000),
	   entry("toyota","tercel" ,82,180,750),
	   entry("chevy" ,"impala" ,65,85,1550),
	   entry("ford"  ,"bronco" ,83,25,9500)
        }; 

	string car_make;
	map<string,long int>carss;
	
	for (long int i=0;i < 12;++i)
	{
	car_make=cars[i].make;
	++carss[car_make];
	}

	map<string,long int>::iterator pointer = carss.begin();

	while (pointer != (carss.end()))
	{
	std::cout << "key: " << pointer->first << " data: " 
	     << pointer->second << std::endl;
	pointer++;
	}

	return 0;
 
        }
