def f2(array):
    from random import randint
    size = len(array)
    if size < 5:
        return 0
    group = list()
    b = list()
    counter = 0
    for c in array:
        group.append(c)
        counter += 1
        if counter == 5:  # Five elements were counted and inserted into group
            randomPos = randint(0, 4)
            b.append(group[randomPos])
            group.clear()
            counter = 0
    i = f2(b)
    


numbers = list(range(1, 51))
f2(numbers)
print(numbers)