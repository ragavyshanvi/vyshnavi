#include<stdio.h>
int IsRepeating(int a[],int n,int size,int index){
    int res = 0;
    for(int i = 0;i<size;i++){
        if(i!=index){
        if(a[i]==n){
            res = 1;
            break;
        }
    }
    }
    return res;
}
#include<stdio.h>
int  main() {  
    int a[10] = {1,4,5,3,5,4,7,1,2,0} ;
    int n[10] ;
    int nrCnt = 0;
    int res;
    for (int i=0; i<10 ; i++) { 
        if (IsRepeating(a,a[i],10,i)==0) {  
            n[nrCnt] = a[i];
            nrCnt++;
        }
    }
    for(int i =0;i<nrCnt;i++){
        printf("%d ",n[i]);

    }
    return res;
    

}