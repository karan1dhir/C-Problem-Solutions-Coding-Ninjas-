#include<iostream>
using namespace std;

void MergingOf2Arrays(int arr1[],int arr2[],int size1,int size2,int ans[])
{

    int i=0,j=0,k=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]>=arr2[j])
        {
            ans[k]=arr2[j];
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])
        {
            ans[k]=arr1[i];
            i++;
            k++;
        }
    }

    if(i<size1)
    {

        while(i<size1)
        {
            ans[k]=arr1[i];
            i++;
            k++;
        }
    }
    else{

        while(j<size2)
        {
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }
}
void MergeSortOfArrays(int input[],int size)
{


    int h1[1000],h2[1000];

    if(size==1)
        return;

    for(int i=0; i<size/2; i++)
        h1[i]=input[i];

    for(int k=size/2,j=0; k<size; k++,j++)
        h2[j]=input[k];

    MergeSortOfArrays(h1,size/2);
    MergeSortOfArrays(h2,size-size/2);
    MergingOf2Arrays(h1,h2,size/2,size-size/2,input);

}

int main()
{
    int input[1000],size;

    cin>>size;
    int flag=0;

    for(int i=0; i<size; i++)
    {
         cin>>input[i];
    }
   MergeSortOfArrays(input,size);
   for(int i=0;i<size;i++)
    cout<<input[i];

   for(int i=0;i<size-1;i++){

        if((input[i+1]-input[i])!=1){
        flag=1;
        break;
        }
    }
  if(flag==1)
  cout<<"NO";
  else
  cout<<"YES";
}

