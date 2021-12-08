

#include <iostream>
using namespace std;
template <typename T>
class Stack
{
private:
	T element = 0;
	int size = 0;
	T* arr;
public:
	Stack()
	{
		arr = new T[size];
		cout << "enter the size of the array " << endl;
		cin >> size;
		cout << "Enter the elements " << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> element;
			arr[i] = element;
		}
	}
	~Stack()
	{
		delete[] arr;
	}
};

int main()
{
	Stack<int> arr;
	return 0;
}

