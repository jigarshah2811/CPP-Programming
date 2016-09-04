        // sample42d

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

	int main()
	{
	F_to_C    object(100);
	
	std::cout << object.get_input() << " Farenheit is ";
	object.convert_value();
	std::cout << object.ret_output() << " in Celsius" << std::endl;
	return 0;

	}
