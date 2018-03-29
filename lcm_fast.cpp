#include<iostream>
using namespace std;

unsigned long long int  euclidgcd(unsigned long long int a, unsigned long long int b){

int k=0;

if(b==0)
return a;

k= a%b;

return (euclidgcd(b,k));

}

int main(){
unsigned long long int a,b;
cin>>a>>b;
if (a>b)
cout<<(a*b)/euclidgcd(a,b);

else
cout<<(a*b)/euclidgcd(b,a);


return 0;
}
