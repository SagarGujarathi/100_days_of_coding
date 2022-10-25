from ctypes import sizeof


array = [2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1]
a = int(input("Gimme a number : "))
answer = int(0)
count = int(0)
for i in range(11):
    if (answer + array[i] <= a):
        count += 1
    while (answer + array[i]) <= (a):
        answer += int(array[i])
    if (answer == a):
        break

print(count)
