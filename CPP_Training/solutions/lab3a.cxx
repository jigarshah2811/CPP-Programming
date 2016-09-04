        // lab3a

        #include  <iostream>

        main()

        {

        long int a,b,c;

        c = std::cout.flags();

        for ( a=1; a <= 0x4000; a <<= 1  )
        {
                if (a & c)
                        std::cout << "1 ";
                else
                        std::cout << "0 ";
        }
	std::cout << std::endl;
        return 0;

        }
