#include <stdio.h>
#include  <stdlib.h>
#include <string>
#include <iostream>

std::string makeLeftString(std::string originalString,
		char ch)
{

	std::string str;
	if(originalString.size() > 0)
	{
		int po = originalString.find_first_of(ch);
		if(po != std::string::npos)
		{
			str = originalString.erase(po, 1);

		}
	}
	return str;

}

int dfs(std::string str, std::string substring)
{

	if (substring.size() == 0)
	{
		printf("\n --dfs 111 %s--\n", str.c_str());fflush(stdout);
		return 0;
	}
	for(std::string::iterator iter = substring.begin();
			iter != substring.end();
			++iter)
	{
		char ch = *iter;
		std::string str1 = str + ch;
		std::string sub = makeLeftString(substring, ch);
		dfs(str1, sub);
	}
	
	return 1;
}

int main()
{
	std::string str="abc";
	for(std::string::iterator iter = str.begin();
			iter != str.end();
			iter++)
	{
		char ch = *iter;
		std::string sub = makeLeftString(str, ch);
		std::string s1;
		s1 = s1 + ch;
		dfs(s1, sub);
	}
}

