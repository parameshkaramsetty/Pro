list1 = [1,2.4,'abcd'] # stores  multiple types of data
#mutable
# nums = [1,2,3,4] ->  we can store multiple types of data
# we can access values 
# nums[0] = 1
# nums[-1] = 4
print(list)
print(list[0]) # 1
# we can combine lists
list2 = ['efgh',4,5,3]
list3 = [list1,list2]
print(list3) # [[1, 2.4, 'abcd'], ['efgh', 4, 5, 3]]
list = [1,2,3,4]
list.append(5)  # add elements at the end of the array
print(list)
list.insert(0,0) # add elements at specific index
print(list)
# we can remove specific elements by specifiying the element
list.remove(5) #  [1, 2, 3, 4] -> 5 is removed from the array
# we can remove element at index by using pop
list.pop(0) # [1, 2, 3, 4,5] -> element at 0th index is removed
print(list) # [1, 2, 3, 4]

#list.pop(index_to_delete)
#list.pop() -> removes last element from the list

# we can use slicing in lists also as in strings


del list[2:]
print(list)

# we can also extend lists by inserting multiple values or lists
# list.extend(list1)
# list1.extend([29,32,242,121])
# we can get min and max and sum of lists
min(list) #-> gives the minimum value
max(list) #-> gives the maximum value
sum(list) #-> gives the sum of the elements in lists
list.sort() #-> sorts the lists





