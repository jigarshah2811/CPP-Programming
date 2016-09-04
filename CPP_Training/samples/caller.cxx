
        //     caller 

        #include        <iostream>
        #include        <cmath>
	using namespace std;

        extern "C" void simple();

        int main()

        {

        float  n;

        cout << "      n   sqrt(n)      n**2\n\n";

        for (n = 2.0; n <= 20.0; n++)
        {
                cout.width(7);
                cout << n; 
                cout.setf(ios::showpoint);
                cout.width(10);
                cout.precision(3);
                cout << (float)sqrt((double)n);
                cout.unsetf(ios::showpoint);
                cout.width(10);
                cout << n * n << endl;
        }

        simple();
        return 0;

        }

	void simple()
	{
	cout << "simple links as a C function" << endl;
	}
