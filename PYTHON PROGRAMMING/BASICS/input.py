#we can take input in python using input()
#by default the data type of input() -> string format
# no char in python
# '' = "" =''''''
#so we need to convert the input into the required data type
'''
for ex:
to take 5 as input and assign it to variable x
x = input() #string as input
x = int(x)  # converting string input into int format
we can also take char as input
by
x=input()[0]#here if we give more than one character only one character from the string is assigned to the variable x 

# we can use eval() -> to calculate a mathematical expression

# we can also use command line arguments in python

# argv

take it as a list 
when compiling the code from cmd
we need to go to the path where the python file is and then we need to compile it
>python  file_name   argv[1] ...
          argv[0]   if any command line arguments

and we need to import sys module inorder to work with command line arguments and we need to use this module to take input from cmd
x = sys.argv[1] ...

and the same goes on -> it takes input as string and then we need to convert it into the required format

x = int(sys.argv[1])
print(type(x)) -> int



'''