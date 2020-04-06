#include <bits/stdc++.h>

using namespace std;


int main(){
    int cases,a,b;
    string ans;
    cin>>cases;
    for(int c=0;c<cases;c++){
        scanf("%d %d",&a,&b);
        if(a==b) ans="=";
        else{
            ans=(a<b)? "<":">";
        }
        cout<<ans<<endl;
    }
    return 0;
}
