#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n ;
100<=n<=999;
cin>>n;
int tens = (n / 10) % 10;
int ones = (n % 10);
cout<<tens<<ones<<endl;


return 0;

}