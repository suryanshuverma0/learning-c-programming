//Suryanshu verma
#include<stdio.h>
#include<conio.h>
struct distance{
	int feet;
	float inch;
}d1,d2,total;
void add(struct distance d1,struct distance d2);
void main(){
	printf("Enter 1st distance");
	scanf("%d%f",&d1.feet,&d1.inch);
	printf("Enter 2nd distance");
	scanf("%d%f",&d2.feet,&d2.inch);
	add(d1,d2);
printf("The total distance is %d feet and %.2f inch",total.feet,total.inch);//printf yeha hunu paarxa tala process ra logic matra lekhneyy ho
}
void add(struct distance d1,struct distance d2){
	total.feet=d1.feet+d2.feet;
	total.inch=d1.inch+d2.inch;
	while(total.inch>=12.0){
	total.inch=total.inch-12.0;
	total.feet=total.feet+1;
	}}


