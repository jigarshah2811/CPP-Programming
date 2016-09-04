        // sample14

   #include <iostream>
   #include <string>
   #include <iomanip>
	using namespace std;

   int main()
   {
        char *pointer;
	char x;

	while (1)
	{
	cout << "hit enter: ";
	cin.get(x);
        pointer = new char[104857600];

	cout << "alloc at:" << hex << (long int)pointer << endl;

	for (long int y=0;y <104857600; y++)
	{ *pointer++ = 'a';}
        }

        return 0;
   }
