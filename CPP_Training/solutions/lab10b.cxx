        // lab10b

        #include <iostream>

        void swap (long int &x,long int &y);

        int main()
        {

        long int a,b;

        a = 15;
        b = 30;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;


        swap(a,b);

        std::cout << "After swap operation:" << std::endl;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;

        return 0;

        }

        void swap (long int &x, long int &y)
        {
        register long int t;

        t = x;
        x = y;
        y = t;

        }

