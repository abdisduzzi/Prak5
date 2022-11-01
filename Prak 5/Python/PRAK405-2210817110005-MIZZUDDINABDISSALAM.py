a,b = input().split()
a = int(a) ; b = int(b)
for c in range(1, a + 1) :
    d = c
    while d > 1 :
        print("(%d *%d) + "%(d, b), end='') ; d -= 1
    h = 1 ; hl = (c * b)
    while h < c :
        hl += (h * b) ; h += 1
    print("(%d *%d) = %d"%(d, b, hl))
n = 1 ; m = 1; e = 0
while n <= a :
    e += m * b ; m += n + 1 ; n +=1
print("%d"%(e))