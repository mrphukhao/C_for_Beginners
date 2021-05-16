#include <stdio.h>

#include<math.h>

using namespace std;

int main(){
    
float n,j,i,p;

printf("enter n \n");
scanf("%d",&n);


n=n+3;

p=floor((4*n-2.5)/5.8);

for(j=p;j>=-p;j--){

for(i=-n;i<=n;i++){

if(p*p*i*i+n*n*j*j<=n*n*p*p)

printf("*");

else{

printf("\n");

}

}

printf("\n");

}

return 0;

}