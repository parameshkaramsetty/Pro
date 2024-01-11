num=5
#internal memeory a store with value 5 and name of store is 5 - store will have address
#to get address
print(id(num))
m='n'
print(id(m))
a=10
b=a
print(id(a),id(b)) # when we have multiple values with same data they point to same address -> memory efficient
print(id(10)) # every object will have an id
k=10
print(id(k)) # it refers to 10 
# here we tag the variables to the value - so variables are also called as tags - having same data
a=9
print(id(9))
print(id(b)) # each tag is tagging to values
k=a
print(id(k)) # tag of k changes to 9
b=8
print(id(b))
# print(id(10))
# now 10 is left without any tag ->then it is collected by garabage collector later
# if there is reference - it will be for use

#constants - immutable variables - WE DOESNOT  HAVE CONSTANTS IN PYTHON

PI = 3.14
print(PI)
PI = 3.15
print(PI)

# TO GET TYPES OF VARIABLES IN PYTHON
print(type(PI)) # 3.15 <class 'float'>
# variables that we create have in-built type
# these in-built types are called data types

# we can assign multiple variables at a time
# a,b=2,4



'''
SWAP VARIABLES

we can swap variables
a=3
b=4

normally =>
    temp = a
    a = b
    b = temp

we can use formula :
    a = a+b # 7
    b = a-b # 7 - 4 = 3
    a = a-b # 7 - 3 = 4

we can use xor ( ^ ) -> since it does not use extra memory :
a = a ^ b
b = a ^ b
a = a ^ b

In python simple swapping :
    a,b=b,a 
    a => 4
    b => 3
    how it works:
        right side first
        b , a
        4   3 
        goes to stack  -> [4 , 3] 
        ROT_TWO() -> Swaps the two top-most stack elements
    
        it reverses -> value of b comes to a and value of a comes to b and those things will be assigned 
        uses two rotations

        a = 3
        b = 4
        
'''