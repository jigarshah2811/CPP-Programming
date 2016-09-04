
        // sample31a

	#include  <iostream>
	using namespace std;

	class  base
	{
	private:
		long int a;
		long int x;
		long int y;
	public:
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }

		void set_x(long int n) { x = n ; }
		long int set_x() { return x; }
	
	};

	class derived : private base
	{
	private:
		long int b;
	public:
		using base::set_a;  // Accessing Base's private
		//using base::set_x;
		void set_b(long int n) { b = n; }
		long int multiply() { return b * get_a(); }
	};

	int main()
	{
	derived  object;

	cout << "Accessing base's private through 'using namespace' method" << endl;
	object.set_a(100);
	object.set_b(200);

	std::cout << "product of two private members is: "
     	<< object.multiply() << std::endl;

	cout << "Accessing base's private" << endl;
	object.set_x(300);
	object.set_a(154);
	return 0;

	}
