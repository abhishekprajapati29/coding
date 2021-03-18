if __name__ == '__main__':
    x = list(map(int, input().split('+')))
    x.sort()
    x = list(map(str, x))
    
    print('+'.join(x))
