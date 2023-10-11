//WAP to input 5 numbers in an array using pointer,sort them and display them
#include<stdio.h>
#include<conio.h>
void sort ( int *a);
void read( int *a);
void display(int *a);
int main() {
    int a[5],n=5,c,j,i;
    read(a);
    sort(a);
    display(a);}
    void read( int *a){
	int i;
    for(i=0;i<5;i++){
        scanf("%d",a+i);
        
    }
    printf("The values are \n");}
    
    void sort ( int *a){
	int i,c,j;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1;j++){
            if( *(a+j)>*(a+j+1)){
                c= *(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=c;
            }
        }
    }}
    void display(int *a){
	int i;
    for(i=0;i<5;i++){
        printf("%d\t",*(a+i));
    }
    printf("\n");
    
}
