#include<unistd.h>
#include<stdio.h>
int main (int argc, char **argv){
	float r,p;
	printf("donner le rayon r \n");
	scanf("%f",&r);
	p=2*3.14*r;
	printf("la circonférence d'un cercle est: %f",p);
	
	return 0;
}
