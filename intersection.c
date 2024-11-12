#include<stdio.h>

int main() {
    int n, m;
    int a[100], b[100], c[200],d[100]; 
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter array 1 \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);
     printf("Enter array 2 \n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        int present=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
               present=1;
              break;
            }
        }
        if(present==0){
            c[x++]=a[i];
        }
    }
    int y=0;
    for(int i=0;i<x;i++){
        int present=0;
        for(int j=0;j<m;j++){
            
            if(c[i]==b[j]){
                present=1;
                break;
            }
        }
        if(present==1){
            d[y]=c[i];
            y++;
        }
    }
    printf("intersection of sets is : ");
    for(int i=0;i<y;i++){
        printf("%d \t",d[i]);
    }
    
}