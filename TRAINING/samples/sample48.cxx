        // sample48

	#include <fstream>
	#include <iostream>

	int main()
	{

	std::ofstream  out("test.dat",std::ios::out);
	std::ofstream  out2("test2.dat");

	if (out && out2)
	{
		out  << "line one" << std::endl;
		out2 << "line one" << std::endl;
		out  << "line two" << std::endl;
		out2 << "line two" << std::endl;
		out  << "line three" << std::endl;
		out  << "line four" << std::endl;

		out.close();
		out2.close();
	}
	else
	{
		std::cout << "error has occurred during create...." << std::endl;
		return 1;
	}

	return 0;

	}
