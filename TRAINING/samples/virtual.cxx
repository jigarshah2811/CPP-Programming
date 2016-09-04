        // sample42

	#include  <iostream>
	using namespace std;

	class  base
	{
	public:
		long int a;
		base(long int n) { a = n ; }
	 	void common()
		{ cout << "in base's version..." << a << endl; }
	};

	class derived : public base
	{
	public:
		derived(long int n) : base(n) { }
		void common() { 
			cout << "in derived's version..." << a*a << endl; }
	};

	int main()
	{
	base     object1(10);
	derived  object2(15);

	object1.common();
	object2.common();

	return 0;

	}
