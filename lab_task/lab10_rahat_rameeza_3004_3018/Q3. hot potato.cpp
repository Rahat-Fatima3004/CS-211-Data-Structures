#include<iostream>
#include<queue>
int main()
{
	std::queue<int> q;
	int n, k;
	std::cout << "Enter number of players : ";
	std::cin >> n;
	std::cout << "Enter number of times potato is passed : ";
	std::cin >> k;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	
	while (q.size() != 1)
	{
		int count = 1;
		while (count <= k)
		{
			q.push(q.front());
			q.pop();
			count++;
		}
		q.pop();

		


	}
	std::cout << "winner : " << q.front();
	return 0;


}