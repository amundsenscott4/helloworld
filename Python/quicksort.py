import random

def PrintList(mylist):
    for i in range(len(list)):
        print(list[i])

def Partition(mylist):
    if len(mylist) == 1:
        return 0
    i = 0
    j = len(mylist)-2
    v = len(mylist)-1
    while (i <= j):
        if( (mylist[i] < mylist[v]) and (mylist[j] >= mylist[v]) ):
            i += 1
            j -= 1
        if( (mylist[i] >= mylist[v]) and (mylist[j] < mylist[v]) ):
            mylist[i], mylist[j] = mylist[j], mylist[i]
            i += 1
            j -= 1
        if( (mylist[i] < mylist[v]) and (mylist[j] < mylist[v]) ):
            i += 1
        if( (mylist[i] >= mylist[v]) and (mylist[j] >= mylist[v]) ):
            j -= 1
    mylist[i], mylist[v] = mylist[v], mylist[i]
    return i

def QuickSort(mylist):
    print(mylist)
    p = Partition(mylist)
    left = mylist[:p-1]
    mid = mylist[p:p]
    right = mylist[p+1:]
    if len(left) > 0: 
        QuickSort(left)
    if len(right) > 0: 
        QuickSort(right)
    mylist = left + mid + right

# list = [10, 9, 6, 3, 2]
list = random.choices(range(1,100), k=10)

print("Default: ")
print(list)
print("Partition on:")
print(Partition(list))
print("Partitioned:")
print(list)
print("Quick sort:")
QuickSort(list)
print(list)

