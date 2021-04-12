def mergeSort(list):
    """
    Sorts a list in ascending order 
    Returns a new sorted list

    Divide : Find the midpoint of the list and divide into two sublists
    Conquer : Recursively sort the sublists created in previous step
    Combine the sorted sublists created in previous step
    Takes O(n k log n) time 
    k increases when we use the list slicing in split_list function
    """
    if len(list) <= 1:
        return list

    left_half , right_half = split_list(list)
    left = mergeSort(left_half)
    right  = mergeSort(right_half)

    return merge(left, right)

def split_list(list):
    """ 
    Divide the unsorted list into sublists
    Returns two sublists - left and right
    """
    midpoint = len(list) // 2
    # left = list[:midpoint]
    # right = list[midpoint:]
    left = []
    right = []

    for i in range(midpoint):
        left.append(list[i])
    for j in range(midpoint, len(list)):
        right.append(list[j])
    return left, right
def merge(left, right):
    """ Merge two lists (arrays) sorting them in the process 
    Returns the new merged lists
    Runs in overall O(n) linear time

    """ 
    l = []
    i = 0
    j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            l.append(left[i])
            i += 1
        else:
            l.append(right[j])
            j += 1

    
    while i < len(left):
        l.append(left[i])
        i += 1

    while j < len(right):
        l.append(right[j])
        j += 1
    return l

alist = [54, 26, 28, 67, 66, 98, 12]
l = mergeSort(alist)

def verifySort(list):
    n = len(list)
    if n == 0 or n == 1:
        return True
    return f"{list[0] < list[1] and verifySort(list[1:])}"
print(verifySort(alist))
print(l)
print(verifySort(l))
