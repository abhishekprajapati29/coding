if __name__ == '__main__':
    t = int(input())
    while(t):
        s = input()
        if(len(s) <=10):
            print(s)
        else:
            count = str(len(s)-2)
            st = s[0] + count + s[len(s)-1]
            print(st)



        t-=1
