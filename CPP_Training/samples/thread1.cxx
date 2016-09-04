// thread1

#include <iostream>
#include <thread>

void thread_code()
{
   std::cout << "in thread code..." << std::endl; 
}
 
int main()
{
    std::thread t1(thread_code);
    std::thread::id t1_id = t1.get_id();
 
    std::thread t2(thread_code);
    std::thread::id t2_id = t2.get_id();
 
    std::cout << "t1's id: " << t1_id << std::endl;
    std::cout << "t2's id: " << t2_id << std::endl;
 
    t1.join();
    t2.join();

    return 0;
}
