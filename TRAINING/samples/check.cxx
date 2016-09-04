
        // sample30

	#include  <iostream>
	using namespace std;

	class  base
	{
	private:
		long int a;
	public:
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
	};

	class derived : public base
	{
	private:
		long int b;
	public:
		void set_b(long int n) { b = n; }
		long int multiply() { return b * a; }
	};

	main()
	{
		derived  object;

		object.set_a(154);
		object.set_b(155);

	cout << "product of two private members is: "
     	     << object.multiply() << endl;

	return 0;

}
