#include<iostream>

using namespace std;
void print(int a[],int end1)
{
    for(int i=0;i<=end1;i++)
    {
        cout<<a[i]<<" ";
    }
}
//hiiiiiiiiiiiiiiiiii
void permutation(int a[],int start,int end1){
    static int activation_record=1;
    cout<<"************Calling permutation function-->permutation(arr[";
   print(a,end1);
    cout<<"]"<<",("<<start<<","<<end1<<")): Activation record "<<activation_record<<".\n";
    cout<<"Variable            \tvalue  \taddress\n";
    cout<<"start                   \t"<<start<<"   \t"<<&start<<endl;
    cout<<"end1                   \t"<<end1<<"   \t"<<&end1<<endl;
    cout<<"activation_record\t"<<activation_record<<"   \t"<<&activation_record<<endl;
    if(start==end1){
        cout<<"***********Returning from permutation function--->permutation(arr[";
        print(a,end1);
        cout<<"]"<<",("<<start<<","<<end1<<")): Activation record "<<activation_record<<".\n";
        cout<<"Variable            \tvalue  \taddress\n";
        cout<<" start                  \t"<<start<<"   \t"<<&start<<endl;
        cout<<" end1                  \t"<<end1<<"   \t"<<&end1<<endl;
        cout<<"activation_record\t"<<activation_record <<"   \t"<<&activation_record<<endl;
        cout<<"the permutation of the array is ";print(a,end1);cout<<endl;

        return;
    }
    for(int i=start;i<=end1;i++){
        swap(a[start],a[i]);
        activation_record++;
        permutation(a,start+1,end1);
        activation_record--;
        swap(a[start],a[i]);
    }
    cout<<"*********Returning from the permutation function---->permutation(arr[";
    print(a,end1);
    cout<<"]"<<",("<<start<<","<<end1<<"))--> activation record "<<activation_record<<endl;
    cout<<"Variable            \tvalue  \taddress\n";
    cout<<" start                  \t"<<start<<"   \t"<<&start<<endl;
    cout<<"  end1                   \t"<<end1<<"   \t"<<&end1<<endl;
    cout<<"activation_record\t"<<activation_record<<"   \t"<<&activation_record<<endl;
    return;
}
int main()
{
    static int activation_record;
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int a[n];
    int i=0;
    while(i<n)
    {
      a[i]=i+1;
      i++;
    }

   cout<<"***** trace of getting maximum  elements of the array "<<endl;
   cout<<"*********called Main function, main(): Activation Record"<<activation_record<<endl;
   cout<<"Variable            \tAddress\t\tValue\n";
   cout<<"n                   \t"<<&n<<"\t"<<n<<endl;
   cout<<"activation_record\t"<<&activation_record<<"\t"<<activation_record<<endl;
    permutation(a,0,n-1);
    cout<<"***************Returning from main function: Activation record*************** "<<activation_record<<".\n";
    cout<<"Variable            \tvalue  \taddress"<<endl;
    cout<<"n                   \t"<<n<<"   \t"<<&n<<endl;
    cout<<"activation_record\t"<<activation_record<<"   \t"<<&activation_record<<endl;
    return 0;

}
