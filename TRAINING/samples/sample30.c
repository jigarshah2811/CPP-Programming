        /*      SAMPLE30.C              */

#include <stdio.h>

        void calc_tri_number (long int number)
        {
        long  int     n, tri_number = 0;

        for ( n=1 ; n <= number  ; ++n )
                tri_number = tri_number + n ;

        printf ("For %ld the triangular number is %ld\n",
                 number,tri_number) ;
        }

        int main()
        {
        long  int     n, number;

	void 	calc_tri_number (long int );

        for ( n = 0 ; n < 3 ; ++n )
           {
                printf ("Enter number: ");
                scanf  ("%ld",&number);
                calc_tri_number (number);
           }
        return 1;
        }
