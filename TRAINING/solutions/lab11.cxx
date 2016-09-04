
        // lab11

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		base(long int arg2) { std::cout << "base constructor...->"
                           		   << arg2 << std::endl;
	                      		      a = arg2;
	                    	    }
		~base() { std::cout << "base destructor..." << std::endl;}
		long int get_a() { return a; }
	};

	class derived : public base
	{
	private:
		long int b;
	public:
		derived(long int arg1,long int arg2) : base(arg1)
	        	{ std::cout << "derived constructor..."
	               	       << arg2<< std::endl;
		          	  b = arg2;
	        	}

		~derived() { std::cout << "derived destructor..." << std::endl;}

		void set_b(long int n) { b = n; }

		long int multiply() { return b * a; }
	};

	class derived2 : public derived
	{
	public:
		derived2(long int n1,long int n2) : derived(n1,n2) {
	    	         std::cout << "derived-2 constructor..." << std::endl;}

		~derived2() { std::cout << "derived-2 destructor..." << std::endl;}

	};

	int main()
	{
	derived2 object(154,155);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;
	
	return 0;

	}
