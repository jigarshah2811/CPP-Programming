        // lab18

	#include <iostream>
	#include <fstream>

	int main()
	{
	long int position;
	char     character;

	std::ifstream  input("test.dat", std::ios::in | std::ios::binary);

	if (input)
	{
	input.seekg(0,std::ios::end);
	position = input.tellg();
	position -= 2;

	for ( ; position >= 0; position--)
		{
		input.seekg(position,std::ios::beg);
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
