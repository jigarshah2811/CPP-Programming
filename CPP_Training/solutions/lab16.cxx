        // lab16

	#include <iostream>
	#include <fstream>
	#include <cstring>

	int main()
	{
	char record[81],newline;

	std::fstream file_out("test.dat",std::ios::out);

	if (file_out)
	{

		while (1)
		{
		std::cout << "enter record to put into file: ";
		std::cin.getline(record,80);
		if (std::strlen(record)==0) break;
		file_out << record << std::endl;
		}

	file_out.close();
	}
	else
	{
		std::cout << "error has occurred during create...." << std::endl;
		return 1;
	}

	return 0;

	}
