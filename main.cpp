#include <iostream>
#include <iomanip>                   // for setprecision()
#include <vector>
#include <algorithm>                 // for sort()
using namespace std;

int main() {
   int count;
   int sum;

   // Step 0: Input values
   cin >> count;
   vector<int> nums(count);
   for (int i = 0; i < count; ++i) {
      cin >> nums.at(i);
   }

   // Step 1: Find minimum and maximum values
   /* Type your code here. */
   int minValue = nums[0];
   int maxValue = nums[0];
   sum = nums[0];
   
   for (int i = 1; i < count; ++i) {
      sum += nums[i];
      if (nums[i] < minValue){
         minValue = nums[i];
      }
      if (nums[i] > maxValue){
         maxValue = nums[i];
      }
   }
      cout << "Minimum: " << minValue << endl;
   cout << "Maximum: " << maxValue << endl;

   // Step 2: Calculate mean  

   double mean = static_cast <double>(sum)/ count;
   cout << fixed << setprecision(1);
   cout << "Mean: " << mean << endl;


   // Step 3: Check if palindrome
   bool palindrome = true;
   for (int i = 0; i < count/2 ; i++) {
      if(nums[i] != nums[count - 1 - i]) {
         palindrome = false;
         break;
      }
   }
   cout << "Palindrome: " << (palindrome ? "true" : "false" ) << endl;
   

   // Sort vector elements in ascending order
   sort(nums.begin(), nums.end());
   
   // Step 4: Find and output median
   double median;
   if (count % 2 == 0) {
      median = (nums[count / 2 - 1] + nums[count /2]) / 2.0;
   }
   else {
      median = nums[count / 2];
   }
   cout << "Median: " << median << endl;
 
   // Step 5: Find and output mode
   int mode = nums[0];
   int currentNumber = 1;
   int maxNumber = 1;
   
   for (int i = 1; i < count; ++i) {
      if (nums[i] == nums[i - 1]) {
         currentNumber++;
      }
      else {
         currentNumber = 1;
      }
      if (currentNumber > maxNumber) {
         maxNumber = currentNumber;
         mode = nums[i];
     
      }
     
   }
   cout << "Mode: " << mode << endl;
   

   
   return 0;
}
