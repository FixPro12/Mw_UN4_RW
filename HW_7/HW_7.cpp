#include <iostream>
#include <stack>  


int main() {

    std::stack <int> steck;  

    int i = 0;

    std::cout << "Enter six numbers: " << std::endl; 

    while (i != 6) {
        int a;
        std::cin >> a;

        steck.push(a);  // ��������� ��������� �����
        i++;
    }

    std::cout << "Top of stack : " << steck.top() << std::endl; // ������� ������� �������

    steck.pop();  // ������� ������� �������
    std::cout<<"Top element removed "<< std::endl;

    std::cout << "Top of stack : " << steck.top() << std::endl; // ������� ������� �������
}