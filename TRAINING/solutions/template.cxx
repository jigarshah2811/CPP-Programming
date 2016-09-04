        // template 

	#include  <iostream>
	#include  <string>

	template <typename T1,typename T2>
	class  conv
	{
	public:
		float  	 output;
		T1 	 first;
		T2 	 second; 
		long int which_one;

		conv(T1 a, T2 b) { first=a;
				   second=b;

				  if (first == "F_to_C")
					which_one=1;
				 }
		void convert_value() 
			{ 
			 switch(which_one)
			 {
			  case 1: 
			   output = (second - 32) / 1.8;
			   break;
			  }
			 };
	};

	int main()
	{
	conv<std::string,float> object("F_to_C",100);
	
	object.convert_value();
	std::cout << object.first << " " << object.second << " is "
	     << object.output <<  std::endl;

	return 0;
	}
