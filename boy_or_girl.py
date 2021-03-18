if __name__ == '__main__':
    s = input()

    l = []

    for i in range(len(s)):
        if s[i] not in l:
            l.append(s[i])

    x = 'IGNORE HIM!' if(len(l)&1) else 'CHAT WITH HER!'
    print(x)
