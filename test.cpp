#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"H"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    system("pause");
}