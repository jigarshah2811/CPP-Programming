// tuples (in a vector) vectors.cxx
// 
#include <iostream>
#include <tuple>
#include <vector>
#include <string>

int main()
{
  std::tuple<int,std::string> first(10,"str1");
  auto second = std::make_tuple(11,"str2");

  std::vector<std::tuple<int,std::string>> myvector;
  myvector.push_back(first);
  myvector.push_back(second);
  myvector.push_back(std::tuple<int,std::string>(12,"str3") );

  for (auto &iter : myvector)
    {
      std::cout << std::get<0>(iter) << " " ;
      std::cout << std::get<1>(iter) << std::endl; 
   }
  return 0;
}
