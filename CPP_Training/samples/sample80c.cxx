        // sample80c 

        #include <iostream>

	namespace temp {
	template <typename T1,typename T2>
	class pair {
	public:
		T1 first;
		T2 second;
		pair():first(T1()),second(T2()){ }
		pair(T1 a,T2 b) {
				first=a;
				second=b;
			        }
	};
	};

        int main()
        {

	temp::pair<long int,char> object(54,'c');
	temp::pair<temp::pair<long int,char>,float> object2(object,54.54);

        std::cout << "long int: " << object.first <<  std::endl;
        std::cout << "character: " << object.second <<  std::endl;

        std::cout << "long int: " << object2.first.first <<  std::endl;
        std::cout << "character: " << object2.first.second <<  std::endl;
        std::cout << "float: " << object2.second <<  std::endl;

        return 0;
        }


