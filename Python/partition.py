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

# myList = [5, 4, 1, 2, 3]
myList = random.choices(range(1,100), k=10)
print(myList)
print(Partition(myList))
print(myList)
