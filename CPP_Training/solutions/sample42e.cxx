        // sample42e

	#include  <iostream>
	using namespace std;

	class  base_conversions
	{
	protected:
		float  input;
		float  output;
	public:
		base_conversions(float arg) { input = arg ; }
		float get_input() {return input;}
		float ret_output() {return output;}	

		virtual void convert_value()=0;
	};

	class F_to_C : public base_conversions
	{
	public:
		F_to_C(float n) : base_conversions(n) { }
		 void convert_value() 
			{ output = (input - 32) / 1.8; }
	};

	class L_to_G : public base_conversions
	{
	public:
		L_to_G(float n) : base_conversions(n) { }
		 void convert_value() 
			{ output =  input / 3.7854; }
	};

	int main()
	{
	F_to_C    object(100);
	L_to_G	  object1(5);
	
	cout << object.get_input() << " Farenheit is ";
	object.convert_value();
	cout << object.ret_output() << " in Celsius" << endl;

	cout << object1.get_input() << " Liters is ";
	object1.convert_value();
	cout << object1.ret_output() << " in Gallons" << endl;

	return 0;

	}
