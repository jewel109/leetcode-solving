class Solution {
public:
   bool isPalindrome(string s) {
  int left = 0, right = s.length() - 1;
  while (left < right) {
    if (!isalnum(s[left])) {
      cout << "s[left] " << s[left] << " -> " << left << endl;
      left++;
    } else if (!isalnum(s[right])) {
      cout << "s[right] " << s[right] << " -> " << right << endl;
      right--;
    } else if (tolower(s[left]) != tolower(s[right])) {
      cout << "in else if s[left] != s[right]" << endl;
      return false;
    } else {
      cout << "in else left++ and right--" << endl;
      left++;
      right--;
    }
  }
  return true;
} 
};