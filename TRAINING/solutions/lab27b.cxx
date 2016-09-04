        //     1ab27b.cxx 

	#include	<iostream>
	#include	<map>
	#include	<string>
	#include	<cstring>
	
	class entry
        {
	public:
             std::string   make;
             std::string   model;
             long int year,miles,value;

	     entry(std::string a,std::string b,long int c,
		   long int d,long int e)
	     {
		   make=a;
		   model=b;
		   year=c;
		   miles=d;
		   value=e;
	     }
        };   

	int main()
        {
	long int year;
	entry cars[12] = {
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

	std::map<long int,long int> carss;
	
	for (auto &ptr : cars)
	{
	year = ptr.year;
	++carss[year];
	}

	for ( const auto &pointer : carss) 
	{
	std::cout << "key: " << pointer.first << " data: " 
	     << pointer.second << std::endl;
	}

	return 0;
 
        }
