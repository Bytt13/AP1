#include <iostream>
#include <cstring>

using namespace std;

int main()
{   
    string s1  = "Bala";
    string s2, s3;

    s2 = s1;
    s3.assign(s1);

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "s3 : " << s3 << endl;

    s2[0] = s3[2] = 't';

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "s3 : " << s3 << endl;

    int len = s3.length();

    for(int i = 0; i < len; i++)
    {
        cout << s3.at(i) << endl;
    }

    string s4 = "Trem - " + s1;
    s1.append("da");
    s3 += "lhador";
    string s5;
    s5.append(s1, 2, s1.size());
    s5.append("inha");

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "s3 : " << s3 << endl;
    cout << "s4 : " << s4 << endl;
    cout << "s5 : " << s5 << endl;

    
}