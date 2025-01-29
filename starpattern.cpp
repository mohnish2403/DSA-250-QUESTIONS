/*#include<iostream>
using namespace std ;
int main(){

    int i,n,j;
    cout<<"enter the valure of n";
    cin>>n;
    for(i=1;i<=n;i++){
       
        for(j=1;j<=n;j++){

            cout<<"*";
        }
        cout<<"\n";
    }
     
        
    
    return 0;
}*/





#include<iostream>
using namespace std;
int main(){

int n,m;
cout<<"enter the value of m";
cin>>m;
cout<<"enter the value of n";
cin>>n;
for(int i=1;i<=n;i++){

    for(int j=1;j<=m;j++){
        if(i==1||i==n||j==1||j==m){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
}
cout<<endl;
}

    return 0;
}