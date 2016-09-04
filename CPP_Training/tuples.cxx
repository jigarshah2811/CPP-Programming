// tuples (in a list)
// 
#include <iostream>
#include <tuple>
#include <list>
#include <string>

int main()
{
  std::tuple<int,std::string> front(10,"str1");
  auto second = std::make_tuple(11,"str2");

  std::list<std::tuple<int,std::string>> mylist;
  mylist.push_back(front);
  mylist.push_back(second);
  mylist.push_back(std::tuple<int,std::string>(12,"str3") );

	//navigate using iterator
  for (auto &iter : mylist)
    {
       std::cout << std::get<0>(iter) << " " ;
       std::cout << std::get<1>(iter) << std::endl; 
   }

	//navigate using iterator //old method
	
	while(!mylist.empty())
    {
	 	auto first = mylist.front();
       std::cout << std::get<0>(first) << " " ;
       std::cout << std::get<1>(first) << std::endl; 

		mylist.pop_front();
   }
 

  return 0;
}
