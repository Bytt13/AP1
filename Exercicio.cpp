#include <iostream>
#include <cstring>

using namespace std;

int comparador(string s, string x);

int main()
{
    string s, c;

    getline(cin, s);
    getline(cin, c);

    cout << s << endl;
    cout << c << endl;

    comparador(s, c);
}

int comparador(string s, string x)
{
    int len, f, cont = 0, cont2 = 0; 
    string comp, camp;

    if(s.length() > x.length())
    {
        len = s.length();
        comp = s;
        camp = x;
    }
    else
    {
        len = x.length();
        comp = x;
        camp = s;
    }

    cout << len << endl;

    for(int i = 0; i < len; i++)
    {
        f = comp.compare(i, 1, camp, i, 1);
        if(f == 0)
        {
            cont++;
        }
        else
        {
            cont2++;
        }
    }

    cout << cont << endl;

    if(cont == len)
    {
        cout << "todas as letras das strings sao iguais entre si" << endl;
    }
    if(cont != len)
    {
        cout << "As strings sao diferentes em " << cont2 << "Letras" << endl;
    }

    return 0;
}