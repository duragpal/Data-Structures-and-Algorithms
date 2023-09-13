#include<iostream>
using namespace std;
class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
       int count=0;
       int temp=n;
        for(int i=1;i<=temp;i++){
        n=i;
        while(n>0){
            n=(n&(n-1));
            count++;
        }}
        return count;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout<< ob.countSetBits(n) <<endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends