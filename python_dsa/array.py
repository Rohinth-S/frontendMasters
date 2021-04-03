new_list = [1, 2, 3, 4]
target = 3
result = new_list[1]
for item in new_list:
    if item == target:
        print("Item Found at location",new_list.index(item))
new_list.append(5)
print(new_list)
