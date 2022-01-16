import random

def Partition(A):
    if (len(A)==1):
        return 0
    v = len(A)-1
    i = 0
    j = len(A)-2
    while (i <= j):
        if ( (A[i] <  A[v]) and (A[j] >= A[v]) ):
            i += 1
            j -= 1
        if ( (A[i] >= A[v]) and (A[j] <  A[v]) ):
            A[i], A[j] = A[j], A[i]
            i += 1
            j -= 1
        if ( (A[i] <  A[v]) and (A[j] <  A[v]) ):
            i += 1
        if ( (A[i] >= A[v]) and (A[j] >= A[v]) ):
            j -= 1
    A[i], A[v] = A[v], A[i]
    return i

def QuickSort(A):
    p = Partition(A)
    # NIE: A[:p-1]
    left = A[:p]
    # A[p] pozostaje niezmieniony
    right = A[p+1:]
    if len(left) > 0: 
        QuickSort(left)
    if len(right) > 0: 
        QuickSort(right)
    # NIE: A = left + mid + right
    A[:p] = left
    # A[p] pozostaje niezmieniony
    A[p+1:] = right

# list = [10, 9, 6, 3, 2]
list = random.choices(range(1,100), k=10)

print("Input:")
print(list)
print(sum(list))
print("Quick sort:")
QuickSort(list)
print(list)
print(sum(list))
