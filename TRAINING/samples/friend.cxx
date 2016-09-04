
        // sample27

	#include <iostream>
	using namespace std;

	class class11;	//forward reference

	class  class12
	{
	public:
		void display(class11 obj);
	};

	class  class11
	{
	private:
		long int number;
	public:
		class11(long int n)
		{
		number = n;
		cout << "in class11 constructor" << endl;
		}
	friend void class12::display(class11 obj);
	};

	void class12::display(class11 obj)
	{
	cout << "private value is " << obj.number << endl;
	}

	int main()
	{
	class11  object(19);
  	class12	 object2;
	
	object2.display(object);

	return 0;
	}
