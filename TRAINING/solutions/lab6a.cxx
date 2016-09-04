        // lab6a

   #include <iostream>
   #include <ctime>

   class stopwatch
   {
   private:
                double begin,end;
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
        void stopwatch::start() { begin = (double)std::clock()/CLOCKS_PER_SEC;
				std::cout << "clock time is..." << begin << std::endl; }
        void stopwatch::stop() { end = (double)std::clock()/CLOCKS_PER_SEC;
				std::cout << "clock time is..." << end << std::endl; }

   int main()
   {
   stopwatch  watch;

        watch.start();

        volatile long int i;
        for (i = 0 ; i++ < 19200000 ; ) { }

        watch.stop();
        watch.show();
   return 0;
   }
