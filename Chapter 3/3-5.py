'''Write a program that asks the user to enter the numbers from 1 to 16 (in any order) 
and then displays the numbers in a 4 by 4 arrangement, 
followed by the sums of the rows, columns, and diagonals:
-----------------------------------------------------------------------------------
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
-----------------------------------------------------------------------------------
If the row, column, and diagonal sums are all the same (as they are in this example), 
the numbers are said to form a magic square. The magic square shown here appears in a 
1514 engraving by artist and mathematician Albrecht Dürer. 
(Note that the middle numbers in the last row give the date of engraving.)'''

while True:
    print("Enter the numbers from 1 to 16 in any order:")
    s = input()
    numbers = [int(x) for x in s.split()] #converting into ints and splitting
    if len(numbers)!=16:
        print("Invalid amount of numbers")
        continue #go back to the top again
    break

row_sums = []
column_sums = []
diagonal_sums = []
sums = 0
row = []
rows = []

for i in range (len(numbers)):
    row.append(numbers[i])
    if (i+1)%4==0:
        rows.append(row)
        row = []

for i in range (len(rows)):
    sums += rows[i][i]
diagonal_sums.append(sums)
sums = 0
for i in range(len(rows)):
    sums += rows[i][len(rows) - 1 - i]
diagonal_sums.append(sums)
sums = 0
for i in range(len(rows)):
    sums = 0
    for j in range(len(rows)):
        sums+=rows[i][j]
    row_sums.append(sums)
sums = 0
for i in range (len(rows)):
    sums = 0
    for j in range (len(rows)):
        sums+=rows[j][i]
    column_sums.append(sums)
sums = 0

print("Row sums:", " ".join(str(x) for x in row_sums))

print("Column sums:", " ".join(str(x) for x in column_sums))

print("Diagonal sums:", " ".join(str(x) for x in diagonal_sums))

'''
first i wanted to print out rows, columns and diagonals to remember arrays

rows = []
row = []
columns = []
column = []
diagonals = []
diagonal = []

for i in range (len(numbers)):
    row.append(numbers[i])
    if (i+1)%4==0:
        rows.append(row)
        row = []
#print(rows)

for i in range (len(rows)):
    for j in range (len(rows)):
        column.append(rows[j][i])
    columns.append(column)
    column = []
#print (columns)

for i in range (len(rows)):
    diagonal.append(rows[i][i])
    diagonals.append(diagonal)
    diagonal = []
#print(diagonals)
'''
