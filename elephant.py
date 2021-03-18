if __name__ == '__main__':
    num = int(input())
    ans = 0
    if(num%5 != 0):
        ans += 1

    print((num//5)+ans)
