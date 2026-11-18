#include<iostream>
#include<string>
bool is_palindrome(const std::string& str, int left, int right) {
	if (left > right) {
		return true;
	 }
	if (str[left] == str[right]) {
		return is_palindrome(str, ++left, --right);
	}
	else
		return false;

	
	
	
}
int main()
{
	const std::string str = "level";
	std::cout << "Palindrome check : " << is_palindrome(str, 0, 4);
	return 0;
}