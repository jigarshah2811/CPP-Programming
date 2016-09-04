        // lab3f

        #include  <iostream>

        main()

        {
        void showflags(long int);

        long int a,b,c;

        c = (long)std::cout.flags();

        showflags(c);

        std::cout.setf(ios::showbase | ios::showpoint);
        std::cout.setf(ios::oct,ios::basefield);
        
        c = (long)std::cout.flags();

        showflags(c);

        return 0;

        }

        void showflags(long int c)
        {
        std::cout << "flags mask is "<< hex << showbase << c << std::endl;

        if ( c & ios::boolalpha)  std::cout << " boolalpha  is set" << std::endl;
        if ( c & ios::dec)        std::cout << " decimal    is set" << std::endl;
        if ( c & ios::fixed)      std::cout << " fixed      is set" << std::endl;
        if ( c & ios::hex)        std::cout << " hex        is set" << std::endl;
        if ( c & ios::internal)   std::cout << " internal   is set" << std::endl;
        if ( c & ios::left)       std::cout << " left       is set" << std::endl;
        if ( c & ios::oct)        std::cout << " oct        is set" << std::endl;
        if ( c & ios::scientific) std::cout << " scientific is set" << std::endl;
        if ( c & ios::showbase)   std::cout << " showbase   is set" << std::endl;
        if ( c & ios::showpoint)  std::cout << " showpoint  is set" << std::endl;
        if ( c & ios::showpos)    std::cout << " showpos    is set" << std::endl;
        if ( c & ios::skipws)     std::cout << " skipws     is set" << std::endl;
        if ( c & ios::unitbuf)    std::cout << " unitbuf    is set" << std::endl;
        if ( c & ios::uppercase)  std::cout << " uppercase  is set" << std::endl;

        std::cout << std::endl;

	}