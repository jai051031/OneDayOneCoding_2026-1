#include<iostream>
using namespace std;
int main(){
    int N, a[50][2];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i=0; i<N; i++){
        int cnt = 1;
        for(int j=0; j<N; j++){
            if(a[i][0] < a[j][0] && a[i][1] < a[j][1]){
                cnt++;
            }
        }
        cout << cnt << " ";
    }
}
