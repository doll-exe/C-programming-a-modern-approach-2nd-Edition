'''First I decided to solve this problem in Python because I wanted to see how to approach it
(and check if I havent forgotten Python skills AND I DIDNT!! This problem is not hard but
I was just happy by how fast I solved it)

7.py
'''
x = int(input())
dollars = [20, 10, 5, 1]
dummy = 0
for i in range (len(dollars)):
    if x//dollars[i]!=0:
        dummy = x//dollars[i]
        x-=dummy*dollars[i]
        print(f"${dollars[i]} bills: {dummy}")
    else:
        print(f"${dollars[i]} bills: 0")
