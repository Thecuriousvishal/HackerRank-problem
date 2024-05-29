vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int cntarr1=0;
    int cntarr2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i]){
            cntarr1++;
        }else if(a[i]<b[i]){
            cntarr2++;
        }
    }
    return{ cntarr1, cntarr2};
}