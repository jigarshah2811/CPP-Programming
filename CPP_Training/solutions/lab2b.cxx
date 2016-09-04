    // lab2b

    #include <iostream>
    #include <iomanip>

    int main()

    {


    std::cout << "Enter 'feet' value to convert: ";

    long int  number;

    std::cin  >> std::hex >> number;

    std::cout << "Number of inches is: "
         << std::setiosflags(std::ios::showbase)
         << std::oct << number * 12 << std::endl;

    return 0;

    }
