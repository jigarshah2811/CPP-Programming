
         // sample62a

        #include <iostream>
        #include <exception>
        using namespace std;

        void function1() throw(char);

        void function1() throw(char)
        {
        cout << "in function, ready to throw..." << endl;
        throw 'a';
        }

        void  unexpected_handler()
        {
        cout << "unhandled exception" << endl;
        terminate();
        }

        int main()
        {

        cout << "before try block...." << endl;

        set_terminate(unexpected_handler);

        try{
                cout << "inside try block" << endl;
                function1();
                cout << "finishing try block" << endl;
           }

        catch(int x){
                   cout << "caught exception " << x << endl;
                  }
        cout << "after try block" << endl;
        return 0;
	}
