#include <iostream>
#include <cstring>
#include <string>

using namespace std;

namespace temp
{
	template<typename T1, typename T2>
	class person
	{
		public:
			T1 name;
			T2 age;
			person(T1 a, T2 b){name=a; age=b;}
	};
};

int main()
{

	temp::person<string, int> object1("Jigar", 30);
	temp::person<string, int> object2("Krupa", 30);
	temp::person<float, int> object3(100.30, 30);
	temp::person<float, int> object4('K', 30);


	cout << object1.name << " " << object1.age << endl;
	cout << object2.name << " " << object2.age << endl;
	cout << object3.name << " " << object3.age << endl;
	cout << object4.name << " " << object4.age << endl;
/*
	auto &iter : temp;
	cout << iter->name << iter->age << endl;
	iter++;
*/
}
