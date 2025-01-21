#너무 어렵게 생각한 것 같음

(n, t) = map(int, input().split())
numbers = list(map(int, input().split()))

# 3을 -1로 처리
numbers = [-1 if x <= t else x for x in numbers]
print(numbers)

ret = 0
max_val = 1

# 재귀 함수 정의
def recursive(numbers, idx, cnt):
    if idx >= len(numbers):
        print('end of array:', idx, cnt)
        return cnt

    if numbers[idx] - numbers[idx - 1] == numbers[idx - 1] - numbers[idx - 2]:
        return recursive(numbers, idx + 1, cnt + 1)
    else:
        print('end of sequence:', idx, cnt)
        return cnt

# 최소한 3개의 요소가 있어야 등차를 확인 가능
if len(numbers) > 2:
    for i in range(2, len(numbers)):
        
        if numbers[i] != -1 and numbers[i - 1] != -1 and numbers[i - 2] != -1:
            ret = recursive(numbers, i, 2)
            max_val = max(max_val, ret)
    print(max_val)
else:
    print(len(numbers)-numbers.count(-1))
