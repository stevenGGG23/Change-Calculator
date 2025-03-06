# Change-Calculator 

This program calculates the number of coins needed to make change for a given amount, using only quarters (25 cents), dimes (10 cents), and pennies (1 cent). The program reads change values (between 1 and 99 cents) from a file and computes how many coins of each denomination are required to make up that amount.

Description
The change.cpp program processes input change values from a data file (e.g., coins.dat). For each value, it computes how many quarters, dimes, and pennies are needed to make up that exact amount. The program uses the following denominations:

25 cents (quarters)
10 cents (dimes)
1 cent (pennies)
The program uses a helper function, ComputeCoin, to calculate the number of coins for each denomination. This function updates the remaining amount of change after each coin calculation.

How It Works
Input: The program reads each amount (between 1 and 99 cents) from a file named coins.dat.

Process: The program uses a while loop to process each value from the file. For each amount:

The number of quarters (25 cents) is calculated.
Then, the number of dimes (10 cents) is calculated with the remaining amount.
Finally, the number of pennies (1 cent) is calculated with the leftover amount.
Output: The program prints out the change that can be made with the fewest coins, displaying the number of each type of coin used.

Example Output
Given the following input values in coins.dat:
86
30
56
69
88
45
90
38
75
27
49
17
29
The program will output:

css
Copy
Edit
86 cents can be changed using:
3 quarter(s)
1 dime(s)
1 cent(s)

30 cents can be changed using:
1 quarter(s)
0 dime(s)
5 cent(s)

56 cents can be changed using:
2 quarter(s)
0 dime(s)
6 cent(s)

69 cents can be changed using:
2 quarter(s)
1 dime(s)
9 cent(s)

88 cents can be changed using:
3 quarter(s)
1 dime(s)
3 cent(s)

45 cents can be changed using:
1 quarter(s)
2 dime(s)
0 cent(s)

90 cents can be changed using:
3 quarter(s)
1 dime(s)
5 cent(s)

38 cents can be changed using:
1 quarter(s)
1 dime(s)
3 cent(s)

75 cents can be changed using:
3 quarter(s)
0 dime(s)
0 cent(s)

27 cents can be changed using:
1 quarter(s)
0 dime(s)
2 cent(s)

49 cents can be changed using:
1 quarter(s)
2 dime(s)
4 cent(s)

17 cents can be changed using:
0 quarter(s)
1 dime(s)
7 cent(s)

29 cents can be changed using:
1 quarter(s)
0 dime(s)
4 cent(s)
