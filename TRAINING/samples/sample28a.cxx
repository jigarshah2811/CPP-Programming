
        // sample27

	#include <iostream>

	class  class11
	{
	private:
		long int number;
	public:
	class11(long int n)
	{
	number = n;
	std::cout << "in constructor..." << this << std::endl;
	}
	class11(const class11 &ref){std::cout << "in copy constr..." 
					 << this << std::endl;
				   }
	~class11(){std::cout <<"in destructor..." << this << std::endl;}
	friend void display(class11 obj);
	};

	void display(class11 obj)
	{
	std::cout << "private value is " << obj.number << std::endl;
	}
	
	main()
	{
	class11  object(19);
	
	display(object);

	return 0;

	}

