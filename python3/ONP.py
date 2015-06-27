t = int(input())
for i in range(0,t):
	p =[]
	s = input()
	for a in s:
		if(a == '+' or a == '-' or a == '*' or a == '/' or a =='^' or a == '('):
			p.append(a)
		elif(a == ')'):
			while(p[-1]!='('):
				print(p.pop(),end="")
			if(p[-1]=='('):
				p.pop()
		else:
			print(a,end="")
	for a in p:
		b = p.pop()
		if(b!='('):
			print(b,end="")
	print("") 