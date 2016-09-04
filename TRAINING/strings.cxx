#include <cstring>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

int main()
{
    string myName("Jigar Shah");
    replace(myName, ' ', '\n');

    cout<<myName;
    return 0;
}
