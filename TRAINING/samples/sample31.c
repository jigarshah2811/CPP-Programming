        //      sample31.c

	#include <stdio.h>

        void calc_tri_number (long int number)
        {
        long  int     tri_number = 0;

        for ( long int n=1 ; n <= number  ; ++n )
                tri_number = tri_number + n ;

        printf ("For %ld the triangular number is %ld\n",
                 number,tri_number) ;
        }

        int main()
        {
	void 	calc_tri_number ( int );

        for ( long int n = 0 ; n < 3 ; ++n )
           {
		long int number;
                printf ("Enter number: ");
                scanf  ("%ld",&number);
                calc_tri_number (number);
           }
        return 1;
        }
