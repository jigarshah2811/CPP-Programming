#include <string>
#include <iostream>
#include <tuple>
#include <list>

using namespace std;

int main()
{
	tuple<string, int> object1("Jigar", 30);	
	auto object2 = make_tuple("Krupa", 31);

	list<tuple<string, int>> mylist;
	mylist.push_back(object1);
	mylist.push_back(object2);

	for (auto iter : mylist)
	{
		cout << std::get<0>(iter) << " ";
		cout << std::get<1>(iter) << endl;
	}

	return 0;
}
