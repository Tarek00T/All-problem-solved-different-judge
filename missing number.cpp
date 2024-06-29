/*6
3 5 6 2 1
output 4
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    ll n,sum=0;
    cin >>n;
    vector<int>v(n-1);
    for(int i=0; i<n-1; i++)
    {
        cin >>v[i];
        sum+=v[i];
    }
    ll sumaddequ= (n*(n+1)/2);
    ll diff=sumaddequ-sum;
    cout<<diff<<endl;
}
