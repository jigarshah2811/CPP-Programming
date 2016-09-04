    // sample9d

    #include <iostream>
    #include <fstream>
    #include <string>

    int main()

    {

    std::string	characters;
    std::ifstream    infile ("/dev/tty");
    
    std::cout << "Enter a string of characters: "<< std::endl;

    std::getline(infile,characters,'\n');

    std::cout << "Characters are: " << characters << std::endl;

    return 0;

    }
