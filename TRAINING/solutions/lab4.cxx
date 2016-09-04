        // lab4

        #include  <iostream>
        #include  <cstring>

        void  center (char *s);

        int main()

        {

        char    s1[81],s2[81];

        std::cout << "Enter a string: ";

        std::cin.getline(s1,81);

        center(s1);

        return 0;

        }


        void center(char *s)
        {
        long int length;

        length = 40 + (strlen(s) / 2);

        std::cout.width(length);
        std::cout << s << std::endl;

	//char str[]={"1234567890"};
	std::string str={"1234567890"};
	for (long int x=0;x<8;x++){std::cout << str;}
	std::cout<<std::endl;
        }
