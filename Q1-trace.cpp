
#include<iostream>
using namespace std;
int find_max_element(int a[],int n)
{
  int result;
   static int activation_record_id=1;
    cout<<"///***Calling find_max_element function(a,"<<n<<"):Activation record "<<activation_record_id<<endl;
    cout<<"Variable            \tvalue  \taddress\n";
    cout<<"n                   \t"<<n<<"\t"<<"   "<<&n<<endl;
    cout<<"activation_record_id\t"<<activation_record_id<<"    \t"<<&activation_record_id<<endl;
  if((n==1))
   {
      result=a[0];
       cout<<"*********Returning from find_max_element(a,"<<n<<")"<<": Activation Record"<<activation_record_id<<endl;
   cout<<"Variable            \tAddress\t\tValue\n";
   cout<<"n                   \t"<<&n<<"\t"<<n<<endl;
   cout<<" result                 \t"<<&result<<"\t"<<result<<endl;
   cout<<"activation_record_id\t"<<&activation_record_id<<"\t"<<activation_record_id<<endl;
      return result;
   }
  else
   {

      activation_record_id++;

      result=max(a[n-1],find_max_element(a,n-1));
      activation_record_id--;
      cout<<"*********Returning from find_max_element(a,"<<n<<")"<<": Activation Record"<<activation_record_id<<endl;
   cout<<"Variable            \tAddress\t\tValue\n";
   cout<<"n                   \t"<<&n<<"\t"<<n<<endl;
   cout<<" result                 \t"<<&result<<"\t"<<result<<endl;
   cout<<"activation_record_id\t"<<&activation_record_id<<"\t"<<activation_record_id<<endl;
      return result;
   }
}
int main()
{
 int n,f;
 cout<<"enter the sizeof the array"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the elements of the array"<<endl;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 static int activation_record_id=1;


   cout<<"***** trace of getting maximum  elements of the array "<<endl;
   cout<<"*********called Main function, main(): Activation Record"<<activation_record_id<<endl;
   cout<<"Variable            \tAddress\t\tValue\n";
   cout<<"n                   \t"<<&n<<"\t"<<n<<endl;
   cout<<"f                   \t"<<&f<<"\t"<<f<<endl;
   cout<<"activation_record_id\t"<<&activation_record_id<<"\t"<<activation_record_id<<endl;


   f=find_max_element(a,n);
   cout<<"*********Returning from Main function, main(): Activation Record"<<activation_record_id<<endl;
   cout<<"Variable            \tAddress\t\tValue\n";
   cout<<"n                   \t"<<&n<<"\t"<<n<<endl;
   cout<<"f                   \t"<<&f<<"\t"<<f<<endl;
   cout<<"activation_record_id\t"<<&activation_record_id<<"\t"<<activation_record_id<<endl;
   cout<<"Final result:the maximum element is  "<<f<<endl;

cout<<"hello";

 return 0;
}

