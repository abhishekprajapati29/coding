if __name__ == '__main__':
    num, k = list(map(int, input().split()))

    while(k):
        if(num%10 != 0):
            num -= 1
        else:
            num //= 10

        
        k-=1
    print(num)
