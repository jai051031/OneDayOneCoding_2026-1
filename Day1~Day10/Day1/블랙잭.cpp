#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N, M, A[100], MAX = 0;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        for(int j=1; j<N; j++){
            for(int k=2; k<N; k++){
                if(i != j && j != k && k != i){
                    if(A[i] + A[j] + A[k] <= M){
                        if(A[i] + A[j] + A[k] > MAX)
                            MAX = A[i] + A[j] + A[k];
                    }
                }
            }
        }
    }
    cout << MAX;
}
