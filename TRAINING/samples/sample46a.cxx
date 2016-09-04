

        // sample46

	#include <iostream>
	#include <fstream>

	int main()
	{

	fstream  file_out("test.dat");

	//file_out.open("test.dat");

	if (file_out)
	{
		file_out << "line one" << std::endl;
		file_out << "line two" << std::endl;
		file_out << "line three" << std::endl;
		file_out << "line four" << std::endl;

		file_out.close();
	}
	else
	{
		std::cout << "error has occurred during create...." << std::endl;
		return 1;
	}

	return 0;

	}
