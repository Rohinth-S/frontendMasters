def recursiveBinary(list , target):

    # print(len(list))

    # print(list)
    if len(list) == 0:
        # print(len(list))
        return False
        
    else:
        midpoint = (len(list)) // 2

        if list[midpoint] == target:
            
            return True
        else:
            if list[midpoint] < target:
                
                return recursiveBinary(list[midpoint+1:],target)
            else :

                return recursiveBinary(list[:midpoint],target)
    return None 

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
target = int(input("Enter your target: > "))
result = recursiveBinary(numbers,target)

def verify(index):
    if index is not None:
        try:
            print("Target found at index",numbers.index(target))
        except ValueError:
            print(f"{target}  is not found in the list")
            print("Enter the values between 1 and 10")
    else:
        print("Target is not found")


verify(result)
# print(numbers.index(4))
# print(result)