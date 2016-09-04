
        //     sample74

	#include	<iostream>
	#include	<map>
	#include	<string>
	
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


	int main()
        {
	extern struct entry cars[12];
	
	map<string,long int>carss;
	map<string,long int>::iterator pointer;
	
	string str1(cars[0].make);
	carss.insert(pair<string,long int>(str1,1));

	for (long int i=1;i < 12;++i)
	{
	  
	   string str1(cars[i].make);
	   pointer=carss.find(str1);
	   if (pointer != carss.end())
	   {
	   carss.insert(pair<string,long int>(str1,1));
	   }
	   else
	   {
	   volatile long int value=pointer->second;
	   carss.erase(str1);
	   carss.insert(pair<string,long int>(str1,(const)(++value)));
	   }
	}
	pointer=carss.begin();

	while (pointer++ != (carss.end()))
	{
	std::cout << "key: " << pointer->first << " data: " << pointer->second << std::endl;
	}

	return 0;
 
        }
