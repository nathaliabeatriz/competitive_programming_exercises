while True:
    try :
        entrada = input()
        a, b = (int(n) for n in entrada.split(' '))
        print(a*b*2)

    except EOFError :
        break