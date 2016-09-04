// tuples (in a list)   lists.cxx
// 
#include <iostream>
#include <tuple>
#include <list>
#include <string>

int main()
{
  std::tuple<int,std::string> first(10,"str1");
  auto second = std::make_tuple(11,"str2");

  std::list<std::tuple<int,std::string>> mylist;
  mylist.push_back(first);
  mylist.push_back(second);
  mylist.push_back(std::tuple<int,std::string>(12,"str3") );

  for (auto &iter : mylist)
    {
      std::cout << std::get<0>(iter) << " " ;
      std::cout << std::get<1>(iter) << std::endl; 
   }
  return 0;
}
