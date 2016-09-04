
        // lab4b

	#include <iostream>
	#include <iomanip>

        main ()

        {

        long int     number, prime_flag, divisor, limit, divlimit;

        std::cout << "Enter upper value for prime number generation: ";
        cin  >>  limit;
        
        std::cout << setw(10) << 2 << setw(10) << 3 << flush;

        for ( number = 4; number <= limit ; ++number )
        {
                if (number % 2 != 0)
                {
                prime_flag = 1;

                for (divisor = 3, divlimit = number/2;
                      divisor <= divlimit; divisor += 2 )
                        if ( number % divisor == 0 )
                           {    prime_flag = 0;
                                break;
                           }
                        if ( prime_flag == 1 )
                                std::cout << setw(10) 
                                     << number << flush;
                }
        }

        return 0;
        }

