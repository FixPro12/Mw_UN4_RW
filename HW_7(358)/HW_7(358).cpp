

#include <iostream>

using namespace std;
template <typename T>

class Stack
{
private:

	T element = 0;
	int size, i;
	T* arr;

public:

	Stack()
	{
		cout << "enter the size of the array " << endl;
		cin >> size;
		arr = new T[size];
	}
	void push()
	{
		cout << "Enter the elements " << endl;
		for (i = 0; i < size; i++)
		{
			cin >> element;
			arr[i] = element;
		}
	}
	void pop()
	{
		cout << "Top of the stack " << endl;
		cout << arr[i-1]<<endl;
		i--;
	}

	~Stack()
	{
		delete[] arr;
	}
};

int main()
{
	Stack<int> arr;
	arr.push();
	arr.pop();
	arr.pop();
	return 0;
}