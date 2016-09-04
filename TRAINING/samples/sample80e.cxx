        // sample80e 

        #include <iostream>
        #include <typeinfo>

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
	temp::pair<long int,char> object1(54,'c');
	temp::pair<double,char> object2(54.54,'d');

        std::cout << "object1 is : " << typeid(object1).name() <<  std::endl;
        std::cout << "object2 is : " << typeid(object2).name() <<  std::endl;
	
	if (typeid(object1) == typeid(object2))
	 std::cout << "object1 and object2 are the same type" << std::endl;
	else
	 std::cout << "object1 and object2 are different types" << std::endl;
        return 0;
        }
