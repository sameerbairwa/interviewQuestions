// input1 - first input string
// input2 - second input string
/* 
Given two strings, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.
Input format :
Line 1 : String 1
Line 2 : String 2
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false
*/
bool isPermutation(char input1[], char input2[]) {
    int NO_OF_CHARS = 256;
    int count[NO_OF_CHARS] = {0}; 
    int i; 

    for (i = 0; input1[i] && input2[i];  i++) 
    { 
        count[input1[i]]++; 
        count[input2[i]]--; 
    } 
  

    if (input1[i] || input2[i]) 
      return false; 
  
    // See if there is any non-zero value in  
    // count array 
    for (i = 0; i < NO_OF_CHARS; i++) 
        if (count[i]) 
            return false; 
     return true; 

}
