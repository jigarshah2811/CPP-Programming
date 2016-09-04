// lab3e

  #include  <iostream>

  int main()
  {
  void showflags(long int);

  long int a,b,c;

  c = (long)std::cout.flags();

  showflags(c);

  std::cout.setf(std::ios::showbase | std::ios::showpoint);
  std::cout.setf(std::ios::oct,std::ios::basefield);
        
  c = (long)std::cout.flags();

  showflags(c);

  return 0;
  }

  void showflags(long int c)
  {
   if ( c & std::ios::boolalpha)  std::cout << " boolalpha  is set" << std::endl;
   if ( c & std::ios::dec)        std::cout << " decimal    is set" << std::endl;
   if ( c & std::ios::fixed)      std::cout << " fixed      is set" << std::endl;
   if ( c & std::ios::hex)        std::cout << " hex        is set" << std::endl;
   if ( c & std::ios::internal)   std::cout << " internal   is set" << std::endl;
   if ( c & std::ios::left)       std::cout << " left       is set" << std::endl;
   if ( c & std::ios::oct)        std::cout << " oct        is set" << std::endl;
   if ( c & std::ios::scientific) std::cout << " scientific is set" << std::endl;
   if ( c & std::ios::showbase)   std::cout << " showbase   is set" << std::endl;
   if ( c & std::ios::showpoint)  std::cout << " showpoint  is set" << std::endl;
   if ( c & std::ios::showpos)    std::cout << " showpos    is set" << std::endl;
   if ( c & std::ios::skipws)     std::cout << " skipws     is set" << std::endl;
   if ( c & std::ios::unitbuf)    std::cout << " unitbuf    is set" << std::endl;
   if ( c & std::ios::uppercase)  std::cout << " uppercase  is set" << std::endl;

   std::cout << std::endl;
   }
