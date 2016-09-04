        //     sample71_f.cxx 

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


		entry(char *a,char *b,long int c,
		      long int d,long int e)
		{
		   std::strcpy(make,a);
		   std::strcpy(model,b);
		   year=c;
		   miles=d;
		   value=e;
		}
        };   

	int main()
        {
	entry cars[12] = {
	   entry((char *)"plym"  ,(char *)"fury"   ,77,73,2500),
	   entry((char *)"chevy" ,(char *)"nova"   ,79,60,3000),
	   entry((char *)"ford"  ,(char *)"mustang",65,45,10000),
	   entry((char *)"volvo" ,(char *)"gl"     ,78,102,9850),
	   entry((char *)"ford"  ,(char *)"ltd"    ,83,15,10500),
	   entry((char *)"chevy" ,(char *)"nova"   ,80,50,3500),
	   entry((char *)"fiat"  ,(char *)"600"    ,65,115,450),
	   entry((char *)"honda" ,(char *)"accord" ,81,30,6000),
	   entry((char *)"ford"  ,(char *)"thundbd",84,10,17000),
	   entry((char *)"toyota",(char *)"tercel" ,82,180,750),
	   entry((char *)"chevy" ,(char *)"impala" ,65,85,1550),
	   entry((char *)"ford"  ,(char *)"bronco" ,83,25,9500)
        }; 

	std::string car_make;
	std::map<std::string,long int>carss;
	
	for (auto &ptr : cars)
	{
	car_make=ptr.make;
	++carss[car_make];
	}

	for ( const auto &pointer : carss) 
	{
	std::cout << "key: " << pointer.first << " data: " 
	     << pointer.second << std::endl;
	}

	return 0;
 
        }
