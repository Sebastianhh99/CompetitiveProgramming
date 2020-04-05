#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,ans;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    while(a+b+c+d!=0){
        ans=360*3;
        ans+=(a<b)? ((9*(a-b+40))):((9*(a-b)));
        ans+=(c<b)? ((9*(c+40-b))):((9*(c-b)));
        ans+=(c<d)? ((9*(c+40-d))):((9*(c-d)));
        cout<<ans<<endl;
        scanf("%d %d %d %d",&a,&b,&c,&d);
    }
    return 0;
}
