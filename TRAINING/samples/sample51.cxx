        // sample51

	#include <iostream>

	class  ov
	{
	private:
		long int a,b;
	public:
		ov() { a=0; b=0; }
		ov(long int x,long int y) { a=x; b=y; }
		long int operator==(ov temp);
		long int operator&&(ov temp);
	};

	long int ov::operator==(ov temp)
	{
	if (a==temp.a && b==temp.b) return 1;
	else return 0;
	}

	long int ov::operator&&(ov temp)
	{
	return ((a && temp.a) && (b && temp.b));
	}
	int main()
	{

	ov object1(10,10),object2(5,3),object3(10,10),object4(0,0);

	//if (object1.operator==(object2)) std::cout << "obj1 = ob2" << std::endl;
	if (object1==object2) std::cout << "object1 equals object2" << std::endl;
	else std::cout << "object1 and object2 are different" << std::endl;

	if (object1==object3) std::cout << "object 1 equals object3" << std::endl;
	else std::cout << "object1 and object3 are different" << std::endl;

	if (object1&&object2) std::cout << "object 1 && object2 is true" << std::endl;
	else std::cout << "object1 and object2 is false" << std::endl;

	if (object1&&object4) std::cout << "object 1 && object4 is true" << std::endl;
	else std::cout << "object1 and object4 is false" << std::endl;

	return 0;
	}
