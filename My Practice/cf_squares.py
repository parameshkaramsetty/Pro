def calArea(x,y):
    x = x**2
    y = y**2
    s = int((x+y)**0.5)
    print(s*s)
t=int(input())
for _ in range(t):
    x1,y1=map(int,input().split())
    x2,y2=map(int,input().split())
    x3,y3=map(int,input().split())
    x4,y4=map(int,input().split())
    if(x1 == x2):
        x = 0
        y = y2 - y1
        calArea(x,y)
    elif(x1==x3):
        x = 0
        y = y3-y1
        calArea(x,y)
    else:
        x = 0
        y = y4 -y1
        calArea(x,y)
        
    