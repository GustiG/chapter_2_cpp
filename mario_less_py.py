h = int(input("Height: "))

for i in range(0, h):
    for j in range(0, h):
        if i+j < h-1:
            print(" ", end="")
        else:
            print("#", end="")
    print("")   #helps with printing a new row (using \n prints an extra row for some reason)
