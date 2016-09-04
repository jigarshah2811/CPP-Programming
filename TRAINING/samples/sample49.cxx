        // sample49

	#include <iostream>
	#include <fstream>

	int main()
	{
	long int position;
	char     character;

	std::ifstream  input("/etc/passwd",std::ios::in | std::ios::binary);

	std::cout << "enter starting position for file: ";
	std::cin  >> position;

	if (input)
	{
		input.seekg(position,std::ios::beg);

		while (! input.eof())
		{
		input.get(character);
		std::cout << character;
		}
	input.close();
	}
	else
	{
		std::cout << "error has occurred during input...." << std::endl;
		return 1;
	}

	return 0;

	}
