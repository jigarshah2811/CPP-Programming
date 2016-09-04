    // sample9

    #include <iostream>

    int main()

    {

    char     characters[50];
	

    std::cout << "Enter a string of characters: ";
    std::cin.get ( characters, 49 );

    std::cout << "Characters are: " << characters << std::endl;

    return 0;

    }
