import random

def swap(t, i, j):
    t[i], t[j] = t[j], t[i]

tablica = [1, 2, 3, 4, 5, 6, 7, 8]

print(tablica)
print(tablica[:4])
print(tablica[4:])
print(tablica[:-3])
print(tablica[-3:])
swap(tablica, 0, 1)
print(tablica)
