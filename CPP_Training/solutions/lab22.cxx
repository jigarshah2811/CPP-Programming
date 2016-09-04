        // lab22

	#include        <iostream>

	class feet_to_inches
	{
	private:
        	double feet,inches;
	public:
        	void set_values(double ft) 
        	{  feet = ft;
           	inches = ft * 12;
        	}

        friend std::ostream &operator<< (std::ostream &stream, 
                                    feet_to_inches object);
        friend std::istream &operator>> (std::istream &stream, 
                                    feet_to_inches &object);
	};
	
	std::istream &operator>>(std::istream &stream,feet_to_inches &object)
	{
        std::cout << "Enter feet value: ";
        double temp;
        stream >> temp;
        object.set_values(temp);
        return stream;
	}

	std::ostream &operator<<(std::ostream &stream, feet_to_inches object)
	{
	stream << object.feet << " feet is " << object.inches ;
	stream << " inches"   << std::endl;
	return stream;
	}

	int main()
	{
	feet_to_inches   object1;

	std::cin  >> object1;
	std::cout << object1;

	return 0;
	}
