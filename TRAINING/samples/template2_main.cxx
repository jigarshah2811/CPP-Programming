        // template2

	#include  <iostream>
	#include  <string>
	using namespace std;

	#include <template2.h>

	int main()
	{
	conv<string,float> object1("F_to_C",100);
	conv<string,float> object2("F_to_M",100);
	conv<string,float> object3("L_to_G",100);
	conv<string,float> object4("F_to_I",100);

	object1.convert_value();
	cout << object1.first << " " << object1.second << " is "
	     << object1.output <<  endl;

	object1 = object2;	
	object1.convert_value();
	cout << object1.first << " " << object1.second << " is "
	     << object1.output <<  endl;

	return 0;
	}
