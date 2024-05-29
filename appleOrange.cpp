void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int counta=0;
    int counto=0;
    // Count apples that fall on the house
    for(int i=0;i<apples.size();i++){
        if(a+apples[i]>=s && a+apples[i]<=t){
            counta++;
        }
    }
    // Count oranges that fall on the house
    for(int i=0;i<oranges.size();i++){
        if(b+oranges[i]>=s && b+oranges[i]<=t){
            counto++;
        }
    }
    cout<<counta<<endl<<counto<<endl;
}