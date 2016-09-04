        //      lab1b

        #include        <iostream>
        #include        <iomanip>
        #include        <cmath>

        int main()

        {

        float  n;

        std::cout << "      n   sqrt(n)      n**2\n\n";

        for (n = 2.0; n <= 20.0; n++)
        {
		std::cout.precision(5);
                std::cout << std::setw(7) << std::setiosflags(std::ios::right) << (long)n 
                     << std::setiosflags(std::ios::showpoint|std::ios::fixed)
                     << std::setw(7) << std::setprecision(3)
                     << (float)std::sqrt((double)n)
                     << std::resetiosflags(std::ios::showpoint)
                     << std::setw(7) << (long)(n * n) << std::endl;
        }

        return 0;

        }
