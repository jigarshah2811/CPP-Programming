       
	 //      diffdate.c


	#include <stdio.h>

        struct  date
        {
        long  int     month;
        long  int     day;
        long  int     year;
        } ;


        void main ()
        {

        long    int     days1,days2,total_days (struct date);
        struct  date  date1,date2;


        printf ("Enter first date (mm dd yyyy): ");
        scanf  ("%ld%ld%ld",&date1.month,&date1.day,&date1.year);

        printf ("Enter second date (mm dd yyyy): ");
        scanf  ("%ld%ld%ld",&date2.month,&date2.day,&date2.year);


        days1 = total_days (date1);
        days2 = total_days (date2);

        if (days1 > days2)
        printf ("number of elapsed days = %ld\n",(days1-days2));
        else
        printf ("number of elapsed days = %ld\n",(days2-days1));
        }



        long   int   total_days (struct date  a_date)

        {

        long   int     days;

        if (a_date.month <= 2)
        {
                a_date.year -= 1;               /* year = year - 1 */
                a_date.month += 13;             /* month = month + 13 */
        }
        else
                a_date.month += 1;              /* month = month + 1  */

        days = (1461 * a_date.year / 4) +
                ((153 * a_date.month) / 5) + a_date.day ;

        return (days);
        }

