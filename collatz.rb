def Collatz
	n = ARGV[0].to_i

	while true

	      print(n, ' ')

	      break if n == 1
	      
		  if n & 1 != 0
		  	 n = 3 * n + 1
		  else		  	
		  	 n = n / 2
		  end		  
	end
end	

Collatz()
