/*Sample Input 1:
1
9
0 7 2 5 4 7 1 3 6
Sample Output 1:
7*/
int duplicateNumber(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                return arr[i];
                break;
            }
        }
        
    }
}