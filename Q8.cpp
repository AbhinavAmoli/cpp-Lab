#include <iostream>
using namespace std;

class Student
{
private:
    int scores[5];

public:

    // Reads 5 exam scores
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }

    // Returns total score
    int calculateTotalScore()
    {
        int total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + scores[i];
        }

        return total;
    }
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].input();
    }

    // Anna's total score
    int annaScore = students[0].calculateTotalScore();

    int count = 0;

    // Compare other students with Anna
    for (int i = 1; i < n; i++)
    {
        if (students[i].calculateTotalScore() > annaScore)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
