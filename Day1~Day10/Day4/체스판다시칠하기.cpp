#include<iostream>
using namespace std;
int main(){
    int N, M, min = 1000000;
    string A[51];
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N-7; i++){
        for(int j=0; j<M-7; j++){
            int cnt = 0, cnt1 = 0, cnt2 = 0;
            for(int k=i; k<i+8; k++){
                for(int l=j; l<j+8; l++){
                    if((k-i+l-j) % 2 == 0){
                        if(A[k][l] == 'B'){
                            cnt1++;
                        }
                    }
                    else{
                        if(A[k][l] == 'W'){
                            cnt1++;
                        }
                    }
                }
            }
            
            for(int k=i; k<i+8; k++){
                for(int l=j; l<j+8; l++){
                    if((k-i+l-j) % 2 == 0){
                        if(A[k][l] == 'W'){
                            cnt2++;
                        }
                    }
                    else{
                        if(A[k][l] == 'B'){
                            cnt2++;
                        }
                    }
                }
            }
            if(cnt1 > cnt2)
                cnt = cnt2;
            else
                cnt = cnt1;
            if(min > cnt)
                min = cnt;
        }
    }
    cout << min;
}
