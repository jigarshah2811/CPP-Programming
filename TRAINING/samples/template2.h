        // template2

	#include  <iostream>
	#include  <string>
	using namespace std;

	template <typename T1,typename T2>
	class  conv
	{
	public:
		float  output;
		T1 first;
		T2 second; 
		long int which_one;

		conv(T1 a, T2 b) { first=a;
				   second=b;

				  if (first == "F_to_C")
					which_one=1;
				  else if (first == "F_to_I")
					which_one=2;
				  else if (first == "L_to_G")
					which_one=3;
				  else if (first == "F_to_M")
					which_one=4;
				  }
		void convert_value() 
			{ 
			 switch(which_one)
			 {
			  case 1: 
			   output = (second - 32) / 1.8;
			   break;
			  case 2: 
			   output = second *  12.0;
			   break;
			  case 3: 
			   output = second / 3.7854;
			   break;
			  case 4: 
			   output = second * 0.3048;
			   break;
			  }
			 };
	};
