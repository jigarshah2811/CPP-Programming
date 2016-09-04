// range3.cxx
//
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>


int main() 
{
int arr[] = {1,2,3,4,5};
for(int &e : arr) 
{
  e = e*e;
}
for(int &f : arr) 
{
  std::cout << "value is " << f << std::endl; 
}
for(auto  &f : arr) 
{
  std::cout << "value is " << f << std::endl; 
}
//===============================================
std::map<std::string, std::vector<int>> map;
std::vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
map["one"] = v;


for(const auto &kvp : map) 
{
  std::cout << kvp.first << std::endl;

  for(auto v : kvp.second)
  {
     std::cout << v << std::endl;
  }
}

std::for_each(v.begin(),v.end(),[](int i) { std::cout << " " << i;});
std::cout << std::endl; 

return 0;
}
