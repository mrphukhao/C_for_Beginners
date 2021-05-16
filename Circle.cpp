#include <stdio.h>

#include<math.h>

// using namespace std;

int main(){
    
float n,j,i,p;

printf("enter n \n");
scanf("%f",&n);


n=n+3;

p=floor((4*n-2.5)/5.8);

for(j=p;j>=-p;j--){
    for(i=-n;i<=n;i++){
        if(p*p*i*i+n*n*j*j<=n*n*p*p)
            printf("*");
        else{
            printf(" ");
        }
    }
    printf("\n");
}

return 0;
}





// int cc, sp, st=1;
// 	cc = r*2;
// 	sp = cc-1;
	
// 	for(int i=1;i<=cc;i++)
// 	{
// 		for(int x=1 ; x<=sp ; x++)
// 		{
// 			printf(" ");
// 		}
		
// 		for(int k=1; k<=st ;k++)
// 		{
// 			printf("*");
// 		}
		
// 		if(sp>i)  
//     	{  
//       		sp=sp-1;  
//       		st=st+2;  
//     	}  
//     	if(sp<i)  
//     	{  
//       		sp=sp+1;  
//       		st=st-2;  
//     	}  
//     printf("\n");  
// 	}  