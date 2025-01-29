#include<iostream>
using namespace std;
int main(){
    int sum=0,i=1,n;//creating "i" as a loop variable and "s" is used for storing sum
    cout<<"value of n"<<endl;
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"value of sum is "<<sum<<endl;


    return 0;
}