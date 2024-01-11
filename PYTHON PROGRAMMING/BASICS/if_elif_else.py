'''
we use this to give some conditions to code - and what to do - when the conditions are satisfying

if  -  it is used to check the condition is true then it executes the block of code it has  -> it will decide where to go
elif - it has the conditions (if) if condition is false then it checks for condition given in it -> ladder => elif=else if
    works if if previous if condition is false
    then it checks for the condition - if the condition is true -> it executes the block of code
    else : it goes to the next elif or else
    we use this instead of using multiple if's - for the same need of a condition

    ex:
        x=2
        if(x==1):print(1)
        if(x==2):print(2)
        if(x==3):print(3)

        instead of multiple if's we can write it as :
        if(x==1):print(1)
        elif(x==2):print(2)
        elif(x==3):print(3)
         
        here only one if is going to be executed
        it only executes when the previous if / else if => is false

        it checks for multiple if conditions and then it goes to else if all the conditions are False
        

else - it executes previous if the condition in if is false

if -> it is basically a block - in python it is called as suite - based on indentation we can tell that whether the statement belongs to if or not
after if we need to give 4 spaces or 1 tab - to mention that the statement belongs to if

syntax:
if(condition):
    # code
elif(condition):
    #code
else:
    #code

/
if (condition): -> it executes when the condition is true
else:

    // executes when condition is true -> condition = True
    // block of code
    // runs if it is True
/

/ 
if (condition):
    // block of code
else:
    // block of code
    // executes when previous if fails ( it can elif also )

    // we can also use else -> without any previous if in python -> for a specified purpose

# if true execute the if block else go to the else block of code

/

# we can also use if inside a if - to check multiple conditions are satisfying or not








'''

