from collections import deque

if __name__ == '__main__':
    sl = input()
    t = int(input())
    while(t):
        l,r = map(int, input().split())
        
        stack = []
        count=0

        for c in sl[l-1:r]:
            if(c == ')'):
                if ((len(stack)!=0) and ( stack[-1] == '(')): 
                    stack.pop()
                    count+=2
                
            else:
                stack.append(c)

        print(count)



        t-=1
