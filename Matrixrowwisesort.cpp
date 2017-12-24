#include<iostream>
using namespace std;


void getSort(int rows,int cols,int arr[][3])
{

    int temp;


         for(int j=0; j<rows; j++)
        {
            if(arr[0][j]>arr[0][j+1])
            {

                temp=arr[0][j+1];
                arr[0][j+1]=arr[0][j];
                arr[0][j]=temp;

            }
        }
}

int main()
{

    int arr[3][3]= {{9,8,7},{6,5,4},{3,2,1}};
    getSort(3,3,arr);

      for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
