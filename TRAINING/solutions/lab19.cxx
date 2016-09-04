        // lab19

	#include <iostream>
	#include <fstream>
	#include <cctype>


	int main (int argc, char *argv[])
	{
	if (argc != 2)
		{
        	std::cout << "usage: lab19 file-name" << std::endl;
        	return 1;
		}

	std::ifstream input(argv[1]);
	if (! input)
		{
        	std::cout << "error opening file" << argv[1] << std::endl;
        	return 1;
		}

	long int i,alphas[26];
	for (i = 0 ; i < 26; i++) alphas[i] = 0 ;

	char     character;
	long int index;
	while (! input.eof())
	{
        	character = input.get();
        	if (std::isalpha(character))
        	{
                character = std::toupper(character);
                index = character - 'A';
                alphas[index]++;
        	}
	}
	input.close();

	for (i = 0 ; i < 26 ; i++)
        {
	 if (alphas[i] == 0) continue;
        std::cout << "count of " << (char)('A'+i) << "'s: " 
             << alphas[i]   << std::endl;
	}


	return 0;
	}
