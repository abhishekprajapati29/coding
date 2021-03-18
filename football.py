if __name__ == '__main__':
    s = input()
    count = 1
    f=0
    for i in range(1,len(s)):
        if s[i] == s[i-1]:
            count+=1;
            if(count >= 7):
                print('YES')
                f=1
                break
        else:
            count = 1
    if f == 0:
        print('NO')

