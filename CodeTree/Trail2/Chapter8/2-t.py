import sys

(n, k) = map(int, input().split())

nums = list(map(int,input().split()))
results=[]

nums.sort()

min_val=min(nums)
max_val=max(nums)

for start in range(min_val, max_val-k+1):
    end = start+k
    cnt=0

    for i in range(n):
        if nums[i] < start:
            cnt+=(start-nums[i])
        elif nums[i] > end:
            cnt+=(nums[i]-end)
    
    results.append(cnt)

print(min(results))
'''
import sys
sys.setrecursionlimit(10**7)

(n, k) = map(int, input().split())

nums = list(map(int,input().split()))
result=sys.maxsize

def calculate(updated_nums, cnt):
    global result
    tmp = updated_nums[::]
    min_val = min(tmp)
    max_val = max(tmp)

    if abs(max_val-min_val) > k:
        #min을 증가
        tmp_min = updated_nums[::]
        cnt_min = cnt
        for i in range(n):
            if tmp_min[i]==min_val:
                tmp_min[i]+=1
                cnt_min+=1
        calculate(tmp_min, cnt_min)

        #max를 감소
        tmp_max = updated_nums[::]
        cnt_max = cnt
        for i in range(n):
            if tmp_max[i]==max_val:
                tmp_max[i]-=1
                cnt_max+=1
        calculate(tmp_max, cnt_max)
    else:
        result = min(result, cnt)
        print(cnt)
        return

calculate(nums, 0)
print(result)
'''