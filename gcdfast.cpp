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
cout<<euclidgcd(a,b);

else
cout<<euclidgcd(b,a);


return 0;
}
