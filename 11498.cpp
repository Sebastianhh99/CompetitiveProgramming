#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,n,m,i,j;
    cin>>k;
    while(k!=0){
        scanf("%d %d",&n,&m);
        for(int h=0;h<k;h++){
            scanf("%d %d",&i,&j);
            if(i==n || j==m){
                cout<<"divisa"<<endl;
            }
            else if(i>n && j>m){
                cout<<"NE"<<endl;
            }
            else if(i<n && j<m){
                cout<<"SO"<<endl;
            }
            else if(i<n && j>m){
                cout<<"NO"<<endl;
            }
            else if(i>n && j<m){
                cout<<"SE"<<endl;
            }
        }
        cin>>k;
    }
    return 0;
}
