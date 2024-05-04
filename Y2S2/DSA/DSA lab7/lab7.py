A = []
i = 1;
while i <= 5:
    number = int(input("Enter number " + str(i) + " : "))
    if number > 10 and number < 20:
        A.append(number)
        i = i + 1
    else:
        print("Enter number between 10 and 20 !")

print("Array before sort : ",A)

def INSERTION_SORT(A):
    n = len(A)
    for j in range(1,n):
        key = A[j]
        i = j - 1
        while i >=0 and A[i] > key:
            A[i+1] = A[i]
            i = i - 1
        A[i+1] = key

INSERTION_SORT(A)
print("Array after sort : ",A)




























