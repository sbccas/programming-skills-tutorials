# WAP TO SHOW DEMO OF NUMPY IN PYTHON
import numpy as np
import scipy
from scipy import stats
print(np.__version__)
a1 = np.array([2,22,17,22,4])
print(a1)
print(type(a1))
a2 = np.array([[1,2,3],[4,5,6]])
print(a2)
# MEAN
print("MEAN : =", np.mean(a1))
# MEDIAN
print("MEDIAN : =", np.median(a1))
# MODE
print("MODE : =",scipy.stats.mode(a1))
#STANDARD DEVIATION
print("S DEVIATION: = ",np.std(a1))
#VARIANCE
print("VARIANCE: = ",np.var(a1))

