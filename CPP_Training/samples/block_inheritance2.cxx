
        // block_inheritance2.cxx 
	// how to keep a class from being used
	// as a base class
	//
	#include  <iostream>
	using namespace std;

/*	class base;			//forward reference

	class _locker
	{
		friend class base; 	//allow access from class
	private:
		_locker();		//constructor is private !	
	};	
*/
	class  base      //inherit from locker 
	private:
		long int a;
	public:
		base(){ };
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
	};

	
	int main()
	{
	base  	object;	//OK	
	
	
	object.set_a(154);
	

	return 0;

	}
