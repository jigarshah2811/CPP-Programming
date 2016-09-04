

        // sample38

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		base(long int arg) { std::cout << "base constructor...->"
                           		   << arg << std::endl;
                      			      a = arg;
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
        		{ std::cout << "derived constructor...->"
               		       << arg2<< std::endl;
          			  b = arg2;
        		}
		~derived() { std::cout << "derived destructor..." << std::endl;}
		void set_b(long int n) { b = n; }
		int get_b() { return b; }
		long int multiply() { return b * a; }
	};

	class derived_again : public derived
	{
	private:
		long int c;
	public:
		derived_again(long int arg1,long int arg2) : derived(arg1, arg2)
        		{ std::cout << "derived_again constructor...->"
               		       << arg2<< std::endl;
          			  c = arg2;
        		}
		~derived_again() { std::cout << "derived_again destructor..." << std::endl;}
		void set_c(long int n) { c = n; }
		long int multiply() { return c * get_b() * a; }
	};



	int main()
	{
	//derived  object(100, 200);
	derived_again object(100, 200);

	std::cout << "product of three private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
