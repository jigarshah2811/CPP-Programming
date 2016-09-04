    // lab2c

    #include <iostream>
    #include <iomanip>

    int main()

    {


    std::cout << "Enter 'feet' value to convert (x.y): ";

    float number;
    std::cin  >> number;

    std::cout << "Number of inches is: " << std::setw(10) << std::setprecision(5)
              << std::setiosflags(std::ios::showpoint|std::ios::fixed)
	      << number * 12.0 << std::endl;

    return 0;

    }
