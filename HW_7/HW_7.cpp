#include <iostream>
#include <stack>  

class Stack
{
private:
    std::stack <int> steck;
    int i = 0;
    int a;
public:
    void GetStack()
    {
        std::cout << "Enter six numbers: " << std::endl;

        while (i != 6) {
            std::cin >> a;

            steck.push(a);  // добавляем введенные числа
            i++;
        }
        std::cout << "Top of stack : " << steck.top() << std::endl; // выводим верхний элемент

        steck.pop();  // удаляем верхний элемент
        std::cout << "Top element removed " << std::endl;

        std::cout << "Top of stack : " << steck.top() << std::endl; // выводим верхний элемент
     }

};

int main() {
    Stack p;
    p.GetStack();
}