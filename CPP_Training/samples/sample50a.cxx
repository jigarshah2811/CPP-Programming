        // sample50a

	#include <iostream>

	class  ov
	{
	private:
		long int a,b;
	public:
		ov() { a=0; b=0; }
		ov(long int x,long int y) { a=x; b=y; }
		void get_a_b(long int &x,long int&y) { x=a; y=b; }
		void operator++(int);
		void operator++();
	};

	void ov::operator++()
	{
		a++;
	}
	void ov::operator++(int)
	{
		b++;
	}

	int main()
	{
	ov object(10,11);
	long int x,y;

	object++;
	++object;

	object.get_a_b(x,y);

	std::cout << "object++ a:" << x <<"  " << "object++ b:"
     	     << y << std::endl;

	return 0;
	}
