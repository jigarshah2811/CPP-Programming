        // lab6b

   #include <iostream>
   #include <ctime>

   class stopwatch
   {
   private:
                time_t begin,end;
   public:
                stopwatch();
                ~stopwatch();
                void start();
                void stop();
                void show();
};
        stopwatch::stopwatch() { begin = end = 0 ; }

        void stopwatch::show() { std::cout << "elapsed time is: "
                                      << end - begin << std::endl;
                    }
        stopwatch::~stopwatch() { std::cout << "stopwatch ending..."
                                       << std::endl;
                                  show();
                                }
        void stopwatch::start() { time(&begin); }
        void stopwatch::stop() { time(&end); }

   int main()
   {
   char buffer;
   stopwatch  watch;

        std::cout << "hit <ENTER> to begin and end..." << std::endl;
        std::cin.get(buffer);
        watch.start();


        std::cin.get(buffer);
        watch.stop();
        watch.show();
   return 0;
   }
