#include<iostream>
using namespace std;
bool f(int a){
    int cnt = 0;
    bool check = false;
    while(a > 0){
        if(a % 10 == 6){
            if(check != true){
                cnt = 1;
            }
            else
                cnt++;
            if(cnt == 3)
                return true;
            check = true;
        }
        else{
            check = false;
        }
        a /= 10;
    }
    return false;
}
int main(){
    int n, i = 666;
    cin >> n;
    while(n > 0){
        if(f(i)){
            n--;
        }
        i++;
    }
    cout << i-1;
}
