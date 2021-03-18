if __name__ == '__main__':
    t = int(input())

    while(t):
        r, c = map(int, input().split())
        mat = []
        for i in range(r):
            mat.append(list(map(int, input().split())))
        
        x = 0
        for i in range(r):
            f = x
            for j in range(c):
                if(mat[i][j]%2==f):
                    mat[i][j]+=1
                f= 1 if f == 0 else 0

            x = 1 if x == 0 else 0
                
        for i in range(r):
            for j in range(c):
                print(mat[i][j], end=" ")
            print()

        t-= 1
