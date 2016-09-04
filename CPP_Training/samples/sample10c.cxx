    // sample10c

    #include <iostream>

    main()
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
    std::cin.ignore();

    std::cout << "Enter a string of characters: ";
    std::cin.getline ( characters, 49 );

    std::cout << "Number is: " << number << "\n";
    std::cout << "Floating number is: " << flt << "\n";
    std::cout << "Character is: " << character << "\n";
    std::cout << "Characters are: " << characters << "\n";

    return 0;

    }
