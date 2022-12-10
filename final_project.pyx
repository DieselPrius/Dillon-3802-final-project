import cython
import time

print("Begin .pyx")

#python lists with input numbers from input files
l100 = []
l1000 = []
l10000 = []
l100000 = []
l200000 = []
l300000 = []


#get input numbers from .txt files and put them in the above lists
def getnums(l, length):
    f = open(str(length) + ".txt")
    
    for i in range(length):
        l.append(int(f.readline()))
    
    f.close()
    
    return 

def readfiles():
    getnums(l100, 100)
    getnums(l1000, 1000)
    getnums(l10000, 10000)
    getnums(l100000, 100000)
    getnums(l200000, 200000)
    getnums(l300000, 300000)

readfiles()


cdef extern from "bubblesort.c":
    void bubbleSort(int arr[], int n)

# from cpython cimport array
# import array
# cdef array.array a = array.array('i', l100000)
# cdef int[:] ca = a
# print(ca[0])
# print(ca[1])
# print(ca[2])

#bubblesort(ca, 100000)

#put python list values into a C integer array so
#   the values can be passed properly to bubbleSort() 
cdef int arr100000[100000]
for i in range(len(l100000)):
    arr100000[i] = l100000[i]

#print the last 10 elements of the C array to make sure everything
#   coppied from the python list (l100000) to the C array (arr100000) properly 
for i in range(100000-10, 100000):
    print(arr100000[i])

print("\n\nBegin sorting\n")
start = time.time()
bubbleSort(arr100000, 100000)
end = time.time()
print("C from Cython (n = 100000) - ", round(end - start, 2), " seconds")

print("First elements of sorted array:")
for i in range(20):
    print(arr100000[0])

print("end")