#include <bits/stdc++.h>

using namespace std;


int main(){
    int arr[3001];
    int n,m,ans;
    while(scanf("%d",&n)==1){
        bool flags[n-1],flag=false;
        memset(flags,false,sizeof(flags));
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=1;i<n;i++){
            ans=abs(arr[i]-arr[i-1]);
            if(ans<n){
                flags[ans-1]=true;
            }
        }
        for(int i=0;i<n-1;i++){
            if(!flags[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"Not jolly"<<endl;
        }else{
            cout<<"Jolly"<<endl;
        }
    }
    return 0;
}
