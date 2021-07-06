#include<stdio.h>

double function( double x){
	// function which has be integrated

	return x*x;	
	}

int main(){
	
	double lowerlimit,upperlimit,stepsize,integral,upper,lower,partitions;
		
	printf("Partitions : ");
	scanf("%lf",&partitions);	
	printf("Lower limit : ");
	scanf("%lf",&lowerlimit);
	printf("Upper limit : ");
	scanf("%lf",&upperlimit);
	
	stepsize = (upperlimit-lowerlimit)/partitions;
	
	upper=lowerlimit;
	lower=lowerlimit;
	integral=0;
	
	for(int i=0;i<partitions;i++){
		upper+=stepsize;
		integral += stepsize*(function(lower)+function(upper))/2;
		lower+=stepsize;	
	}
	printf("Value : %.10f\n",integral);

}
