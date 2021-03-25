def Collatz(n):
    
    while True:
    	yield n
    	if n == 1:
    	   break
    	if n & 1:
    	   n = 3 * n + 1
    	else:
    	   n = n // 2    	
    
for j in Collatz(1780):
    print(j, end = ' ')
