#include <iostream>
using namespace std;

class Hello
{
	private:
		int a;
	public:
		int get_a(){return a;}
		Hello(int b)
		{
			a=b;
			cout << "In Constructor:" << this << " Value:" << a << endl;
		}
		~Hello()
		{
			cout << "In Destructor:" << this << " Value:" << a << endl;
		}
};

int main()
{
	Hello hellos[5] = {1,2,3,4,5};
	
	for(int i=0; i<5; i++)
		cout << hellos[i].get_a() << endl;

}
