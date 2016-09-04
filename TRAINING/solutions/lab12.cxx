
        // lab12

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		base(long int arg1) { std::cout << "base constructor...->"
	                           	   << arg1 << std::endl;
	                      		      a = arg1;
	                    	    }

		~base() { std::cout << "base destructor..." << std::endl;}

		long int get_a() { return a; }
	};

	class derived
	{
	protected:
		long int b;
	public:
		derived(long int arg2)
	        	{ std::cout << "derived constructor...->"
	               		<< arg2<< std::endl;
	          		b = arg2;
	        	}
		~derived() { std::cout << "derived destructor..." << std::endl;}
		long int get_b() { return b; }
	};

	class derived2 : public base, public derived 
	{
	public:
		derived2(long int n1,long int n2) : base(n1),derived(n2)
			{ std::cout << "in derived-2 constructor..." << std::endl; }

		~derived2() { std::cout << "in derived-2 destructor..." << std::endl; }

		long int multiply() { return get_b() * get_a(); }
	};

	int main()
	{
	derived2 object(154,155);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

}
