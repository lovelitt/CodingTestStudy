from collections import deque

def dfs(graph, v, visited):
    visited[v]=True
    print(v, end=' ')
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start]=True

    while queue:
        v = queue.popleft()
        print(v, end=' ')
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i]=True

n,m,v = map(int, input().split())

#visited 생성
visited = [False]*(n+1)

#인접그래프 생성
graph = [[]for _ in range(n+1)]
for i in range(m):
    x,y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

for i in range(n+1):
    graph[i].sort()

dfs(graph, v, visited)
print()

visited = [False]*(n+1)
bfs(graph, v, visited)