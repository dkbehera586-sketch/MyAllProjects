#include<stdio.h>
int main(){
    int count[10]={0};
    int output[16];
int ar[16]={1,3,2,4,3,1,5,6,7,3,4,5,5,4,3,7};
printf("Original elements are:\n");
for(int i=0; i<16;i++ ){
    printf("%d ",ar[i]);
}
for(int i=0; i<16;i++ ){
    count[ar[i]]++;
}
printf("\nOccurence of  elements are:\n");
for(int i=0;i<10;i++){
    printf("%d.......%d\n ",i,count[i]);
}
for(int i=1;i<=10;i++){
    count[i]=count[i]+count[i-1];
}
printf("Cummulative count of the elements are:\n");
for(int i=0;i<10;i++){
    printf("%d ",count[i]);
}
for(int i=15;i>=0;i--){
    output[--count[ar[i]]]=ar[i];
    
}
printf("\n Now the sorted array is \n");
for(int i=0;i<16;i++){
    printf("%d ",output[i]);
}
    return 0;
}