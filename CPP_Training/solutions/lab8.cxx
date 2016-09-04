        // lab8

        #include <iostream>

        void date(char *date);
        void date(long int month,long int day,long int year);

        int main()
        {

        char d[80];
        long int n[3];

        std::cout << "enter date (as a string): " ;
        std::cin.get(d,80);
        date(d);        

        std::cout << "enter date (month,day,year): ";
        std::cin >> n[0]  >> n[1]  >> n[2] ;

        date(n[0],n[1],n[2]);

        return 0;

        }

        void date(char *date)
        {
            std::cout << "date is: " << date << std::endl;
        }

        void date(long int month,long int day, long int year)
        {
        std::cout << "date is: " << month <<"/"<<day<<"/"<<year<<std::endl;
        }
