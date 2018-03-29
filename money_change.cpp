#include<iostream>
using namespace std;

long int money(int m){

long int  sum=0;
long int a[3],q[3],r[3];

a[0]=m;
q[0]=m/10;
r[0]=m%10;

a[1]=r[0];
q[1]=a[1]/5;
r[1]=a[1]%5;

a[2]=r[1];
q[2]=a[2]/1;
r[2]=a[2]%1;

sum=q[0]+q[1]+q[2];

return sum;


}

int main(){
long int m;
cin>>m;
cout<<money(m);

return 0;
}
