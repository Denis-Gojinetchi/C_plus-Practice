// leetcode problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <algorithm>    
#include <vector>
#include <iostream>


using namespace std;


//1480. Running Sum of 1d Array
 vector<int> runningSum(vector<int>& nums) {
    int summ = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        summ = summ + nums[i];
        nums[i] = summ;
    }
    return nums;
}
 //1920. Build Array from Permutation
 vector<int> buildArray(vector<int>& nums) {
     vector <int> ans(nums.size());

     for (int i = 0; i < nums.size(); i++)
     {
         ans[i] = nums[nums[i]];
     }
     return ans;
 }
 //1929. Concatenation of Array
 vector<int> getConcatenation(vector<int>& nums) {
     vector<int> concNums;
     concNums = nums;
     for (int i = 0; i < nums.size(); i++)
     {
         concNums.push_back(nums[i]);
     }
     return concNums;
 }
 //961. N-Repeated Element in Size 2N Array
 int repeatedNTimes(vector<int>& nums) {
     for (int i = 0; i < nums.size(); i++)
     {
         for (int j = i + 1; j < nums.size(); j++)
         {
             if (nums[i] == nums[j])
                 return nums[i];
         }
     }
     return 0;
 }

 //905. Sort Array By Parity
 vector<int> sortArrayByParity(vector<int>& nums) {
     vector<int> sorted;
     vector<int> odd;
     for (int i = 0; i < nums.size(); i++)
     {
         if (nums[i] % 2 == 0)
             sorted.push_back(nums[i]);
         else
             odd.push_back(nums[i]);
     }
     for (int i = 0; i < odd.size(); i++)
     {
         sorted.push_back(odd[i]);
     }
     return sorted;
 }
 //977. Squares of a Sorted Array
 vector<int> sortedSquares(vector<int>& nums) {

     int sq = 0;
     for (int i = 0; i < nums.size(); i++)
     {
         sq = nums[i];
         nums[i] = sq * sq;
     }
     sort(nums.begin(), nums.end());
     return nums;
 }

 void fizzBuzz(int n)
 {
     for (int i = 0; i < n; i++)
     {
         if (i % 3 == 0)
             cout << "Fizz" << endl;
         if (i % 5 == 0)
         {
             cout << "Buzz" << endl;
         }
         else
             cout << n << endl;
     }
 }

 string rotateString(string s, int k)
 {
     string rotatedStr = s;
     string last = "";
     int count = 0;
     while (count < k)
     {
         last = rotatedStr[0];
         for (int i = 0; i < rotatedStr.size() - 1; i++)
         {
             rotatedStr[i] = s[i + 1];
         }
         //rotatedStr[rotatedStr.size() - 1] = last;
         count++;
     }
     return rotatedStr;
 }
 

 int palindromIndex(string s) {
     string r = s;
     reverse(r.begin(), r.end());
     
     if (r == s)
         return -1;
     else
     for (int i = 0; i < s.size(); i++)
     {
         if (s[i] != r[i])
         {
             if (s[i + 1] == r[i])
             {
                 cout << i;
                 return i;
             }
             if (s[i] == r[i + 1])
             {
                 cout << s.length() - i - 1; 
                 return s.length() - i - 1;
             }

         }
     }
     return -1;
 }


 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     vector<bool> res;
     int max = sizeof(candies) / sizeof(candies[0]);
     for (int i = 0; i < candies.size(); i++)
     {
         if (candies[i] + extraCandies >= max)
             res.push_back(true);
         else
             res.push_back(false);
     }
     return res;
 }



 int birthday(vector<int> s, int d, int m) {
     vector <int> ret = {};
     int count = 0;
     int mCount = 1;
     int dCount = 0;
     int j = 1;
     for (int i = 0; i < s.size(); i++)
     {

         while (j < s.size()) {
             dCount = s[i];
             mCount = 1;
             dCount += s[j];
             mCount++;
             if (mCount > m || dCount > d) {
                 dCount -= s[j];
                 mCount--;
             }
             if (dCount == d && mCount == m) {
                 count++;
             
         }
             j++;
         }
     }
     cout << count;
     return count;
 }

int main()
{
    vector<int> arr = { 1,2,1,3,2 };
    string s = "middle-Outz";
    string g = { "aaba" };
    //runningSum(arr);

    //int x = 16 % 4;
    //cout << x;
    //palindromIndex(g);
    birthday(arr, 3, 2);
    std::cout << "\nHello World!\n";
}


