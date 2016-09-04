        // lab15
        #include <iostream>
        #include <cstring>

	class date
	{
	private:
        	long int indicator;
        	long int mo,dy,yr;
        	char     the_date[80];
	public:
        	date();
        	date(char *str);
        	date(long int month,long int day,long int year)
        	{ mo = month; dy = day; yr = year; indicator = 3; }
        	void show();
	};

        date::date()
        {
        std::cout << "enter date [mmm dd yyyy]: ";
        std::cin.getline(the_date,80);
        indicator = 1;
        }

        date::date(char *str)
        {
        std::strcpy(the_date,str);
        indicator = 2;
        }       

        void date::show()
        {
        switch (indicator)
        {
        case 1:
        case 2:
                std::cout << "date is :" << the_date << std::endl;
                break;
        case 3:
                std::cout << "date is : " << mo <<"/" << dy
                     <<"/"<< yr << std::endl;
                break;
        }
        }

        int main()
        {
        date date1;
        date date2((char *)"May 07, 2015");
        date date3(5,07,2015);  

        date1.show();
        date2.show();
        date3.show();

        return 0;
        }
