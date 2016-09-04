        // sample45

	#include <iostream>
	#include <cstring>

	std::istream &getpass(std::istream &stream)
	{

	std::cout << '\n' << "enter password: " ;
	return stream;

	}


	int main()
	{

	char password[80];

	do
	{
	std::cin >> getpass >> password;
	} while (std::strcmp(password,"secret"));

	std::cout << "login finally completed !!" << std::endl;

	return 0;

	}
