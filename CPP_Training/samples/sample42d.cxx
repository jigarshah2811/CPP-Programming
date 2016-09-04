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
		float get_output() {return output;}	

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
		F_to_I(float feet) : base_conversions(feet) { }
		 void convert_value() 
			{ output = input * 12; }
	};

	class L_to_G : public base_conversions
	{
	public:
		L_to_G(float liters) : base_conversions(liters) { }
		 void convert_value() 
			{ output = input / 3.7854; }
	};


	int main()
	{
	F_to_C    F_to_C_object(100);
	F_to_I    F_to_I_object(100);
	L_to_G    L_to_G_object(100);
	
	std::cout << F_to_C_object.get_input() << " Enter Farenheit: ";
	F_to_C_object.convert_value();
	std::cout << F_to_C_object.get_output() << " in Celsius: " << std::endl;
	
	std::cout << F_to_I_object.get_input() << " Enter Feet: ";
	F_to_I_object.convert_value();
	std::cout << F_to_I_object.get_output() << " in Meters: " << std::endl;
	
	std::cout << L_to_G_object.get_input() << " Enter Liters: ";
	L_to_G_object.convert_value();
	std::cout << L_to_G_object.get_output() << " in Gallons: " << std::endl;
	

	return 0;

	}
