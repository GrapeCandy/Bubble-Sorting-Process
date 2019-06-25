#include <iostream>
#include <queue>
#include <functional>

int N, K;
int array[1000000];
std::priority_queue<int, std::vector<int>, std::greater<int>> q;

int main(void)
{
	std::cin >> N >> K;

	for (int a = 0; a < N; a++) { std::cin >> array[a]; }
	for (int a = 0; a < K; a++) { q.push(array[a]); }

	for (int a = K; a < N; a++)
	{
		if (array[a] < q.top())
		{
			std::cout << array[a] << " ";
		}
		else
		{
			std::cout << q.top() << " ";
			q.pop();
			q.push(array[a]);
		}
	}

	while (!q.empty())
	{
		std::cout << q.top() << " ";
		q.pop();
	}
}
	