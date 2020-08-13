#include <bits/stdc++.h>
#define loop(i,a,b) for(i=a;i<b;i++)


using namespace std;

vector<vector<char>> createMatrix(int n){
    int i,j;
    vector<vector<char>> ans;
    vector<char> temp;
    loop(i,0,n){
        temp.clear();
        loop(j,0,n){
            temp.push_back('A');
        }
        ans.push_back(temp);
    }
    return ans;
}

void printMatrix(vector<vector<char>> matrix){
    int i,j;
    loop(i,0,matrix.size()){
        loop(j,0,matrix.size()){
            cout<<matrix[i][j]<<" ";
        }
        cout<<""<<endl;
    }
}

vector<vector<char>> turn(vector<vector<char>> square){
    int i,j;
    vector<vector<char>> ans;
    vector<char> temp;
    loop(i,0,square.size()){
        temp.clear();
        loop(j,square.size()-1,-1){
            temp.push_back(square[i][j]);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    while(n+m!=0){
        vector<vector<char>> bigSquare=createMatrix(n);
        vector<vector<char>> smallSquare=createMatrix(m);
        loop(i,0,n){
            loop(j,0,n){
                cin>>bigSquare[i][j];
            }
        }
        loop(i,0,m){
            loop(j,0,m){
                cin>>smallSquare[i][j];
            }
        }
        smallSquare=turn(smallSquare);
        scanf("%d %d",&n,&m);
    }
    return 0;
}
