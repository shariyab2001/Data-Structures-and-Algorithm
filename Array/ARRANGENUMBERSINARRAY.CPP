/*You have been given an empty array(ARR) and its size N. 
The only input taken from the user will be N and you need not worry about the array.
Sample Input 1 :
1
6
Sample Output 1 :
1 3 5 6 4 2*/
void arrange(int *arr, int n)
{
    //Write your code here
    int left=0;
    int right=n-1;
    int counter=1;
    while(left<=right)
    {
    	if(counter%2==0)
    		{
        	  arr[right]=counter;
              right--;
              counter++;
    		}
    	else
    		{
              arr[left]=counter;
        	  left++;
        	  counter++;
    		}
    }
}