
        // lab16a

	#include <iostream>
	#include <fstream>
	#include <string>

	int main()
	{
	string  record2;

	fstream file_out("test.dat",ios::out);

	if (file_out)
	{

		while (1)
		{
		std::cout << "enter record to put into file: ";
		cin >> record2;
		if (record2.size()==0) break;
		file_out << record2 << std::endl;
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
