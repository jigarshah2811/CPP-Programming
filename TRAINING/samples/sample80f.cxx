        // sample80f 

        #include <iostream>
        #include <typeinfo>
	#include <cxxabi.h>

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
	int status;
	char *realname;
	
        realname = abi::__cxa_demangle(typeid(object1).name(),0,0,&status);
        std::cout << typeid(object1).name() << " = " << realname <<  std::endl;

        realname = abi::__cxa_demangle(typeid(object2).name(),0,0,&status);
        std::cout << typeid(object2).name() << " = " << realname <<  std::endl;
        return 0;
        }
