#include<stdio.h>

double function( double x){
	// function which has be integrated

	return x*x;	
	}

int main(){
	
	double lowerlimit,upperlimit,stepsize,integral,upper,lower,mid,partitions;
		
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
		mid = lower+stepsize/2;
		integral += stepsize*(function(lower)+4*function(mid)+function(upper))/6;
		lower+=stepsize;	
	}
	printf("Value : %.10f\n",integral);

}
