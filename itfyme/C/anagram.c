#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int isAnagram(char str1[], char str2[]){
    if(strlen(str1) != strlen(str2)){
        return 0;
    }
    
    void sor(char str1[], int size) {
        for (int i = 0; i<size;i++) {
            int min_idx = i;
                for (int j = i+1; j < size;j++) {
                    if (str1[j] < str1[min_idx])
                        min_idx = j;
                    }
                         // swap min_idx and i element
                        int temp = str1[min_idx];
                        str1[min_idx] = str1[i];
                        str1[i] = temp;
        
        }
    }
    
    void asort(char str2[], int size) {
        for (int i = 0; i<size;i++) {
            int min_idx = i;
                for (int j = i+1; j < size;j++) {
                    if (str2[j] < str2[min_idx])
                        min_idx = j;
                    }
                         // swap min_idx and i element
                        int temp = str2[min_idx];
                        str2[min_idx] = str2[i];
                        str2[i] = temp;
        
        }
    }

    if(strcmp(str1,str2) == 0){
        return 1;

    }
    else{
        return 0;
    }
}




int main() {
    char str1[] ="act";
    char str2[] = "cat";
    int a = isAnagram(str1,str2);
    sor(str1,3);
    asor(str2,3);
    if(a == 0){
        printf("it is anagram");
    }
    else{
        printf("it is nt anagram");
    }

}