/*Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 4 3
10*/
//include<climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
           if(input1[i]==input2[j])
           {
               //cout<<input1[i]<<" ";
               //input2[j]=INT_MIN;
               break;
           }
        }
    }
}