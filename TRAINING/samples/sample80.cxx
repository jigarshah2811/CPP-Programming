        // sample80 

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

        int main()
        {

	pair_of_values object(54,'c');

        std::cout << "long int: " << object.first <<  std::endl;
        std::cout << "character: " << object.second <<  std::endl;

        return 0;
        }


