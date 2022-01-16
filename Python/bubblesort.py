print("Hello world")

list = [1, 5, 23, 8, 35]

def PrintList(list):
    for i in range(len(list)):
        print(list[i])

def BubbleSort(list):
    n = len(list)
    k = 0
    for i in range(0, n-1):
        for j in range(0, n-1):
            if list[j] > list[j+1]:
                k = list[j]
                list[j] = list[j+1]
                list[j+1] = k

print("Default: ")
PrintList(list)
BubbleSort(list)
print("Sorted: ")
PrintList(list)
