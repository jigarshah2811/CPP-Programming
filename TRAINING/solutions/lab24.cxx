        // lab24a 

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

	void ov::operator++(int)
	{
		a++;
		b++;
		std::cout << "using postfix overload" << std::endl;
	}
	void ov::operator++()
	{
		a++;
		b++;
		std::cout << "using prefix overload" << std::endl;

	}


	int main()
	{
	ov object(10,11);
	long int x,y;

	object++;

	object.get_a_b(x,y);

	std::cout << "object++ a:" << x <<"  " << "object++ b:"
     	     << y << std::endl;

	++object;

	object.get_a_b(x,y);

	std::cout << "++object a:" << x <<"  " << "++object b:"
	     << y << std::endl;

	return 0;

	}
