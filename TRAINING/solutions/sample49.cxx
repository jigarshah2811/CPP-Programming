        // sample49

	#include <iostream>
	#include <fstream>

	using namespace std;

	int main()
	{
	long int position;
	char     c;

	std::ifstream  input("/etc/passwd",std::ios::in | std::ios::binary);

	if(input)
	{
		input.seekg(0, std::ios::end);
		position = input.tellg();
		position = position-2;

		for(;position>=0; position--)
		{
			input.seekg(position, std::ios::beg);
			input.get(c);
			cout<<c;	
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
