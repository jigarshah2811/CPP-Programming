        //      lab1a

        #include        <iostream>
        #include        <cmath>

        int main()

        {

        float  n;

        std::cout << "      n   sqrt(n)   n**2\n\n";

        for (n = 2.0; n <= 20.0; n++)
        {
                std::cout.width(7);
		std::cout.setf(std::ios::right);
                std::cout << (long)n; 
                std::cout.setf(std::ios::showpoint | std::ios::fixed | std::ios::right);
                std::cout.width(7);
                std::cout.precision(3);
                std::cout << (float)std::sqrt((double)n);
                std::cout.unsetf(std::ios::showpoint);
                std::cout.width(7);
                std::cout << (long)(n * n) << std::endl;
        }

        return 0;

        }
