#include <iostream>
using namespace std;
int main() {
int n,i,k;
for( i = 0; i < 8; i++){
for( k=8; k>i; k--){ 
cout<<" ";}
for( n=0; n<k;n++){
cout<<"#"; 
}
cout<<"\n"; 
}
}   
