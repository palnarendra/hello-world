#include <iostream>
using namespace std;

unsigned long long int fibo(int n){
unsigned long long int k;

k=n+1;

 unsigned long long int a[k];

a[0]=0;
a[1]=1;


unsigned long long int s[k];

s[0]=0;
s[1]=1;

unsigned long long int sum;
sum = 0;
unsigned long long int i;

for(i=2;i<k;i++){

		a[i]=a[i-1] + a[i-2];
		//s[i]=a[i]%10;
}

for(i=0;i<k;i++){

	sum= sum +a[i];	

}

return (sum % 10) ;

}


int main(){

unsigned long long int n;
int summ;
cin>>n;
summ=fibo(n);
cout<<summ;

return 0;
}
