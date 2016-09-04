
        // sample14

   #include <iostream>
   #include <string>
   #include <iomanip>
   #include <cstdlib>
	using namespace std;

   int main()
   {
        char *pointer;
	string x;

	while (1)
	{
	cout << "hit enter: ";
	cin >> x;	
	if (x == "done") abort();
        pointer = new char[104857600];

	cout << "alloc at:" << hex << (long int)pointer << endl;

	for (long int y=0;y <104857600; y++)
	{ *pointer++ = 'a';}
        }

        return 0;
   }
