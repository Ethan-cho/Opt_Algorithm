#include<iostream>
using namespace std;
 
int n;
int map[101][101];
int visited[101];
int d[101][101];
void init() {
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
}

void solve(int idx){
    for(int i=0;i<n;i++){
        if(map[idx][i]==1){
            if(visited[i]==false){
                visited[i]=true;
                solve(i);
            }
        }
    }
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
 
    //n개의 정점에 대해 수행
    for(int i=0;i<n;i++){
        init(); //초기화
        solve(i);
        for(int j=0;j<n;j++){ //d에 기록
            if(visited[j])    d[i][j]=1;
            else    d[i][j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<d[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
    
    return 0;
}
