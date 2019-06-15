'''Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
For e.g. if a String has 'x' repeated 5 times, replace this "xxxxx" with "x5".
Note : Consecutive count of every character in input string is less than equal to 9.
Input Format :
Input string S
Output Format :
Compressed string 
Sample Input:
aaabbccdsa
Sample Output:
a3b2c2dsa
'''


def runLengthEncoding(st):
    s = ""
    n = len(st)
    c=0
    i=0
    count = 0
    while i < n:
        if(st[c] == st[i]):
            count = count+1
        else:
            s = s + st[c]
            if count > 1:
                s = s + str(count)
            c=i
            i = i-1
            count=0
        i = i+1
    i = n-1
    count = 1 
    while 1:
        if(st[i] == st[i-1]):
            count = count+1
        else:
            s = s+ st[n-1]
            if count >1:
                s = s + str(count)
            break
        i = i-1
    return s
# Driver function 
if __name__ == "__main__": 
    st=input()
    print(runLengthEncoding(st)) 
    