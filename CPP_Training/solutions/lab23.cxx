        // lab23

	#include <iostream>
	#include <cstring>

	void reverse(char *string, long int count = 0);

	int main()
	{
	char    str1[80],str2[80];
	long int length;

	std::cout << "enter a string: ";
	std::cin.get(str1,80);
	std::strcpy(str2,str1);

	std::cout << "enter number of characters to reverse: ";
	std::cin  >> length;

	reverse(str1);
	reverse(str2,length);

	std::cout << "reversed string is: " << str1 << std::endl;
	std::cout << "reversed string is: " << str2 << std::endl;

	return 0;

	}


	void reverse(char *string,long count)
	{
	long int a,b;
	char     temp;

	if (count == 0) count = std::strlen(string) - 1;

	for (a = 0, b = count; a < b; a++, b--)
		{
		temp = string[a];
		string[a] = string[b];
		string[b] = temp;
		}
	}
