#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to remove: ";
    cin >> ch;

    string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            result = result + str[i];
        }
    }

    cout << "Updated string: " << result << endl;

    return 0;
}
