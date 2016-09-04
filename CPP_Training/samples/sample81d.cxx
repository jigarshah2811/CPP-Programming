        // sample81d

        #include <iostream>
        #include <memory>

	class sample {
	  public:
		sample() {std::std::cout << "constructor.." << std::std::endl;}
		~sample() {std::std::cout << "destructor.." << std::std::endl;}
	};

        int main()
        {
	std::scoped_ptr<sample> ptr(new sample),ptr2;
	ptr2 = ptr;
        return 0;
        }
