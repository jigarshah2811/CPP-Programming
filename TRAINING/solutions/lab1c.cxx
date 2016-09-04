
    // lab1c.cpp

    #include <iostream>
    #include <iomanip>

    main()

    {


    std::cout << "Enter 'feet' value to convert (x.y): ";

    float number;
    cin  >> number;

    std::cout << "Number of inches is: " << setw(10) << setprecision(3)
         << setiosflags(ios::showpoint) << number * 12.0 << std::endl;

    return 0;

    }
