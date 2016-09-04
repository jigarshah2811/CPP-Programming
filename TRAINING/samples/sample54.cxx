        // sample54

	#include  <iostream>

	class coordinates 
	{
	private:
        	long int  a,b;
	public:
        	coordinates() { a = 0; b = 0 ; }
        	coordinates(long int x) { a = x; b = 0 ; }
        	coordinates(long int x,long int y) { a = x; b = y ; }

        friend std::ostream &operator<< (std::ostream &stream, coordinates object);
	};

	std::ostream &operator<<(std::ostream &stream,coordinates object)
	{
        stream << "(" << object.a << "," << object.b << ")" << std::endl;
        return stream;
	}

	int main()
	{
	coordinates first,second(1),third(2,2);

	std::cout << first << second << third ;
	return 0;
	}
