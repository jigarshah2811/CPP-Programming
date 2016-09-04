
        // lab7

        #include <iostream>

        class letters
        {
        private:
                char character;
        public:
                letters(char c) { character = c; }
                char  get_ch() { return character; }
        };

        int main()
        {

        letters  object[10] = { 'A','B','C','D','E','F',
                                'G','H','I','J'};

        letters  *pointer;
        pointer = object;

        long int i;

        for (i = 0; i < 10 ; i++,pointer++)
        std::cout << "next character is : " << pointer->get_ch()
             << std::endl;

        return 0;

        }
