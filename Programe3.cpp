#include <iostream>
#include <string>
using namespace std;

class Concat
{
public:
    string Concatenate(string a, string b)
    {
        return a + b;
    }

    string Concatenate(char a, char b)
    {
        string init = "";
        init += a;
        init += b;
        return init;
    }
};

int main()
{

    Concat c;

    cout << "Concatenated String is: " << c.Concatenate("Ravi", "Jha") << endl;
    cout << "Concatenated Characters are: " << c.Concatenate("R", "J") << endl;

    return 0;
}
