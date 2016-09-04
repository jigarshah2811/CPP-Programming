
        // sample46

	#include <iostream>
	#include <fstream>
	using namespace std;

	int main()
	{

	char answer,character;

	fstream  file_out;

	file_out.open("test.dat",ios::in,0);

	if (file_out)
	{
		do
		{
		cout << "position of get pointer is: " 
		     << file_out.tellg() << endl;
		file_out.get(character);
		cout << "character is: " << character << endl;
		cout << "position of get pointer is: " 
		     << file_out.tellg() << endl;

		cout << "record ok: ";
		cin  >> answer;
		if (answer == 'n') 
			{
			file_out.putback(character);
			cout << "position of get pointer is: " 
			     << file_out.tellg() << endl;
			}
		} while ( !file_out.eof());
	file_out.close();
	}

	else
	{
	cout << "error has occurred during create...." << endl;
	return 1;
	}

	return 0;

	}
