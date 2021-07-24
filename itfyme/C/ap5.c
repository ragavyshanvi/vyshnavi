#include<stdio.h>
int main(){
int a[4] = {1,2,3,4};
int num = 5;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int sum = a[i]+a[j];
            if(sum == num){
                printf("%d + %d = %d\n",a[i],a[j],sum);
            }
            
        }
        
    }
        
        
    return 0;
}