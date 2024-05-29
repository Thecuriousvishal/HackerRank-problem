int simpleArraySum(vector<int> ar) {
    int sumOfArrEle=0;
    for(int i=0;i<ar.size();i++){
        sumOfArrEle+=ar[i];
    }
    return sumOfArrEle;
}