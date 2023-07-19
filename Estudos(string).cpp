#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s1("comparando strings"), s2("biblioteca"), s3("varanda"), c2(s2);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << c2 << endl;

    if(s1 == s2)
    {
        cout << "as strings sao iguais" << endl;
    }

    if(s1 > s2)
    {
        cout << "a string 1 e maior que a string 2" << endl;
    }

    if(s1 < s2)
    {
        cout << "A string 2 e maior que a string 1" << endl;
    }

    int check = s2.compare(c2);

    if(check == 0)
    {
        cout << "as strings s2  e c2 sao iguais" << endl;
    }

    int f = s3.compare(3,  1, s2, c2.size() - 1, 1);
    
    if(f == 0)
    {
        cout << "Os elementos sao iguais" << endl;
    }
}