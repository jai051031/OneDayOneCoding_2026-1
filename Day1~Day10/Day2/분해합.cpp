#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int num = i, sum = i;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum == N){
            cout << i;
            return 0;
        }
    }
    cout << "0";
}
