

#include <iostream>
#include<stack>
#include<string>
#include<algorithm>




int main()
{
    //reverse letters in each word
	
	std::string text;
    char c[25];
	std::stack<char> s_chr;
    std::stack<std::string> s_words;
	std::cout << "Enter a string: ";
	std::getline(std::cin, text); // Read a line of text from the user
    for (char c : text)
    {
		s_chr.push(c);

    }
    std::cout << "reversed letters:" << std::endl;
    while(!s_chr.empty())
    {
		std::cout << s_chr.top();
        s_chr.pop();
    }
	std::cout << std::endl;
	//function to reverse the order of words in a string
	// Split the input string into words and push them onto a stack
    for (int i = 0; i < text.length(); ++i)
    {
       for(int j = 0; text[i] != ' ' && i < text.length(); ++j, ++i)
        {
            c[j] = text[i];
            c[j + 1] = '\0';
        }
	   s_words.push(c);
    }
    std::cout << "reversed words:" << std::endl;
	while (!s_words.empty())
    {
        std::cout << s_words.top() << " ";
        s_words.pop();
    }
    
   

}

