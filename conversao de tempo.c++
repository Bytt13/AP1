#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int m = (N / 60) % 60;
    int x = (N / 60) / 60;
    int h = x;
    int s = N % 60;

	cout << h << ":" << m << ":" << s << endl;
}