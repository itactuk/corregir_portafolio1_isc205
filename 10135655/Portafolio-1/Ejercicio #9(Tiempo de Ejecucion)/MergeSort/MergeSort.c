//
// Created by diego on 8/10/2019.
//

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=j1)
        temp[k++]=a[i++];

    while(j<=j2)
        temp[k++]=a[j++];


    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}



int MergeSort(int x[],int n,int n2)
{
    int mid;

    if(n<n2)
    {
        mid=(n+n2)/2;
        MergeSort(x,n,mid);		//left recursion
        MergeSort(x,mid+1,n2);	//right recursion
        merge(x,n,mid,mid+1,n2);	//merging of two sorted sub-arrays
    }
}

