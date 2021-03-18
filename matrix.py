if __name__ == '__main__':
    mat = []
    for i in range(5):
        mat.append(list(map(int, input().split())))
    
    r = c = 0
    for i in range(5):
        for j in range(5):
            if mat[i][j] == 1:
                r = i
                c = j

    print(abs(r-2) + abs(c-2))

        

