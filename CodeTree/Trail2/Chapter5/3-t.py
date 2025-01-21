#북동남서
dx=[-1,0,1,0]
dy=[0,1,0,-1]

(n,t) = map(int,input().split())

map_=[]
side=[]

side=list(input())

for _ in range(n):
    map_.append(list(map(int,input().split())))

(x,y) = ((n-1)//2,(n-1)//2)
look = 0
cnt = map_[x][y]

for s in side:
    if s =='R':
        look=(look+1)%4
    elif s =='L':
        look=(look-1)%4
    elif s =='F':
        if x+dx[look] >= 0 and x+dx[look]<n and y+dy[look] >= 0 and y+dy[look] < n:
            x+=dx[look]
            y+=dy[look]
            cnt+=map_[x][y]
            
print(cnt)