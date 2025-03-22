#include <bits/stdc++.h>
using namespace std;

int main()
{
int y,w;
cin>>y>>w;

int a=0;
a=6-y;

int b=0;
b=6-w;

int z=0;
z=min(a,b);

int m=0;
m=z+1;

int numerator=m;
    int denominator=6;

    int gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    cout<<numerator<<"/"<<denominator<<endl;
	return 0;
}


/* #include <iostream>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int maxRoll = max(y, w);
    int favorable = 7 - maxRoll;

    if (favorable == 6) {
        cout << "1/1" << endl;
    } else if (favorable == 5) {
        cout << "5/6" << endl;
    } else if (favorable == 4) {
        cout << "2/3" << endl;
    } else if (favorable == 3) {
        cout << "1/2" << endl;
    } else if (favorable == 2) {
        cout << "1/3" << endl;
    } else if (favorable == 1) {
        cout << "1/6" << endl;
    } else {
        cout << "0/1" << endl;
    }
    return 0;
} */