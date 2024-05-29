string timeConversion(string s) {
    // string am_pm = s.substr(8, 2); // Get AM or PM part
    // int hour = stoi(s.substr(0, 2)); // Get hour part as integer
    // string minutes_seconds = s.substr(2, 6); // Get the minutes and seconds part
    
    // if (am_pm == "AM") {
    //     if (hour == 12) {
    //         hour = 0; // Midnight case
    //     }
    // } else if (am_pm == "PM") {
    //     if (hour != 12) {
    //         hour += 12; // Convert PM hour to 24-hour format
    //     }
    // }
    
    // // Format hour to two digits
    // string hour_str = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    
    // return hour_str + minutes_seconds;
    
   int size = s.length();
    string period = s.substr(size - 2, 2); // Get 'AM' or 'PM'
    string hh = s.substr(0, 2); // Get the hour part
    int h = stoi(hh); // Convert hour part to integer

    if (period == "AM") {
        if (h == 12) {
            // Midnight case
            string newTime = "00" + s.substr(2, 6); // Change hour to "00"
            return newTime;
        } else {
            // Any other AM time remains the same but without the 'AM' part
            return s.substr(0, size - 2);
        }
    } else { // PM case
        if (h == 12) {
            // Noon case remains the same but without the 'PM' part
            return s.substr(0, size - 2);
        } else {
            // Any other PM time
            int inPM = h + 12;
            string newh = to_string(inPM);
            string newTime = newh + s.substr(2, 6); // Add minutes and seconds part
            return newTime;
        }
    }
}
