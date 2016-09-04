        // lab9

        #include <iostream>
        #include <cmath>

        short int sroot(short int i);
        long int sroot(long int i);
        double sroot(double i);

        int main()
        {

        std::cout << "square root of 89 is " << sroot((short)89)
             << std::endl;
        
        std::cout << "square root of 90 is " << sroot((long)90)
             << std::endl;

        std::cout << "square root of 91.0 is " << sroot(91.0)
             << std::endl;

        return 0;

        }


        short int sroot(short int i)
        {
        return (short int)std::sqrt((double)i);
        }

        long int sroot(long int i)
        {
        return (long int)std::sqrt((double)i);
        }

        double sroot(double i)
        {
        return std::sqrt(i);
        }

