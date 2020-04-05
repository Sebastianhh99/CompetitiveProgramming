#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    bool entry=false;
    cin>>c;
    while(!cin.eof()){
        if(c=='"'){
            if(!entry){
                cout<<"``";
                entry=true;
            }
            else{
                cout<<"''";
                entry=false;
            }
        }
        else{
            cout<<c;
        }
        c=cin.get();
    }
    return 0;
}
