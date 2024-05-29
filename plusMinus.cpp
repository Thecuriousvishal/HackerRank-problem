void plusMinus(vector<int> arr) {
    int cntPos=0,cntNeg=0,cntZero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            cntPos++;
        }
        else if(arr[i]<0){
            cntNeg++;
        }else{
            cntZero++;
        }
    }
    double positiveRatio=double(cntPos)/arr.size();
    cout<<fixed<<setprecision(6)<<positiveRatio<<endl;
    double negativeRatio=double(cntNeg)/arr.size();
    cout<<fixed<<setprecision(6)<<negativeRatio<<endl;
    double zeroRatio=double(cntZero)/arr.size();
    cout<<fixed<<setprecision(6)<<zeroRatio<<endl;
}

