
        // sample27a

	#include <iostream>
	#include <cstring>
	using namespace std;


	class class10
	{
	private:
		char str[80];
	public:
	class10 &input();
        class10() { cout << "in constructor for..." << this << endl ; }
   
	~class10() { cout << "in destructor for..." << this << endl; }

	void show() { cout << str << endl; }

	void setstr(char *s) { strcpy(str,s); }
	};


	class10  &input()
	{
	char str[80];
	class10 temp;

	cout << "enter a string: ";
	cin  >> str;

	temp.setstr(str);

	return temp;
	}

	int main()
	{
	class10 object;

	object = input();

	object.show();

	return 0;

	}
