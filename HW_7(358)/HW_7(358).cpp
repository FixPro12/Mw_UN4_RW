
#include <iostream>

using namespace std;
template <typename T>

class Stack
{
private:

	T element = 0;
	int size, i=0;
	T* arr;

public:

	Stack()
	{
		cout << "enter the size of the array " << endl;
		cin >> size;
		if (size == 0)
		{
			cout << "Error:You entered zero value!" << endl;
			exit(0);
		}
		arr = new T[size];
	}
	void push()
	{
		if (i < size)
		{
			cout << "Enter the elements " << endl;
			cin >> element;
			arr[i] = element;
			i++;
		}
		else
		{
			cout << "Array size exceeded!"<<endl;
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
	arr.push();
	arr.push();
	arr.pop();
	arr.pop();
	return 0;
}