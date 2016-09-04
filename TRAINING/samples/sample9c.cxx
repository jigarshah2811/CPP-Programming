
    // sample9c

    #include <iostream>
    #include <iomanip>
    #include <string>

    int main()

    {

    string	characters;
    
    std::cout << "Enter a string of characters: ";

    characters.getline();
    cin  >> characters;

    std::cout << "Characters are: " << characters << std::endl;

    return 0;

    }
