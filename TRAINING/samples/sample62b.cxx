
        // sample62

	#include <iostream>
	using namespace std;

	int main()
	{
	class sample {
	  public:
		sample() {cout << "constructor.." << endl;}
		~sample() {cout << "destructor.." << endl;}
		void member() {cout << "inside object..." << endl;}
	};
		
	sample *ptr;	
	ptr  = new sample;	

	ptr->member();
        cout  << "before try block..." << endl;

	try{
		cout << "inside try block" << endl;
		throw 'a';	
		cout << "finishing try block" << endl;
	   }

	catch(int x){
		   cout << "caught exception " << x << endl;
		  }
	cout << "after try block" << endl;
  	return 0;
	}
