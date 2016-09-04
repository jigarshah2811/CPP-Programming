        // sample55

	#include  <iostream>

	class box 
	{
	private:
        	long int  side;
	public:
        	box(long int length) { side=length ; }

        friend std::ostream &operator<< (std::ostream &stream, box object);
	};

	std::ostream &operator<< (std::ostream &stream,box object)
	{
        long int a,b;
        char     s[10]={"         "};

        for (a = 0 , stream << s ; a < object.side ; a++)
                stream << '*';

        stream << std::endl;

        for (a = 0 , stream << s ; a < (object.side - 2) ; a++)
        {
                stream << '*';

                for (b = 0 ; b < (object.side - 2) ; b++)
                        stream << ' ' ;

                stream << '*' << std::endl << s;
                
        }

        for (a = 0 ; a < object.side ; a++)
                stream << '*';

        stream << std::endl;
        return stream;
	}

	int main()
	{
	box first(4), second(7);

	std::cout << first << std::endl << second ;
	return 0;
	}
