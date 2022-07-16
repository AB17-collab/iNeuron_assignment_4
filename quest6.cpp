#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n = 2;
    while(count<10){
        if(!(n&1)){
            cout<<n<<"\n";
            count++;
            n += 2;
        }
        else{
            continue;
        }
    }
    return 0;
}