int birthdayCakeCandles(vector<int> candles) {
    int tallestCandle = candles[0];
    int countCandles = 0;
    int n = candles.size();
    
    // Find the tallest candle height
    for (int i = 0; i < n; i++) {
        if (candles[i] > tallestCandle) {
            tallestCandle = candles[i];
        }
    }

    // Count how many candles have the tallest height
    for (int i = 0; i < n; i++) {
        if (candles[i] == tallestCandle) {
            countCandles++;
        }
    }

    return countCandles;
    
}     
//      int max_height =  *std::max_element(candles.begin(), candles.end()); 
//      int count = std::count(candles.begin(), candles.end(), max_height);
//      return count;
// }