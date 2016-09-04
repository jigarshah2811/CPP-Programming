        // lab3b

        #include  <iostream>

        main()

        {

        long int a,b,c;

	std::cout.setf(std::ios::oct | std::ios::showbase | std::ios::showpoint);

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
