        // sample81a

        #include <iostream>
        #include <memory>

	class sample {
	  public:
		sample() {std::cout << "constructor.." << std::endl;}
		~sample() {std::cout << "destructor.." << std::endl;}
		void member() {std::cout << "inside object..." << std::endl;}
	};

        int main()
        {
	std::auto_ptr<sample> ptr(new sample);

        ptr->member();
        return 0;
        }
