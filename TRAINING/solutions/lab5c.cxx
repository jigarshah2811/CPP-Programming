
        // lab5c

        #include  <iostream>
	#include  <fstream>
        #include  <cstdlib>
        #include  <cmath>
        #include  <ctime>
	#include  <string>

        class  dice
        {
        private:
                long int value;
		long int cur_time;
        public:
                void roll();
		dice(){time(&cur_time);srand((unsigned long int)cur_time);}
        };

        void dice::roll()
        {
		value = (rand() % 6) + 1;
                std::cout << value << std::endl;
        }

        int main()

        {
	char   byte;
 	string input;
 	dice  object;
	ifstream infile("con");

 	while (1)
 	{
 	getline(infile,input,'\n');
	 	
 	if (input == "done") break;
	object.roll();
 	object.roll();
 	}

        return 0;

        }
