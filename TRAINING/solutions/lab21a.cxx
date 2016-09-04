        // lab21a

	#include        <iostream>

	class triangle 
	{
	private:
        	long int  height,base;
	public:
        	triangle(long int h,long int b) { height = h ; base = b ; }

        	friend std::ostream &operator<< (std::ostream &stream, triangle object);
	};

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
	triangle        first(5,5),second(10,10),third(12,12);

	std::cout << first << std::endl << second << third << std::endl ;
	return 0;
	}
