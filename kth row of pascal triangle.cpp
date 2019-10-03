vector<int> Solution::getRow(int A) {
int a=A+1;
int c=1;
vector <int > ans;
for(int i=1;i<=a;i++){
    ans.push_back(c);
    c=c*(a-i)/i;
}
    return ans;
}