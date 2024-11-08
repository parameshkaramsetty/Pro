# variables that we create have in-built type
# these in-built types are called data types

# we can type of data by -> type(variable_name)


'''
data types in python :
-------------------
none -> variables not assigned with any value - like NULL
numeric -> int float complex bool 
           num=2.5
           type(num) -> float
           num=5
           type(num) -> int
           num=5+2j # complex numbers - a+bj (i replaces by j)
           type(num) -> complex
           
            # IT IS POSSIBLE TO USE TYPE CONVERSION
            a=5.6
            b=int(a) -> converts float to int

            k=2
            b=float(k) -> converts int to float

            b=5
            k=4
            c = complex(b,k) -> using complex function we can change values from two variables as parameters into a complex variable
            print(c) -> 5+4j


            bool -> computer knows only this

            True  -  1 - int(True)
            False -  0 - int(False)

            b<k -> False
            k<b -> True

            bool = b<k
            type(bool) -> bool

string   -> str
      str='navin'

      no character in python
      str ='n'
      print(type(str)) -> str

list
    l=[]
    type(l)
tuple
     t=()
     type(t)
dictionary
        d={'a':1}
        type(d)

        key and value pair

        key - these should be unique
        
        easy to fetch data in a faster way
        every value is assigned with a key

        d={1:'a',2:'b',3:'c',4:'d'}
        d
        d.keys() -> we can get all the key of d
        d.values() -> we can get all the values of d
        
        we can also use indexing like list instead we use keys in dictionary
        d[1] -> index replaces with keys
        

set
    s={}
    type(s)

range
 special type in python
 range(10) > range(0,10) -> we can get this but we need to change it to list so that we can get easily without any typing manually

 range(0,10)
 lb-> included
 ub-> excluded

 we can use step count

    
'''