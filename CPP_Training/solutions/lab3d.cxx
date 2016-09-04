        // lab3d

        #include  <iostream>

        main()

        {

        long int a,b,c;

        char flags [15][20] = {
				"boolalpha",
                                "decimal",
                                "fixed format",
                                "hexadecimal",
                                "internal",
                                "left justification",
                                "octal",
                                "right justification",
                                "scientific notation",
                                "showbase radix",
                                "showpoint",
                                "showpositive",
				"skipws",
                                "unitbuf",
                                "uppercase"
                              };

        std::cout.setf(std::ios::showbase | std::ios::showpoint);
        std::cout.setf(std::ios::oct,std::ios::basefield);
        

        c = (long)std::cout.flags();

        for (a=1,b=0; a <= 0x4000; a <<= 1 , b++)
        {
                if (a & c)
                        std::cout << flags[b] << " is set\n";
                else
                        std::cout << flags[b] << " is clear\n";
        }

        return 0;

        }
