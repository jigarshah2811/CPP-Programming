        // lab21b

	#include        <iostream>

	class triangle 
	{
	private:
        	long int  height,base;
	public:
            friend std::istream &operator>> (std::istream &stream, triangle &object);
            friend std::ostream &operator<< (std::ostream &stream, triangle object);
	};

	std::istream &operator>>(std::istream &stream,triangle &object)
	{
		std::cout << "Enter height and base pair: ";
		stream >> object.height >> object.base ;
		return stream;
	}
	
	std::ostream &operator<< (std::ostream &stream,triangle object)
	{
        long int t1, t2, t3, t4 ;

        t1 = t2 = t3 = object.height - 1 ;

        for ( ; t3 != 0 ; --t3)
        {
             for (t4 = t1; t4 != 0 ; --t4)
                stream << ' ' ;
        stream << '*' ;

        if (t2 != t1)
            {
            for (t4 = t2 - t1 - 1 ; t4 != 0 ; --t4)
                stream << ' ' ;
            stream << '*';
            }
        
        --t1;
        stream << std::endl;
        }

        for (t1 = 0 ; t1 < object.base ; ++t1)
                stream << '*';
        stream << std::endl;

        return stream;
	}

	int main()
	{
	triangle        first;
	
	std::cin >> first;
	std::cout << first << std::endl ;
	return 0;
	}
