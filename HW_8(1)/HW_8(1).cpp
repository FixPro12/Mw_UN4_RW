
#include <iostream>
#include <string>
using namespace std;


class animal
{

public:

   virtual string voice()
    {
       return "It's animal";
    }

};

class cat :  public animal
{
public:
    string voice() override
    {
        return "Meow";
    }
};

class dog : public animal
{
public:
    string voice() override
    {
        return "Woof";
    }
};

class cow : public animal
{
public:
    string voice() override
    {
        return "Muu";
    }
};

int main()
{
   cat cat1;
   dog dog1;
   cow cow1;

    int N=3;

    animal* arr = new animal[N];
   
    arr[0] = cat1;
    arr[1] = dog1;
    arr[2] = cow1;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].voice() << endl;
    }
 


}