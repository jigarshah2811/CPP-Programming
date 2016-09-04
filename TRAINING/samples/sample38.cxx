

        // sample38

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
        		{ std::cout << "derived constructor...->"
               		       << arg2<< std::endl;
          			  b = arg2;
        		}
		~derived() { std::cout << "derived destructor..." << std::endl;}
		void set_b(long int n) { b = n; }
		long int multiply() { return b * a; }
	};

	int main()
	{
	derived  object(154,155);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
