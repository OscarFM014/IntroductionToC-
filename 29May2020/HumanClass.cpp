#include <iostream>
using namespace std;

class Human
{
public:
    int age;

    Human(int newAge)
    {
        age = newAge;
    }

    void think()
    {
        cout << getThinkMessage() << endl;
    }

private:
    int socialLevel;
    int intelligence;
    int lucky;

    string getThinkMessage()
    {
        if (socialLevel + lucky > 100)
        {
            return "Wow, I am so happy";
        }
        else if (lucky > intelligence)
        {
            return "The life smile me";
        }
        else if (age > 18)
        {
            return "I so young!";
        }

        return "I'm hungry";
    }
};

int main()
{
    Human Oscar(19);
    Oscar.think();
    return 0;
}
