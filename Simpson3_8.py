#Function which has to be integrated
function = lambda x : x**2

#input the number of partitions of domain;must be > 1
fractions = int(input("Partitions : "))
#Input lower limit
lowerlimit = int(input("Lower limit : "))
#Input upper limit
upperlimit = int(input("Upper limit : "))

stepsize = (upperlimit-lowerlimit)/fractions

integral=0
upper=lowerlimit
lower=lowerlimit
for i in range(fractions):
	upper += stepsize
	
	s1 = function(lower)
	s2 = 3*function((2*lower+upper)/3)
	s3 = 3*function((lower+2*upper)/3)
	s4 = function(upper)
	
	
	integral += (s1+s2+s3+s4)*stepsize/8
	lower+=stepsize
print("Value :",integral)

