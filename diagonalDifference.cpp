 int diagonalDifference(vector<vector<int>> arr) {
    int sum1=0;
    int sum2=0;
    for(int i=0;i<arr.size();i++){
        sum1+=arr[i][i];
    }
    for(int j=0;j<arr.size();j++){
        sum2+=arr[j][arr.size()-j-1];
    }
    return abs(sum1-sum2);
}