

        // sample37

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		base() { std::cout << "base constructor...->" << std::endl;}
		~base() { std::cout << "base destructor..." << std::endl;}
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
	};

	class derived : public base
	{
	private:
		long int b;
	public:
		derived(long int arg) { std::cout << "derived constructor...->"
                             		     << arg << std::endl;
                        			b = arg;
                      		      }
	~derived() { std::cout << "derived destructor..." << std::endl;}
	void set_b(long int n) { b = n; }
	long int multiply() { return b * a; }
	};

	int main()
	{
	derived  object(155);

	object.set_a(154);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
