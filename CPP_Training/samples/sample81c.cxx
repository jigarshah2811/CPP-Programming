        // sample81c

        #include <iostream>
        #include <memory>
	#include <boost/scoped_ptr.hpp>

	class sample {
	  public:
		sample() {std::cout << "constructor.." << std::endl;}
		~sample() {std::cout << "destructor.." << std::endl;}
	};

        int main()
        {
	boost::scoped_ptr<sample> ptr(new sample);

        return 0;
        }
