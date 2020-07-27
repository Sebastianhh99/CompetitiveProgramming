#include <bits/stdc++.h>

using namespace std;


int main(){
    int cases,n,m,temp;
    double ans;
    char tempChar;
    string line;
    map<char,int> values;
    map<char,int>::iterator iter;
    cin>>cases;
    for(int casee=0;casee<cases;casee++){
        ans=0;
        values.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>tempChar>>temp;
            values[tempChar]=temp;
        }
        cin>>m;
        cin.ignore();
        while(m){
            m--;
            getline(cin,line);
            for(int i=0;i<line.size();i++){
                iter = values.find(line[i]);
                if(iter!=values.end()){
                    ans+=iter->second;
                }
            }
        }
        ans/=100.;
        printf("%0.2f$\n",ans);
    }
    return 0;
}
