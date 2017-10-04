# PathGameboard

##Problem: 
Starting at position (1,1) on an nxm board, count the number of ways to reach the position (n, m) only being able to move up or right.

- Nieve Solution:
This problem reminded me of a combinatorics problem I learned about in school. There exist a simple recursive formula that takes an exponential amount of time to compute because we are repeating calculations. 

- Optimal Solution:
If we use dynamic programming (storing previous calculated results) we can reduce the time from exponential to quadratic. This is done by creating a matrix and storing the number of paths to that cell. Using the previous paths to calculate the next one.
