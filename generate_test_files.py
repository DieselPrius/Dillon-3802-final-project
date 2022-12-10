import random

input_sizes = [100, 1000, 10000, 100000, 200000, 300000, 1000000, 10000000]
range_min = -100000
range_max = 100000

for n in input_sizes:
    f = open(str(n) + ".txt", "w")

    for i in range(n):
        f.write(str(random.randint(range_min, range_max)) + "\n")

    f.close()    
