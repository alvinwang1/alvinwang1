
#include <iostream>
#include <math.h>
using namespace std;
int N;
int process(int a){
    /*
    int temp = 1;
    while(a/temp!=0){
        temp*= 10;
    }
    temp/=10;
    a%=temp;
    // cout << a << endl;*/
    return a/10;
}
void test(int a, int b){
    bool flag = false;
    if(a == 1){
        return;
    }
    if(a == 2){
        cout << b << endl;
        return;
    }
    if(a % 2 == 0){
        return;
    }
    if(a <= 8){
        cout << b << endl;
        return;
    }
    for(int i = 3; i <= int(sqrt(a)); i+=2){
        //    cout << sqrt(a) << " " << a << endl;
        if(a % i == 0){
            flag = true;
        }
    }
    if(flag == true){
        return;
    }
    if(a / 10 == 0){
        cout << b << endl;
        return;
    }
    //cout << 1 << endl;
    test(process(a), b);
}
int main(){
    cin >> N;
    int temp = 1;
    for(int i = 1;i < N; ++i){
        temp*=10;
    }
    for(int i = temp; i < temp*10; ++i){
        test(i, i);
    }
}
