t = int(input())
for i in range(0,t):
    input()
    c = input().replace('+',' ').replace('=',' ').split()
    if 'machula' in c[0]:
        c[0] = int(c[2])-int(c[1])
    elif 'machula' in c[1]:
        c[1] = int(c[2])-int(c[0])
    elif 'machula' in c[2]:
        c[2] = int(c[1])+int(c[0])
    print(str(c[0])+' + '+str(c[1])+' = '+str(c[2]))