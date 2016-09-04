#include <iostream>
using namespace std;

class coordinates
{
	private:
		int x;
		int y;
	public:
		coordinates(){x=0; y=0;}
		coordinates(int a){x=0; y=a;}
		coordinates(int a, int b){x=a; y=b;}
	
	friend coordinates &display(coordinates &coordinate);
};

coordinates &coordinates::display(coordinates &coordinate)
{
	cout<<"Displaying"<<coordinate.x<<coordinate.y;
	return coordinate;
}

int main()
{
	coordinates first, second(1), third(2);
	//std::cout<< display(first) << display(second) << display(third);
	return 0;
}
