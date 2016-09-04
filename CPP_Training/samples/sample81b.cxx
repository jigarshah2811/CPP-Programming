        // sample81a

        #include <iostream>
        #include <memory>

	class sample {
	  public:
		sample() {std::cout << "constructor.." << std::endl;}
		~sample() {std::cout << "destructor.." << std::endl;}
	};

        int main()
        {
	std::auto_ptr<sample> ptr(new sample);

        std::cout  << "before try block..." << std::endl;

	try{
		std::cout << "inside try block" << std::endl;
		throw 100;	
		std::cout << "finishing try block" << std::endl;
	   }

	catch(int){
		   std::cout << "caught exception " << std::endl;
		   sample *ptr2 = ptr.release();
		   delete ptr2;
		  }
	std::cout << "after try block" << std::endl;
  	return 0;
	}
