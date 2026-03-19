#include<iostream>
using namespace std;
int n, m, a[8];
void f(int v){
    if(v == m){
        for(int i=0; i<m; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    int num;
    if(v != 0){
        for(int i=a[v-1]; i<=n; i++){
            a[v] = i;
            f(v+1);
        }
    }
    else{
        for(int i=1; i<=n; i++){
            a[v] = i;
            f(v+1);
        }
    }
    
}
int main(){
    cin >> n >> m;
    f(0);
}
