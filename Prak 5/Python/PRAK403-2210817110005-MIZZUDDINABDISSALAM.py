a, b = input().split()
a = int(a) ; b = int(b)
if a > b :
    c = a ; d = b
    while c >= b and d <= a:
        print("%d %d"%(c, d), end='')
        if c == b : break
        else : print(" - ", end='')
        c -= 1 ; d += 1
else :
    c = a ; d = b
    while c <= b and d >=a :
        print("%d %d"%(c, d), end='')
        if c == b : break
        else : print(" - ", end='')
        c += 1 ; d -=1