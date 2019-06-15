## Read input as specified in the question.
## Print output as specified in the question.
'''Given two arrays (both of size n), one containing arrival time of trains and other containing the corresponding trains departure time (in the form of an integer) respectively. Return the minimum number of platform required, such that no train waits.
Arrival and departure time of a train cant be same.
Input Format :
Line 1: Integer n, number of elements in arrival and departure array
Line 2: Elements of Arrival Array (separated by spaces).
Line 3: Elements of Departure Array (separated by spaces).
Output Format:
Minimum Number of Platform Needed
Constraints :
1 <= n <= 100
Sample Input 1 :
6
900 940 950 1100 1500 1800
910 1200 1120 1130 1900 2000
Sample Output 1 :
3
Sample Input 2 :
4
1100 1101 1103 1105
1110 1102 1104 1106
Sample Output 2 :
2
'''


def findPlatform(arr,dep,n): 
  
    arr.sort() 
    dep.sort() 
   

    plat_needed = 1
    result = 1
    i = 1
    j = 0
    while (i < n and j < n): 
        if (arr[i] < dep[j]): 
          
            plat_needed+=1
            i+=1

            if (plat_needed > result):  
                result = plat_needed 

        else: 
          
            plat_needed-=1
            j+=1
          
    return result 

n = int(input())
arr = [int(x) for x in input().split()]

dep =[int(x) for x in input().split()]

print(findPlatform(arr, dep, n))