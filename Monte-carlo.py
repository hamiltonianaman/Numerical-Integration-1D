from numpy import random as r

# Function which has to be integrated
function = lambda x : x**2

#More the better, but ~10^6 or more would work 
iteration   = int(input("Iterations : "))
#Input lower limit
lowerlimit = float(input("Lower limit : "))
#Input upper limit
upperlimit = float(input("Upper limit : "))
domain = upperlimit-lowerlimit


average = 0
for i in range(iteration):
	random = lowerlimit + r.random()*domain
	'''
	random = r.uniform(lowerlimit,upperlimit)	#would also work
	'''	
	average+=function(random)
print("Value : ",average*domain/iteration)






