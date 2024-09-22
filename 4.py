import numpy as np
for i in (3,4,5,100,10000,1000000):
    pi = i*np.sin(np.pi/i)
    print(i,pi)