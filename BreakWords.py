'''
You are given a sentence contained in given string S. Write a function which will replace all the words within the sentence whose length is even and greater than equal to 4, with a space between the two equal halves of the word.
Space complexity should be O(1).
Input Format :
String S
Output Format :
Updated string
Constraints :
1 <= Length of S <= 10000
Sample Input :
Helloo world good morniing
Sample Output :
Hel loo world go od morn iing
'''

str = input()
arr = str.split(" ")
n = len(arr)
for i in range(0,n):
    if len(arr[i]) %2 ==0 and len(arr[i]) >= 4:
        stt = arr[i][:len(arr[i])//2] + " " + arr[i][len(arr[i])//2:]
        print(stt,end=" ")
    else:
        print(arr[i],end=" ")
