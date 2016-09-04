
        // sample67a

	#include <iostream>
	using namespace std;

	namespace{
		 long int x;
		 }

	void function1();
	
	int main()
	{
	x=5;
	cout << "x=" << x << endl;

	function1();

	cout << "x=" << x << endl;

	return 0;
	}

	void function1() {
			 x=10;
			 }