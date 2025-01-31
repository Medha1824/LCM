#include <stdio.h>

int main()
{
       int n1,n2,value;
     scanf("%d %d",&n1, &n2);
         if(n1>n2)
         value=n1;
         else
         value=n2;
     while(1){
         if((value % n1==0) && (value % n2==0)){
           printf("LCM is %d" , value);
           break;
         }
         else
           value++;
     }

    return 0;
}
