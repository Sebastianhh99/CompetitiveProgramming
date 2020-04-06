#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases,n,temp,d=0,l=0;
    vector<int> s;
    cin>>cases;
    for(int c=0;c<cases;c++){
        s.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>temp;
            s.push_back(temp);
        }
        sort(s.begin(),s.end());
        l=s.back()-s.front();
        cout<<l*2<<endl;
    }
    return 0;
}
