#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

// Helper function to convert "mm:ss" to total seconds
int time_to_sec(const string& time_str) {
    int minutes = stoi(time_str.substr(0, 2));
    int seconds = stoi(time_str.substr(3, 2));
    return minutes * 60 + seconds;
}

// Helper function to convert total seconds to "mm:ss" format
string sec_to_time(int sec) {
    int minutes = sec / 60;
    int seconds = sec % 60;
    // Using stringstream for formatting with leading zeros
    stringstream ss;
    ss << setw(2) << setfill('0') << minutes << ":"
       << setw(2) << setfill('0') << seconds;
    return ss.str();
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    // Convert all time strings to seconds
    int video_len_sec = time_to_sec(video_len);
    int pos_sec = time_to_sec(pos);
    int op_start_sec = time_to_sec(op_start);
    int op_end_sec = time_to_sec(op_end);
    
    // Function to perform opening skip
    auto opening_skip = [&](int current_pos) -> int {
        if (op_start_sec <= current_pos && current_pos <= op_end_sec) {
            return op_end_sec;
        }
        return current_pos;
    };
    
    // Initial opening skip if necessary
    pos_sec = opening_skip(pos_sec);
    
    // Process each command
    for(const string& cmd : commands) {
        if(cmd == "prev") {
            pos_sec = max(pos_sec - 10, 0);
        }
        else if(cmd == "next") {
            pos_sec = min(pos_sec + 10, video_len_sec);
        }
        // After moving, check for opening skip
        pos_sec = opening_skip(pos_sec);
    }
    
    // Convert final position back to "mm:ss"
    return sec_to_time(pos_sec);
}