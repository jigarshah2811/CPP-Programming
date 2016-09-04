        // lab5b

        #include  <iostream>
        #include  <cstdlib>
        #include  <cmath>
        #include  <ctime>
        #include  <cstring>

        class  dice
        {
        private:
                long int value;
		long int cur_time;
        public:
                void roll();
		dice(){std::time(&cur_time);std::srand((unsigned long int)cur_time);}
        };

        void dice::roll()
        {
		value = (std::rand() % 6) + 1;
                std::cout << value << std::endl;
        }

        int main()

        {

 	char input[80];
 	dice  object;

 	while (1)
 	{
 	std::cin.getline(input,80);
 	if (std::strcmp(input,"done")==0) break;
 	object.roll();
 	object.roll();
 	}

        return 0;

        }
