        // sample56

	#include  <iostream>

	class coordinates 
	{
	private:
        	long int  a,b;
	public:
        	coordinates() { a = 0; b = 0 ; }
        	coordinates(long int x,long int y) { a = x; b = y ; }

        friend std::ostream &operator<< (std::ostream &stream, coordinates object);
        friend std::istream &operator>> (std::istream &stream, coordinates &object);
	};

	std::ostream &operator<<(std::ostream &stream,coordinates object)
	{
        stream << "(" << object.a << "," << object.b << ")" << std::endl;
        return stream;
	}

	std::istream &operator>>(std::istream &stream,coordinates &object)
	{
	std::cout << "Enter coordinates pair: ";
	stream >> object.a >> object.b ;
	return stream;
	}

	int main()
	{
	coordinates first,second(1,1),third(2,2);
	

	std::cout  << first << second << third ;

	std::cin  >> first;
	std::cout << first;

	return 0;
	}
