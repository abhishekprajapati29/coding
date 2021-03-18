if __name__ == '__main__':
    s1 = input().lower()
    s2 = input().lower()
    
    for i in range(len(s1)):
        if((ord(s1[i]) == ord(s2[i])) and (i == (len(s1)-1))):
            print(0)
            break
        elif (ord(s1[i]) < ord(s2[i]) ):
            print(-1)
            break
        elif ( ord(s1[i]) > ord(s2[i])  ):
            print(1)
            break
            
