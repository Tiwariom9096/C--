#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    /*
    //1 Binary to decimal
    int inp , sum = 0;
    cout<<"Enter inp: ";
    cin>>inp;
    for(int prod=1 ; inp>0; inp/=10){
        int rem = inp%10;
        sum = sum + rem*prod ;
        prod = prod*2; 
        cout<<sum<<endl; 

    }
    cout<<"Now final output\nconversion from binary to decimal is : "<<sum<<endl;

    //2 Decimal to Binary
    int inp1,sum1 = 0;
    cout<<"Enter input of Decimal: ";
    cin>>inp1;
    for(int prod = 1 ; inp1>0 ;inp1/=2){
        int rem = inp1%2;
        sum1 = sum1 + rem*prod;
        prod = prod *10;
        cout<<sum1<<endl;
        
    }
    cout<<"Now\nDecimal to Binary conversion :"<<sum1<<endl;

    //3 input a character which is vowel or consonent
    char inp2;
    cout<<"Enter character: ";
    cin>>inp2;
    if(inp2 == 'a'|| inp2 =='e'|| inp2 =='i'|| inp2 =='o'|| inp2 =='u'|| inp2 =='A'|| inp2 =='E'|| inp2 =='I'|| inp2 =='O'|| inp2 =='U' ){ // we can't use || operator like this , we need to explicitly campare inp2 with each vowel characters . i.e don't write  --> inp2 == 'a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U' 
        cout<<"Its a vowel ";
    }
    else{
        cout<<"Its a consonent";
    }

    //4 Count the no. of digits for a given no. n and sum of digits in a given no. n.
    int digit;
    cout<<"\nEnter no. :";
    cin>>digit;
    int count = 0, sum2 = 0;
    for(int i=1;digit>0;digit/=10){
        int rem = digit%10;
        count+=1;
        sum2+=rem;
    }
    cout<<"sum :"<<sum2<<"\nTotal digits :"<<count<<endl;

    //5 Find Reverse digits of a no.
    int no1 ,sum3 = 0 ;
    cout<<"Enter no. :";
    cin>>no1;
    for(int i=1; no1>0 ; no1/=10){
        int rem = no1%10;
        sum3 = sum3*10 + rem;

    }
    cout<<"Reverse = "<<sum3<<endl;
    */
    /*
    //6  Find the sum of the following series
    // s = 1-2+3-4 -------- upto n no.
    int no2,sumoddeven = 0;
    cout<<"Enter no. :";
    cin>>no2;
    for(int i = 1 ; i<=no2; i++){
        if(i % 2 == 0){
            sumoddeven-=i;
        }
        else{
            sumoddeven+=i;
        }
    }
    cout<<"Answer of the following series: "<<sumoddeven<<endl;

    //7  Print the first n factorial no.s .
    int  no3,prod2 = 1;
    cout<<"Enter no. :";
    cin>>no3;
    for(int i = 1;no3>0;no3--){
        prod2 = no3 * prod2;
    }
    cout<<"Factorial of a number: "<<prod2<<endl;
    
    //8 Given two no's a and b , find a to the power b.
    int a,b;
    cout<<"Enter no. and power :";
    cin>>a>>b;
    int prod3 = 1;
    while(b>0){
        prod3 = a*prod3;
        b--;
    }
    cout<<"a to the power b : "<<prod3<<endl;//Note we can also do by function pow(a,b) which requires to include math.h file
    cout<< "By power function:"<< pow(2,4)<<endl;
    */

    //9 check whether it is prime no. or not
    /*
    int no4;
    cout<<"Enter no. greater than 1 :";
    cin>>no4;
    int flag=0;
    if(no4<=1){  // These conditions are unnecessary and always true, so they can be removed.
    // if (no4 % 1 == 0 && no4 % no4 == 0) {
    // 
    // }
        flag = 1;
    }
    else{// The loop for checking prime should start from 2, not 1.
        for(int i=2 ; i<no4 ; i++){
            if(no4%i==0){
                flag = 1; //if condition is true means its not prime no.
                break;
            }
            // //also 
            // //for (int i = 2; i <= sqrt(n); i++) {
            //    if (n % i == 0) {
                                    // If a divisor is found in this range, n is not prime
                                    // No need to check beyond the square root of n
        }
    }
    cout<<flag<<endl;
    if(flag == 1){
        cout<<"its not a prime no."<<endl;
    }
    else{
        cout<<"its a prime no."<<endl;
    }
    */

    //10 do linear search 
    /*
    int size1,search1;
    cout<<"Enter size of array: ";
    cin>>size1;
    int array1[size1];  // d.t array_name[array_size];  <--- syntax of array
    
    for(int i=0;i<size1;i++){// i --> index 
        cin>>array1[i];
    }
    cout<<"The array elements are: ";
    for(int i=0;i<size1;i++){
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter key to search:";
    cin>>search1;
    int flag1 = -1;
    int len1 = sizeof(array1)/sizeof(array1[0]);
    for(int i=0;i<len1;i++){
        if(array1[i] == search1 ){
            flag1 = i; 
        }
    }
    if(flag1==-1){
        cout<<"Element not found ";
    }
    else{
        cout<<"Element found at index: "<<flag1;
    }
    */
    //11 Find last occurence of an element x in given array / vector , also count no. of occurences of a particulat element x
    /*
    int array2[] = {1,2,3,2,1,3,1};
    int x;
    cout<<"\nEnter element from array: ";
    cin>>x;
    int flag2 = -1,count = 0;
    int len2 = sizeof(array2)/sizeof(array2[0]);
    //cout<<len2;
    for(int i=0;i<len2;i++){ //we can also do back traversing
        if(x == array2[i]){
            flag2 = i;
            count++;

        }
    }
    if(flag2 == -1){
        cout<<"Element not found "<<endl;
    }
    else{
        cout<<"Element found at index: "<<flag2;
    }
    cout<<"\nTotal appearance of element in the array: "<<count<<endl;
    */
    //12 Check if the given array is sorted or not.
    /*
    int size2;
    cout<<"Enter size of the array: ";
    cin>>size2;
    int array3[size2];
    for(int i=0;i<size2;i++){
        cin>>array3[i];
    }
    cout<<"\nThe given array are:";
    for(int i=0;i<size2;i++){ //Prin
        cout<<array3[i]<<" ";
    }
    //ATQ
    int flag3 = 1; //means we assume its sorted
    for(int i=1;i<=size2;i++){
        if(array3[i]<array3[i-1]){
            flag3 = -1;
        }
    }
    if(flag3==-1){
        cout<<"\nArray is not sorted"<<endl;
    }
    else{
        cout<<"\nArray is sorted"<<endl;
    }
    */
   //13 Find difference b/w the sum of elements at even indices to the sum of elements at odd indices to the sum of elements at odd indices.
   /*
   //i.e [a,b,c,d,e,f] = (a+c+e) -(b+d+f)
   int array4[] = {11,22,33,44,55,66};
   int oddevensum = 0;
   for(int i =0;i<6;i++){
    if(i%2==0){
        oddevensum += array4[i];
    }
    else{
        oddevensum -= array4[i];
    }
   }
   cout<<"\nDifference:"<<oddevensum<<endl;
   */

  //14 (target sum): Find the total no. of pairs in the array whose sum is equal to given value x.
  //pairs = (x,y)
  /*
  int array5[] = {3,4,6,7,1,4};
  int len3 = sizeof(array5)/sizeof(array5[0]);
  int targetsum = 7;
  int pairs = 0;
  for(int i=0;i<len3;i++){
    for(int j=i+1;j<len3;j++){
        if(array5[i]+array5[j] == targetsum){
            pairs++;
        }
    }
  }
  cout<<"Total pairs :"<<pairs<<endl;
  //NOW count no. of triplets whose sum is equal to given value of x.
  // triplets = (x,y,z)
  int array6[] = {3,1,2,4,0,6};
  int len4 = sizeof(array6)/sizeof(array6[0]); 
  int targetsum1 = 5;
  int triplets = 0;
  for(int i=0;i<len4;i++){
    for(int j = i+1;j<len4;j++){
        for(int k = j+1 ;k<len4;k++){
            if(array6[i] + array6[j] + array6[k] == targetsum1){
                triplets++;
            }
        }
    }
  }
  cout<<"Total triplets:"<<triplets<<endl;
  */
  //15 (array manipulation) Find the unique no. in a given array where all the elements are being repeated twice with one value being unique.
  /*
  int array7[] = {2,3,1,3,2,4,4,10,12,1};
  int len5 = sizeof(array7)/sizeof(array7[0]);
  for(int i=0;i<len5;i++){
    for(int j = i+1;j<len5;j++){
        if(array7[i] == array7[j]){
            array7[i] = array7[j] = -1;

        }
    }
  }
  for(int i=0;i<len5;i++){
    if(array7[i]>0){
        cout<<array7[i]<<" ";
    }
  }
  */ 
 // Array manipulation - For the sake of o/p , making changes in element of array i.e assigning new values etc.
  //16 Find the second largest element in array.
  /*
  int array8[] = {2,48,3,5,6,1,7,3,44,46,50};
  int len6 = sizeof(array8)/sizeof(array8[0]);
  int max= INT16_MIN;
  for(int i=0;i<len6;i++){
    if(array8[i]>max){
        max = array8[i];
    }
  }
  for(int i=0;i<len6;i++){
    if(array8[i] == max){
        max = array8[i] = -1;
    }
  }
  for(int i=0;i<len6;i++){
    if(array8[i]>max){
        max = array8[i];
    }

  }
  cout<<"Second Maximum element of array:"<<max<<endl;
  */
 //17 (important array manipulation)  Rotate the given array 'a' by k steps where k is non-negative . Note: k can be > than n(size of array 'a')
 // Given - {1,2,3,4,5} k=2
 // {5,1,2,3,4} k=1
 // {5,4,1,2,3} k=2 <-- answer
 /*
 int v[] ={1,2,3,4,5};
 int ansarr[5];
 //Printing given array/vector.
 for(int a:v){
    cout<<a<<" ";
 }
 //ATQ
 int len7 = sizeof(v)/sizeof(v[0]);
 int k,w=0;
 cout<<"\nEnter value of k: ";
 cin>>k;
 k=k%len7;

 for(int i=len7-k;i<len7;i++){//inserting last k element of v in ansarray
    ansarr[w++] = v[i];
 }
 //For now displaying ansarray after inserting last k element of v in ansarray
 for(int a=0;a<len7;a++){
    cout<<ansarr[a]<<" ";
 }
 cout<<"\n";
 //now inserting starting 'n-k' element of v in ansarray
 for(int i=0;i<=len7;i++,w++){
    ansarr[w] = v[i] ;
 }
 //displaying above step
 for(int a:ansarr){
    cout<<a<<" ";
 }

    // int size;
    // cout<<"Enter size of the array: ";
    // cin>>size;
    
    // int k;
    // cout<<"Enter key:";
    // cin>>k;
    
    // int array[size];
    // for(int i=0;i<size;i++){
    //     cin>>array[i];
    // }
    // int newarray[size];
    // int j=0;
    
    // //atq
    // for(int i=size-k;i<size;i++){//inserting last k element of array values to newarray.
    //     newarray[j]=array[i];
    //     j++;
    // }
    // for(int i = 0;i<size;i++){//inserting starting n-k elements of array to newarray 
    //     newarray[j] = array[i];
    //     j++;
    // }
    // cout<<endl;
    
    // //Now printtng newarray
    // for(int i=0;i<size;i++){
    //     cout<<newarray[i]<<" ";
    // }
 */
 //18(important array mainpulation) Given q queries , check if the given no. is present in array or not . NOTE: Value of all the elements in the array is less than 10 to pewer 5 i.e 10**5
 /*
 vector<int> v={2,3,5,6,7,7,8};
 cout<<"Given vector\ndisplaying vector:";

 for(int y:v ){
    cout<<y<<" ";
 }
 const int p = 1e5 + 10; // p --> 10**5
 vector<int> z(p,0);
 for(int i=0;i<v.size();i++){
    z[v[i]] = z[v[i]] + 1;
 }
 int queries;
 cout<<"\nEnter queries: ";
 cin>>queries;
 while(queries--){
    int a;
    cout<<"\nEnter no.: ";
    cin>>a;
    cout<<"Element present "<<z[a]<<" times\n";
 }
 */

 /*
 while(queries--){
    cout<<"Enter no. to check present in the array:";
    int a;
    cin>>a;
    int flag = 0;
    for(int i=0;i<v.size();i++){
        if(a == v[i]){
            flag = i;
        }

    } 
    //cout<<flag<<endl;
    if(flag == 0){
        cout<<"Its not present in the array"<<endl;
    } 
    else{
        cout<<"Its present in the array at index:"<<flag<<endl;
    }
 }
//  int q;
//     cout<<"Enter queries: ";
//     cin>>q;
//     const int N=1e5 + 10;
//     cout<<"Enter size of the array: ";
//     int size;
//     cin>>size;
//     vector<int> v(size);
//     for(int i=0;i<size;i++){
//         cin>>v[i];
//     }
//     cout<<"Displaying current array elements:\n";
//     for(int i =0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
//     vector<int> y(N,0);
//     //atq
//     for(int i = 0;i<size;i++){ //checking value is present or not and then how many values are present in the array.
//         y[v[i]]++;
        
//     }
//     while(q--){
//         cout<<"\nEnter element to search among array:";
//         int ele;
//         cin>>ele;
//         cout<<"Element present "<<y[ele]<<"0 times ";
//     }

 */
// 19 Sort an array consisting of only 0's and 1's.
// --> i/p = {1,1,0,0,1,0,1,0} --> o/p = {0,0,0,0,1,1,1,1}
 

//  int size;
//  cout<<"Enter size of array:";
//  cin>>size;
//  int array9[size];
//  cout<<"\nEnter only 0's and 1's\n";
//  for(int i=0;i<size;i++){
//     cin>>array9[i];
//  }
//  int leng=sizeof(array9)/sizeof(array9[0]);

 /*
 int count=0;
 for(int i=0;i<leng;i++){
    if(array9[i] == 0){
        count++; //Counting the total zeroes in the array
    }
 }
 int array10[size];
 for(int i=0;i<leng;i++){
    array10[i] = 1; // assigning each element of array to 1.
 }
 for(int i=0;i<count;i++){
    array10[i] = 0;//assigning value 0 array upto count value.

 }
 cout<<"The sorted array: "<<endl;
 for(int a:array10){
    cout<<a<<" ";
 }
 */
 /*
 int leftptr = 0;
 int rightptr = leng -1;
 for(int i=0;leftptr<=rightptr;i++){
    if(array9[leftptr] == 1 && array9[rightptr] == 0){
        array9[leftptr++] = 0;
        array9[rightptr--] = 1; // or  swap(array[leftptr++],array[rightptr--]);

    }
    else if(array9[leftptr] == 0){
        leftptr++;
    }
    else if(array9[rightptr] == 1){
        rightptr--;
    }
 }
 for(int a:array9){
    cout<<a<<" ";
 }
 */
//20 (important) Given an array of integers 'a' , move all the even integers at the beginning of the array followed by all the odd integers . The relative order of odd or even integers does not matter return any array that satisfies the condition.
 // i.e Given --> {1,2,3,4,5} o/p --> {4,2,3,1,5}
 /*
 int sizze;
 cout<<"Enter size of array: ";
 cin>>sizze;
 int array11[sizze];

 for(int i=0;i<sizze;i++){
     cin>>array11[i];
 }
 int leftptr2 = 0,rightptr2 = sizze-1;
 for(int i=0;leftptr2<rightptr2;i++){
    if(array11[leftptr2]%2!=0 && array11[rightptr2]%2==0 ){
        swap(array11[leftptr2++],array11[rightptr2--]);

    }
    else if(array11[leftptr2]%2==0){
        leftptr2++;
    }
    else if(array11[rightptr2]%2!=0){
        rightptr2--;
    }
    
 }
 for(int i=0;i<sizze;i++){
     cout<<array11[i]<<" ";
 }
 */
 //21 Given an integer array 'a' sorted in non-decreasing order , return an array of the squares of each no. sorted in non decreasing order .
 // {-10,-3,4,5,6} --> {3,4,5,6,10} --> {9,16,25,36,100}
 /*
 int size11;
 cout<<"Enter size of array: ";
 cin>>size11;
 int array12[size11];
 int array13[size11];

 for(int i=0;i<size11;i++){

    cin>>array12[i];
 }
 int leftptr3 = 0,rightptr3 = size11 - 1 ;
 for(int i =0;leftptr3<=rightptr3;i++){
    if(abs(array12[leftptr3]) < abs(array12[rightptr3])){
        array13[i] = array12[rightptr3]*array12[rightptr3];  //assigning bigger squared value to new array
        rightptr3--;
    }
    else{
        array13[i] = array12[leftptr3]*array12[leftptr3];
        leftptr3++;
            
    }
 }
 for(int i=0;i<size11;i++){
     cout<<array13[i]<<" ";
 }
 */
 //now just reverse it.
 //22 prefix sum.
 //Given an integers array 'a' , return the prefix sum/running sum in the same array without creating a new array.
 // given --> [5,4,1,2,3] o/p --> [5,9,10,12,15]
 /*
 int size;
 cout<<"Enter size of the array:";
 cin>>size;

 int array14[size];
 for(int i = 0; i < size ; i++){
    cin>>array14[i];

 }
 //atq 
 int sum = 0;
 for(int i=0;i<size;i++){
        sum = sum + array14[i];
        array14[i] = sum;
 }
 for(int i = 0; i < size ; i++){
    cout<<array14[i]<<" ";

 }
 */
 //23(I) check if we can partition the array into two subarrays with equal sum ,more formally check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
 /*
 vector<int> g = {6,2,4,3,1};
 int prefixsum = 0;
 bool flag = false;

 for(int i=0 ; i<g.size() ; i++)
 {
    prefixsum+=g[i];
    int suffixsum = 0;
    //cout<<"prefixsum :"<<prefixsum<<endl;
    for(int j = i+1;j<g.size();j++){
        suffixsum+=g[j];
        //cout<<"suffixsum :"<<suffixsum<<endl;
    }
    if(prefixsum == suffixsum){
        flag = true;
    }
    
 }
 cout<<flag; //1 means found , 0 means subarray not found

 */
/*
 vector<int> g1 = {6,2,4,3,1};
 int prefixsum1 =0 ;
 int totalsum1 = 0;
 bool flag1 = false;
 for(int i =0; i<g1.size() ; i++){
    totalsum1+=g1[i];
 }
 for(int i=0;i<g1.size();i++){
    prefixsum1+=g1[i];
    int suffixsum1 = totalsum1 - prefixsum1;
    if(prefixsum1 == suffixsum1){
        flag1 = true;
    }
 }
 cout<<flag1; //1 means found , 0 means subarray not found
 */


 //24 Given an array of integers of size n . Answer 'q' queries where you need to print the sum of values in a given range of indices from l to r (both included).
 /*
 cout<<"Enter queries: ";
 int queries;
 int array15[] = {1,2,3,4,5,6,7};
 int l,r;
 cin>>queries;
 while(queries--){
    cout<<"Enter l , r:";
    cin>>l>>r;
    int sum = 0;
    for(l=l-1 ; l<=r-1 ; l++){
        //cout<<l<<" om \n";
        sum = sum + array15[l] ;
        //cout<<sum<<endl;

    }
    cout<<"SUM : "<<sum<<endl;

 }
 
 */
 int n;
 cout<<"Enter size of array:";
 cin>>n;
 vector<int> v2(n+1,0);
 for(int i=1;i<=n; i++){
    cin>>v2[i];

 }
 //now we are calculating prefixsum
 for(int i=1;i<=n;i++){
    v2[i] = v2[i] + v2[i-1];
 }
 for(int a:v2){
    cout<<a<<" ";
 }

 int q2,sum;
 cout<<"\nEnter queries:";
 cin>>q2;
 int l,m;
 while(q2--){
    cout<<"Enter l,m: ";
    cin>>l>>m;

    sum = v2[m] - v2[l-1];
    cout<<sum<<endl;
 }

 /*
 Yeah ! --------> THANKS FOR THE ACTIVE PARTICIPATION
 
 */







 









 


    

}

