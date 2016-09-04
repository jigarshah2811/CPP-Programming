    // sample10d

    #include <iostream>

    int main()

    {
    
    long int number;
    float    flt;
    char     character;
    char     characters[50];

    std::cout << "Enter a numeric value: ";
    std::cin  >> number;

    std::cout << "Enter a floating point value: ";
    std::cin >>  flt;

    std::cout << "Enter a single character: ";
    std::cin   >> character;
    
    std::cin.ignore(10000000,'\n');

    std::cout << "Enter a string of characters: ";
    std::cin.get ( characters, 49 );

    std::cout << "Number is: " << number << std::endl;
    std::cout << "Floating number is: " << flt << std::endl;
    std::cout << "Character is: " << character << std::endl;
    std::cout << "Characters are: " << characters << std::endl;

    return 0;

    }
