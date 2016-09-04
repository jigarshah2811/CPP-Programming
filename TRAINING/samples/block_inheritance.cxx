
        // block_inheritance.cxx 
	// how to keep a class from being used
	// as a base class
	//
	#include  <iostream>
	using namespace std;

	class base;			//forward reference

	class locker
	{
		friend class base; 	//allow access from class
	private:
		locker();		//constructor is private !	
	};	

	class  base : virtual public locker //inherit from locker
	{
	private:
		long int a;
	public:
		base(){ };
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
	};

	class derived : public base	//can't access inner constr.
	{
	private:
		long int b;
	public:
		void set_b(long int n) { b = n; }
		long int multiply() { return b * get_a(); }
	};

	int main()
	{
	base  	object1;	//OK	
	derived	object;		//ILLEGAL, can't get past this...
	
	object.set_a(154);
	object.set_b(155);
	cout << "product of two private members is: "
     	     << object.multiply() << endl;

	return 0;

	}
