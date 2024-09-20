N = int(input())
array = list(map(int, input()))

answer = 0
answer2 = 0


for i in range(len(array)):
    answer += array[i]
    
for i in array:
    answer2 += i
    
print(answer)
print(answer2)