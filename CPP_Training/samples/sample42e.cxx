        // sample42e

	#include  <iostream>

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

	class F_to_I : public base_conversions
	{
	public:
		F_to_I(float n) : base_conversions(n) { }
		 void convert_value() 
			{ output =  input * 12.0; }
	};

	class F_to_M : public base_conversions
	{
	public:
		F_to_M(float n) : base_conversions(n) { }
		 void convert_value() 
			{ output =  input * .3048 ; }
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
	F_to_I	  object2(4);
	F_to_M	  object3(12);
	L_to_G	  object1(5);
	
	std::cout << object.get_input() << " Farenheit is ";
	object.convert_value();
	std::cout << object.ret_output() << " in Celsius" << std::endl;

	std::cout << object2.get_input() << " Feet is ";
	object2.convert_value();
	std::cout << object2.ret_output() << " in inches" << std::endl;

	std::cout << object3.get_input() << " Feet is ";
	object3.convert_value();
	std::cout << object3.ret_output() << " in meters" << std::endl;

	std::cout << object1.get_input() << " Liters is ";
	object1.convert_value();
	std::cout << object1.ret_output() << " in Gallons" << std::endl;

	return 0;

	}
