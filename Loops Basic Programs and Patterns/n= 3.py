n= 3
for i in range(0,n):
    for j in range(0,n):
        if ( i>=j):
            print(2*i + 2*j +1, end=" ")
        else: 
            print("_", end=" ")
    print("\n")