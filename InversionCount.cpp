#include<iostream>
using namespace std;


int merge(int arr1[],int arr2[],int size1,int size2,int input[])
{
    int inversion_count=0;
    int i=0,j=0,k=0;
    int mid=(size1+size2)/2;
    while(i<size1 && j<size2)
    {

        if(arr1[i]>=arr2[j])
        {
            input[k]=arr2[j];
            j++;
            k++;
            inversion_count=inversion_count+(mid-i);
        }
        else if(arr1[i]<arr2[j])
        {
            input[k]=arr1[i];
            k++;
            i++;
        }
    }
    if(i<size1)
    {
        while(i<size1)
        {
            input[k]=arr1[i];
            k++;
            i++;
        }
    }
    else
    {
        while(j<size2)
        {
            input[k]=arr2[j];
            k++;
            j++;
        }
    }
    return inversion_count;
}
int mergeSort(int input[],int n)
{

    int h1[1000],h2[1000];
    if(n==1)
        return 0;

    for(int i=0; i<n/2; i++)
        h1[i]=input[i];

    for(int j=n/2,k=0; j<n; j++,k++)
        h2[k]=input[j];

    int leftinv=mergeSort(h1,n/2);
    int rightinv=mergeSort(h2,n-n/2);
    int finalinv=merge(h1,h2,n/2,n-n/2,input);
    return leftinv+rightinv+finalinv;
}
int main()
{

    int input[1000],n;
    cout<<"enter the array size:";
    cin>>n;
    cout<<"enter the array elements:";

    for(int i=0; i<n; i++)
        cin>>input[i];

    int inv=mergeSort(input,n);

     for(int i=0; i<n; i++)
        cout<<input[i]<<" "<<endl;

    cout<<inv;
}
