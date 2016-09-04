
        // lab4a.cpp

        #include  <iostream>
        #include  <cstring>

        void  center (char *s);

        main()

        {

        char    s1[81],s2[81];

        std::cout << "Enter a string: ";

        cin.getline(s1,81);

        center(s1);

        std::cout << "Enter another string: ";

        cin.getline(s2,81);

        center(s2);

        return 0;

        }


        void center(char *s)
        {
        long int length;

        length = 40 + (strlen(s) / 2);

        std::cout.width(length);
        std::cout << s << '\n';
        }
