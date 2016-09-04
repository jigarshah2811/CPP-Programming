        // sample80a

        #include <iostream>

	class pair_of_values {
	public:
		long int first;
		char second;
		pair_of_values(long int a,char b) {
					first=a;
					second=b;
						  }
	};

	class pair2_of_values {
	public:
		double first;
		char second;
		pair2_of_values(double a,char b) {
					first=a;
					second=b;
						  }
	};
        int main()
        {

	pair_of_values object(54,'c');
	pair2_of_values object2(54.67,'d');

        std::cout << "long int: " << object.first <<  std::endl;
        std::cout << "character: " << object.second <<  std::endl;

        std::cout << "double: " << object2.first <<  std::endl;
        std::cout << "character: " << object2.second <<  std::endl;

        return 0;
        }


