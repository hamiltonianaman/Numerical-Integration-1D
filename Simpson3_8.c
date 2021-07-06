#include<stdio.h>

double function( double x){
	return x*x;	
	}

int main(){
	double lowerlimit,upperlimit,stepsize,integral,upper,lower,partitions;
	double s1,s2,s3,s4;

	printf("Partitions : ");
	scanf("%lf",&partitions);	
	printf("Lower limit : ");
	scanf("%lf",&lowerlimit);
	printf("Upper limit : ");
	scanf("%lf",&upperlimit);
	
	stepsize = (upperlimit-lowerlimit)/(int)partitions;
	
	upper=lowerlimit;
	lower=lowerlimit;
	integral=0;
	
	for(int i=0;i<partitions;i++){
		upper+=stepsize;
		
		s1 = function(lower);
		s2 = 3*function((2*lower+upper)/3);
		s3 = 3*function((lower+2*upper)/3);
		s4 = function(upper);
		
		integral += stepsize*(s1+s2+s3+s4)/8;
		lower+=stepsize;	
	}
	printf("Value : %.10f\n",integral);

}
