        // sample20a

   #include <iostream>
   #include <iomanip>
   #include <cstring>
   #include <cstdlib>

   class  class7
   {
   private:
                char *pointer;
                long int length;
   public:
                void show() { std::cout << "string: "
                           << pointer << "     length: " << std::dec
                           << length  << "     pointer: "
                           << std::setiosflags(std::ios::uppercase)
                           << std::hex << (long)pointer << std::endl; }

                class7(char *ptr);
                ~class7();
   };
        class7::class7(char *ptr)
        {
        length = std::strlen(ptr) + 1;
        pointer = new char [length];
        std::strcpy(pointer,ptr);
	std::cout << "in constructor..." << this << std::endl;
        }

        class7::~class7()
        {
        std::cout << "in destructor..." << this 
	     << "  pointer=" << std::hex  << (long)pointer << std::endl;
        delete pointer;
        }

   int main()
   {
        class7    string1((char *)"first string"),
                  string2((char *)"second string");

        string1.show();
        string2.show();

        string2 = string1;

        string1.show();
        string2.show();

        return 0;
   }
