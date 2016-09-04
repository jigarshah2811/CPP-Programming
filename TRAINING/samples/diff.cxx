
        //      lab14

        #include <iostream>
	using namespace std;

        class   date
        {
        private:
                long  int  month1,month2,day1,day2,year1,year2;
                long  int  days1,days2;
                long int total_days (long int m,long int d,long int y);
        public:
                long int diff();
                date();
        } ;
        
        date::date()
        {
        cout << "Enter first  date (mm dd yyyy):" ;
        cin  >>  month1 >> day1 >> year1 ;
        cout << "Enter second date (mm dd yyyy):" ;
        cin  >>  month2 >> day2 >> year2 ;
        }

        long int date::total_days (long int m,long d,long int y)
        {
        if (m <= 2)
        {
                y -= 1;        // year = year - 1
                m  = 13;      // month = month + 13
        }
        else
                m += 1;       // month = month + 1

        return ((1461 * y / 4) +
                (153 * m / 5) + d) ;
        }

        long int date::diff()
        {
        return (total_days(month2,day2,year2) -
                total_days(month1,day1,year1));
        }

        main ()
        {

        date  object;

        cout  << "number of elapsed days = "<< object.diff() << endl;
        }
