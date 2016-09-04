#include <iostream>
using namespace std;

namespace temp
{
	template<typename T1, typename T2>

	class cv
	{
		public:
		T1 input;
		T2 output;
		virtual T2 conversion(T1);
	};
};

class F_to_C : public temp::cv
{
	public:
		T2 conversion(T1)
		{
			return (T1 - 32) / 2;
		}
};

int main()
{
	int cent = 100;
	int fern = 0;

	F_to_C object;
	

	fern = object.conversion(cent);
	cout << fern << endl;

}
