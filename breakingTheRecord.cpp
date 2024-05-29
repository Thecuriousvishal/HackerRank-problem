vector<int> breakingRecords(vector<int> scores) {
    int highestScore=scores[0];
    int lowestScores=scores[0];
    int highestBreak=0;
    int lowestBreak=0;
    for(int i=0;i<scores.size();i++){
        if(scores[i]>highestScore){
            highestScore=scores[i];
            highestBreak++;
        }
        if(scores[i]<lowestScores){
            lowestScores=scores[i];
            lowestBreak++;
        }     
    }
    return {highestBreak,lowestBreak};
}
