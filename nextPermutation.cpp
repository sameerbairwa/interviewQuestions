vector<int> Solution::nextPermutation(vector<int> &A) {
    int k=-1;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]<A[i+1]){
            k=i;
        }
    }
    if(k==-1){
        reverse(A.begin(),A.end());
        return A;
    }
    int l;
    for(int i=k+1;i<A.size();i++){
        if(A[i]>A[k]){
            l=i;
        }
    }
    
    int temp=A[k];
    A[k]=A[l];
    A[l]=temp;
    
    reverse(A.begin()+k+1,A.end());
    return A;
}