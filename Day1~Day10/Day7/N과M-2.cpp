#include<iostream>
using namespace std;
int N, M;
int arr[10];
bool check[10];
void f(int V){
    if(V == M){
        for(int i=0; i<M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1; i<=N; i++){
        if(V != 0 && arr[V-1] > i){
            continue;
        }
        else if(check[i] == false){
            arr[V] = i;
            check[i] = true;
            f(V+1);
            check[i] = false;
        }
    }
}
int main(){
    cin >> N >> M;
    f(0);
}
