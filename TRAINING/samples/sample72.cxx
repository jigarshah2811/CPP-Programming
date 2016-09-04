	
	//sample72

	#include	<iostream>
	#include	<map>

	int main()
	{
	map<char,int>m;
	int i;

	for (i=0;i<26;i++){
	m.insert(pair<char,int>('A'+i,65+i));
			  }

	char ch;

	std::cout << "key: ";
	cin >> ch;

	map<char,int>::iterator p;

	p=m.find(ch);

	if (p != m.end())
		std::cout <<"value " << p->second << std::endl;
	else
		std::cout << "not found" << std::endl;

	return 0;

	}