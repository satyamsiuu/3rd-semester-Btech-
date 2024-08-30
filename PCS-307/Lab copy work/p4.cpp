#include<iostream>
using namespace std;
int main()
{
    int n,a[100],max_special_sum,current_element_special_sum,count,flag,start,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        flag=0;
        current_element_special_sum=a[i];
        count=2;
        start=i+1;
        while(flag!=1)
        {
            if((start+count)<=n)
            {
                for(j=start;j<start+count;j++)
                    current_element_special_sum+=a[j];
                start=j;
                count++;
            }
            else 
                flag=1;
        }
        if(i==0||(current_element_special_sum>max_special_sum))
            max_special_sum=current_element_special_sum;
    }
    cout<<"Output: "<<current_element_special_sum<<endl;

}