

        // sample38

	#include  <iostream>

	class  base1
	{
	protected:
		long int a;
	public:
		base1(long int arg) { std::cout << "base1 constructor...->"
                           		   << arg << std::endl;
                      			      a = arg;
                    		    }
		~base1() { std::cout << "base1 destructor..." << std::endl;}
		long int get_a() { return a; }
	};

	class base2
	{
	protected:
		long int b;
	public:
		base2(long int arg) { std::cout << "base2 constructor...->"
                           		   << arg << std::endl;
                      			      b = arg;
                    		    }
		~base2() { std::cout << "base2 destructor..." << std::endl;}
		long int get_b() { return b; }
	};


	class derived : public base1, public base2
	{
	private:
		long int c;
	public:
		derived(long int arg1,long int arg2) : base1(arg1), base2(arg2)
        		{ std::cout << "derived constructor...->"
               		       << arg1 << "," << arg2 << std::endl;
					c=arg1;
        		}
		~derived() { std::cout << "derived destructor..." << std::endl;}
		void set_c(long int n) { c = n; }
		long int get_c() { return c; }
		long int multiply() { return c * b * a; }
	};



	int main()
	{
	derived object(100, 200);
	std::cout << "product of three private members is: " << object.multiply() << std::endl;

	return 0;

	}
