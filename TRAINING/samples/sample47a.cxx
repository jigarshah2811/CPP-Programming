
        // sample47a

	#include <iostream>
	#include <fstream>

	int main()
	{

	char record[80];

	fstream file_out("test.dat", ios::out | ios::in | ios::binary);

	if (file_out)
	{
		file_out << "line one" << std::endl;
		file_out << "line two" << std::endl;
		file_out << "line three" << std::endl;
		file_out << "line four" << std::endl;


	}
	else
	{
		std::cout << "error has occurred during create...." << std::endl;
		return 1;
	}

		file_out.seekg(0,ios::beg);
		file_out.getline(record,79);
		std::cout << record << std::endl;
		file_out.close();
	return 0;

	}
