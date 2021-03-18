if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))

    sum_a = sum(a)
    a.sort(reverse=True) 
    ans = 0
    count = 0
    for c in a: 
        if ans <= sum_a:
            ans += c
            sum_a -= c
            count+=1
    print(count)

