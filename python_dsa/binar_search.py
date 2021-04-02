def binary_search(list, target):
    first = 0
    last = len(list) - 1
    
    while first <= last:
        midpoint = (first+last) // 2

        if list[midpoint] == target:
            return midpoint
        elif list[midpoint] < target:
            first = midpoint + 1
        else:
            last = midpoint -1
    return None


     
numbers = [1,2,3,4,5,6,7,8,9]
# result = binary_search(numbers,12)
print("Enter Your target value")
target = int(input(";>"))
result = binary_search(numbers,target)

def verify(index):
    if result is not None:
        print("Target found at index",index)
    else:
        print("Target not found in the list")
verify(result)
# print(result)
