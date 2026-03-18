#include<iostream>
using namespace std;
int n, m, a[7];
int check[7];
void f(int v){
    if(v == m){
        for(int i=0; i<m; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1; i<=n; i++){
        a[v] = i;
        check[i] += 1;
        f(v+1);
        check[i] -= 1;
    }
}
int main(){
    cin >> n >> m;
    f(0);
}
