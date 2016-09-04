        // sample57

	#include <iostream>
	#include <cctype>

	std::istream &findalpha(std::istream &stream)
	{
	char character;

	do
  		{
        	stream.get(character);
  		}     while (!std::isalpha(character));

	stream.putback(character);
	return stream;
	}

	int main()
	{
  	char  string[80];

  	std::cout << "Enter a string of characters/numbers: " ;
  	std::cin  >> findalpha >> string;
  	std::cout << "Start of alpha characters entered was: " << string << std::endl;

  	return 0;
}
