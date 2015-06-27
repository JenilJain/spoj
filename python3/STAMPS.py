t = int(input())
for i in range(0,t):
	n,a = map(int,input().split())
	s = list(map(int, input().split()))
	s.sort()
	s.reverse()
	count = 0
	j = 0
	while(count<n and j<a):
		count = count+s[j]
		j=j+1
	print("Scenario #{0}:".format(i+1))
	if(count<n and j == a):
		print("impossible")
		if(i<t-1):
			print("")
	else:
		print(j)
		if(i<t-1):
			print()