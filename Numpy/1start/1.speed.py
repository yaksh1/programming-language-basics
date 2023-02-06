import numpy as np
import time


size = 100000000

l1 = range(size)
l2 = range(size)

a1 = np.arange(size)
a2 = np.arange(size)

# python time
start = time.time()
result = [(x+y) for x,y in zip(l1,l2)]
print("python time ",(time.time()-start)*1000)

# numpy time
start = time.time()
result= a1+a2
print('numpy took ',(time.time()-start)*1000)

print(a1)