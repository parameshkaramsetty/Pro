def countSetBits(n):
    return bin(n).count('1')
n=int(input())
print(countSetBits(n))