        // sample80b 

        #include <iostream>

	namespace temp {
	template <typename T1,typename T2>
	class pair {
	public:
		T1 first;
		T2 second;
		pair(T1 a,T2 b) {
				first=a;
				second=b;
			        }
	};
	};

        int main()
        {

	temp::pair<long int,char> object(54,'c');
	temp::pair<double,char> object2(54.54,'d');

        std::cout << "long int: " << object.first <<  std::endl;
        std::cout << "character: " << object.second <<  std::endl;

        std::cout << "double: " << object2.first <<  std::endl;
        std::cout << "character: " << object2.second <<  std::endl;

        return 0;
        }


