
#include <iostream>

int main()
{
	int N = 10, day=19, line=0, x=0;

	line = day % N;

	// —оздаю массив 
	int **arr = new int* [N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
	}

	//«аполн€ю значени€ми, значение €чейки = i+j
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = i + j;
			std::cout << arr[i][j] << '\t';
			if (i == line-1)
			{
				x += i + j;
			}
			
		}
		std::cout << '\n';
	}
	std::cout << "Sum of row values" << x;


	for (int i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	
}

