#Function which has to be integrated
function = lambda x : x**2

#input the number of partitions of the domain;must be >= 1
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
	upper+= stepsize
	mid=(upper+lower)/2
	integral+= function(mid)*stepsize
	lower+= stepsize
print("Value : ",integral)



