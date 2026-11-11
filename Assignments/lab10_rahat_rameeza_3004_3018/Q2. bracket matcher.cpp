//check : brackets are balanced , correctly nested 
#include<iostream>
#include<stack>
#include<string>
int main()
{
	std::string str;
	std::cout << "Enter an expression : ";
	std::getline(std::cin, str);
	std::stack<char> chr;
	for (char c : str)
	{
		if (c == '('||c=='{'||c=='[')
			chr.push(c);
		if (c == ')')
		{
			if (chr.empty())
			{
				std::cout << "Error : Extra brackets\n";
				break;
			}
			else if (chr.top() != '(')
			{
				std::cout << "Error : Bracket Mismatched\n";
					break;
			}
			else
			{
				chr.pop();
			}
		}
		
        else if (c == '}')
		{
			if (chr.empty())
			{
				std::cout << "Extra\n";
				break;
			}
			else if (chr.top() != '{')
			{
				std::cout << "Bracket Mismatched\n";
				break;
			}
			else
			{
				chr.pop();
			}
		}
		else if (c == ']')
		{
			if (chr.empty())
			{
				std::cout << "Extra\n";
				break;
			}
			else if (chr.top() != '[')
			{
				std::cout << "Bracket Mismatched\n";
				break;
			}
			else
			{
				chr.pop();
			}
		}
	}
	if (!chr.empty())
	{
		std::cout << "extra brackets";

	}
	else
		std::cout << "balanced";
	return 0;
}
