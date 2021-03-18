if __name__ == '__main__':
    n,k = map(int, input().split())
    a = list(map(int, input().split()))

    count = 0
    for i in range(len(a)):
        if a[i] >= a[k-1] and a[i] >= 1:
            count+= 1

    print(count)
