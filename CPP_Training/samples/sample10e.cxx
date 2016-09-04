
    // sample10d

    #include <iostream>
    #include <fstream>

    int main()

    {
    
    long int number;
    float    flt;
    char     character;
    char     characters[50];

    std::cout.sync_with_stdio(false);

    std::cout << "Enter a numeric value: ";
    cin  >> number;

    std::cout << "Enter a floating point value: ";
    cin >>  flt;

    std::cout << "Enter a single character: ";
    cin   >> character;
    
    cin.ignore();

    std::cout << "Enter a string of characters: ";
    cin.get ( characters, 49 );

    std::cout << "Number is: " << number << std::endl;
    std::cout << "Floating number is: " << flt << std::endl;
    std::cout << "Character is: " << character << std::endl;
    std::cout << "Characters are: " << characters << std::endl;

    return 0;

    }
