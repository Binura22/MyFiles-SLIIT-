A = []

for v in range (1,5):
    A.append(int(input("Enter number "+str(v)+" : ")))
print(A)
            
def BUBBLESORT(A):
    n = len(A)
    for i in range(1,n):
        for j in range(1,n-i+1):
            if A[j] < A[j-1]:
                A[j],A[j-1] = A[j-1],A[j]
                
BUBBLESORT(A)
print("Sorted Array : ",end='')
print(A)






