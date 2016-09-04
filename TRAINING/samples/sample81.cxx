        // sample81 

        #include <iostream>

	class sample {
	  public:
		sample() {std::cout << "constructor.." << std::endl;}
		~sample() {std::cout << "destructor.." << std::endl;}
		void member() {std::cout << "inside object..." << std::endl;}
	};

        int main()
        {
	sample *ptr;	
	ptr  = new sample;	

        ptr->member();
        return 0;
        }
