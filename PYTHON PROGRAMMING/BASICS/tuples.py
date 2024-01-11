#tuple - immutable
# same as list -> but we cannot change the values as list
# here we use => ()
# list => []
# tuple => ()
tup = (1,2,3)
print(tup)
# tup[1]=9# we cannot change the values
print(tup)
# to access use as lists => tup[2]

# .count() => counts how many times the element is repeated in list/tuple
# we use tuples -> when we doesnot want too change the values
# accessing is faster in tuples -> as elements doesnot change

# tup[1]
# print(tup.count(2)) -> get the count of particular element
# print(tup.index(2)) -> to get index of particular element

# use tuples when we doesnot change values again and again -> faster iteration

#set = {} - unique valuee - no ordering 
s = {2,3,4,5,6,3,2,5}
print(s) # it uses  concept of hash  - improves performance
#no sequencing - no indexing
s.add(434)
print(s) # we can add change update and perform some operations on sets



