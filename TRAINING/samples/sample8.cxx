
    // sample8

    #include <iostream>

    int main()

    {

    long int number;
    float    flt;
    char     character;
    char     characters[50];


    std::cout << "Enter a numeric value: ";
    cin  >> number;

    std::cout << "Enter a floating point value: ";
    cin  >> flt;

    std::cout << "Enter a single character: ";
    cin  >> character;

    std::cout << "Enter a string of characters: ";
    cin  >>  characters;

    std::cout << "Number is: " << number << "\n";
    std::cout << "Floating number is: " << flt << "\n";
    std::cout << "Character is: " << character << "\n";
    std::cout << "Characters are: " << characters << "\n";

    return 0;

    }
