        // stack 

	#include <iostream>
	#include <stack>
	#include <vector>

	int main()
	{
	std::stack<long int> stack1; 
	std::vector<long int> array;

	for (long int i=0;i < 10;++i){stack1.push(i);}

	auto size=stack1.size();

	for (long int i=1;i <= size;++i){
		std::cout << "stack value: " << stack1.top() << std::endl;
		array.insert(array.end(),stack1.top());
		stack1.pop();
		}	

	if (stack1.empty()) { std::cout << "stack is empty" << std::endl;}
	std::cout << "vector size: " << array.size() << std::endl;

	return 0;
	}

