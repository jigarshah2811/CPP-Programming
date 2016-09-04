        // lab5a

        #include  <iostream>
        #include  <cstdlib>
        #include  <cmath>
        #include  <ctime>

        class  dice
        {
        private:
                long long value;
		long int cur_time;
        public:
                void roll();
		dice(){
                      std::time(&cur_time);
		      std::srand((unsigned long int)cur_time);
		      }
        };

        void dice::roll()
        {
		value = (std::rand() % 6) + 1;
                std::cout << value << std::endl;
        }

        int main()

        {

 	dice  object;

 	object.roll();
 	object.roll();
 	object.roll();

        return 0;

        }
