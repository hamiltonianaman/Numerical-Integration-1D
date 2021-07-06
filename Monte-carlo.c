#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double function(double x){
	// function which has be integrated
	return x*x;
}

int main(){
	long iterations;
	double average,upperlimit,lowerlimit,domain,randd;
	//seeding random number with time
	srand(time(NULL));
	
	
	//Input the number of iterations, more the iterations are, better the result will be
	//10^6 or more would be good.

	printf("Iterations : ");
	scanf("%ld",&iterations);	
	printf("Lower limit : ");
	scanf("%lf",&lowerlimit);
	printf("Upper limit : ");
	scanf("%lf",&upperlimit);
	
	
	domain = upperlimit-lowerlimit;
	average = 0;
	for(int i=0;i<iterations;i++){
		randd = lowerlimit + (double)(rand())/RAND_MAX*domain;
		average += function(randd);	
	}
	printf("Value : %.10f\n",average*domain/iterations);

}
