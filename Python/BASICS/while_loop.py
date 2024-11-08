#loop -> when we want to repeat block of code for multiple times until a condition is satisfied

# 2 types of loop
# to run loop - we need a counter - because we need to run the loop for n times
# so we need a counter for that - and based on that counter we make a condition - when to stop the loop 

# while(condition):
#       block of code
# : -> specifies whatever comes ahead it is the path of the block of code under while loop

# ex:
'''

# we need to take a counter -> initialize it
i=0

# while loop -> to run multiple times - and a condition to check whether how many times we are running the loop

while(i<5):
    # what the code comes ahead is path of while block
    print("hi") -> 1
    i+=1        -> 2

    1,2 -> belongs to the same suite -> since we use indentation here

    # if the condition got false -> the while loop stops executing

    # we need to follow
        initialize
        condition -> to check value
        increment/decrement -> based on choice
    # while loop will execute until the condition is True
    # if the condition is false => then it stops the executing the block of code ahead of it

    # we can also use nested while loops
    # inorder to control the while loop we need to use step count -> ++ / -- => based on the condition mentioned in the while loop

    when using outer loop and inner loops
    WHEN THE POINTER GOES TO OUTER LOOP
    UNTIL THE INNER LOOP EXECUTES COMPLETES IN EACH ITERATION OF OUTER LOOP - OUTER LOOP STAYS THERE
    WHEN THE INNER LOOP EXECUTES COMPLETELY => OUTER LOOP GOES TO NEXT ITERATION AND THEN NEXT ...
    FOR EACH ITERATION IN OUTER LOOP -> INNER LOOP EXECUTES COMPLETELY
    THEN THE  OUTER LOOP COMPLETES ITS EXECUTION

    IT'S LIKE 
    IN A WEEK THERE ARE 7 DAYS
    EACH DAY HAS 24 HRS
    A DAY IS SAID TO BE COMPLETED WHEN 24 HRS ARE COMPLETED THEN IT GOES TO THE NEXT DAY

    FROM THE ABOVE:
    DAY IS OUTER LOOP -> 1 DAY => HR'S
    HRS : IS INNER LOOP - IT EXECUTES LIKE  => 1HR , 2HR , 3HR ... 24 HR
    NEXT DAY => SINCE DAY IS COMPLETED (24 HRS)

    EVERY TIME DAY CHANGES  IT WILL RESTART NO. OF HR'S
    1   ->  1  2  3  4  5  ... 24
    2   ->  1  2  3  4  5  ... 24
    3   ->  1  2  3  4  5  ... 24
    i   ->  j           
    every time outer loop executes inner loop runs completely
    inner loop must be initialized again in while loop -> to begin again from the starting 
                                                          like how a day begin with 0th hr.
    after the inner loop gets executed outer loop get executed until the condition is True




    WHEN INNER LOOP COMPLETES ITS EXECUTION OUTER LOOP GOES TO NEXT ITERATION UNTIL THE CONDITION IS SATISFIED
     

# it prints hi for 5 times

# block of code in python is called as suite


'''
'''
# i=1
# j=1

# while(i<=5):
#     print(i,' ',"->",' ',end="")
#     j=1 #every time we start inner loop we need to initialize it -> since once it is executed for the 1st outer loop it satisfies the condition for the next iterations of the outer loop so we need to initialize it again to make inner loop work normally
#     while(j<=5):
#         print(j," ",end="")
#         j+=1
#     print()
#     i+=1

# 1   ->  1  2  3  4  5  
# 2   ->  1  2  3  4  5
# 3   ->  1  2  3  4  5
# 4   ->  1  2  3  4  5
# 5   ->  1  2  3  4  5

for every outer loop inner loop executes we need to initialize the inner loop again since it needs to start from the beginning 

'''
# by default print() -> prints in new line => so we can use (end="") to join with the print statements that are going to execute again and again
# we can also use seperators - to seperate with a character - at the end of the print statement
# print('a','b','c',sep='->') #a->b->c
# we use seperator when printing variables or dates ...




    
