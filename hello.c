// WACP to print the hello world?
#include<stdio.h>
int main(){
    printf("hello world!");
    return 0;
}



// WACP to find the size of diffent data types in c?
#include<stdio.h>
int main(){
    int inta;
    float floata;
    double doublea;
    char chara;
    printf("size of int   : %d bytes\n",sizeof(inta));
    printf("size of float : %d bytes\n",sizeof(floata));
    printf("size of double: %d bytes\n",sizeof(doublea));
    printf("size of char  : %d bytes\n",sizeof(chara));
    return 0;
}





// WACP to find the ASCII value in c?
#include<stdio.h>
int main(){
    char v;//v=character {alphabet may be upper or lower case}
    printf("enter any character:");
    scanf("%c",&v);
    printf("ASCII VALUE : %d",v);
    return 0;
}





// WACP to print the prism of stric in triangle form prism
#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j<=n+(i-1))
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
}
}



#include<stdio.h>
int main(){
    int c=0,d=15,e=100,a,b;
    a=c>1?d>1||e>1?10:20:30;
    b=c!=1?d>1||e>1?10:20:30;
    printf("a=%d,b=%d",a,b);
    return 0;
}
#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j<=n+(i-1))
        printf("*");
        else
        printf(" ");
        
    }
    printf("\n");
    
}
}




#include<stdio.h>
int main(){
    int a;
    printf("enter the value of number:");
    scanf("%d",&a);
   (a/2) && (a%2==0) && printf("even");
   (a/2) && (a%2==1) && printf("odd");
    return 0;
}
#include<stdio.h>
int main(){
    int a;
       printf("enter the value of number:");
    scanf("%d",&a);
   (a/2) && (a%2==0) && printf("even");
   (a/2) && (a%2!=0) && printf("odd");
    return 0;
}



// check wheather the character is vowel or consonant by switch case?
#include <stdio.h>
int main()
{
char ch;
printf("enter the character : ");
scanf("%c",&ch);
switch(ch)
{
    case 'a': 
    case 'e':
    case 'i': 
    case 'o': 
    case 'u':
    case 'A':
    case 'E': 
    case 'I':
    case 'O': 
    case 'U':
    printf("vowel");
    break;
    
   
     default:
     printf("consonant");
}
     return 0;
}




// To check wheather the number is positive negative without using the if and else if ?
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of number :");
    scanf("%d",&a);
    (a>=0) && printf("positive number");
    (a<0) && printf("negative number");
    return 0;
}



// WACP to check wheather the given is penodrum or not ?
#include<stdio.h>
int main(){
    int num,rem,temp,sum=0;
    printf("enter the value of number:");
    scanf("%d",&num);
   temp=num; 
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num/=10;
    }
    if(sum==temp)
    {printf("panodrum num");}
    
    else
    {printf("not panodrum num");}
    return 0;
   
}



// To check out put of given program?
#include<stdio.h>
int main(){
    int i=0,j=1,k;
    k=(i<5)&&(j<10);
    printf("k=%d",k);
    return 0;
}
// OUTPUT IS 
// K=1 [if both the condition are right]
// K=0 [if one of the above condition is true then give 0]





#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
    switch(a)
    {
    case 1:printf("monday");
    break;
    case 2:printf("tuesday");
    break;
    case 3:printf("wednesday");
    break;
    case 4:printf("thrusday");
    break;
    case 5:printf("friday");
    break;
    case 6:printf("saturday");
    break;
    case 7:printf("sunday");
    break;
    defaut:printf("incorrect");
    return 0;
    }
}





// To check the out put of program
#include<stdio.h>
int main(){
    int a=2,b=2;
    a!=b?printf("both are equal"):printf("both are not equal");
    return 0;

}



// To print day using the switch case 
#include<stdio.h>
int main(){
    int day;
    printf("enter the number (1-7) for day:");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("monday");
        break;
        case 2 : printf("tuesday");
        break;
        case 3 : printf("wednesday");
        break;
        case 4 : printf("thrusday");
        break;
        case 5 : printf("friday");
        break;
        case 6 : printf("saturday");
        break;
        case 7 : printf("sunday");
        break;
        default : printf("invalid given day");
    }
    return 0;
}




// To print the counting number from one to 100?
#include<stdio.h>
int main(){
   
    for(int i=1; i<=100; i=i+1){
        printf("%d\n",i);
    }
    return 0;
}   



// To print 0-11 by for  loop
#include<stdio.h>
int main(){
    for(int i=0;i<=11;i++)
    {printf("%d\n",i);}
    return 0;
}




// To print the counting in opposite (100-1)
#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--)
    {printf("%d\n",i);}
    return 0;
}



//To print all the positive even number or odd number also using the switch case
#include<stdio.h>
int main(){
    int number;
    printf("enter the value of number either it even or odd:");
    scanf("%d",&number);
    switch(number) {
        case 1 : printf("even series\t0,2,4,6,8,10,12,14,16,18,20,22,24.....");
        break;
        case 2 : printf("odd series\t1,3,5,7,9,11,13,15,17,19,21,23,25......");
        break;
        default:printf("invalid");
    }
    return 0;
}




// To check wheather the out put of given ternary operator code
#include<stdio.h>
int main(){
    int a=2,b=2;
    a==b? printf("both are equal"):printf("both are not equal");
    return 0;
 }




// To learn the pre & post increment & decrement in code
 #include<stdio.h>
 int main(){
    int i=8;
    printf("%d\n",i--);
    printf("%d\n",i);
    return 0;
 }




// To print the number in floating from 0 to 5.0?
#include<stdio.h>
 int main(){
    for(float i=0;i<=5.0;i=i+2){
        printf("%f\n",i);
    }
    return 0;
 }



// To print the alphabet on for loop?
#include<stdio.h>
int main(){ 
for(char i='a';i<='z';i++)
    {printf("%c\n",i);}
    return 0;
}





// To print the number start from 0 and go up to n which is given by the user
#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}





// To print the number by do while where n is given by user
#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter the value of number:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}




// To find the sum of n natural number ?
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    do{
       sum=sum+i;
        i++;
    }while(i<=n);
    printf("sum=%d",sum);
    return 0;
}

// ALTERNATE MATHOD BY FOR loop
#include<stdio.h>
int main(){
    int sum=0,i=1,n;
    printf("enter the value of number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}



// To scan f the value of array and print their value ? 
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}




// To print the table given by user?
#include<stdio.h>
int main(){
    int n;
    printf("enter the table name:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}



// To find the even sum of given natural number?//in case of odd sum i will start from i=1
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+2){
       
        sum=sum+i;
    }
    printf(" even sum=%d",sum);
    return 0;
}



// To learn how to use break in a program to come out from the loop ?
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
    }while(n);
    printf("ok");
    return 0;
}



// To check the number given by user is divisible by 7 or not ?
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
    }while(1);
    printf("this last number is divisible by 7");
    return 0;
}

// alternate method
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            printf("Given no. is multiple of 7 \n");
            break;
        }
    }while(n);
    return 0;
}
 
 



// WACP to find the sum of the digit ?
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of the given digit: %d",sum);
    return 0;
}

// ALTERNATE METHOD 
#include<stdio.h>
int main(){
     int n,sum=0;
     printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int r=n%10;
        sum =sum +r;
        n=n/10;
    }
    printf("sum : %d",sum);
    return 0;
}





// TO PRINT THE NUMBER IN REVERSE AND THEIR SUM AFTER GIVEN A NUMBER ?
 #include<stdio.h>
 int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int sum =0;
    for(int i=n;i>=1;i--){
     printf("%d\n",i);
     sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
 }





// TO print all the number from 1 to 10 expect for 6?
#include<stdio.h>
int main(){
    for (int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}




// To check th e even no. b/w 5 to 50 by using continue?
#include<stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==1){
            continue;
        
        }  
        printf("%d\n",i);
    }
    return 0;
}



// To print the factorial of a given number by user?
#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d*",i);
        factorial=i*factorial;
    }
    printf("Factorial=%d\n",factorial);
    return 0;
}



// To print reverse of the table taking n from user?
#include<stdio.h>
int main(){
    int n,table;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
    table=n*i;
       printf("%d\n",table);
    }
    return 0;
}

// ALTERNATE METHOD
#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
for(int i=10;1>=1;i--){
    printf("%d\n",i*n);
}
return 0;
}




// To print the pattern
// *****
// *****
// *****                   
// *****                    
// *****                    
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}




// CLASS WORK 
// write a c progaram to count frequency of any value given by user in a given array?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n],value;
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
        scanf("%d",&value);
        for(int i=0;i<n;i++){
            if(a[i]==value){
            c++;}}
        printf("%d occurs %d times",value,c);
        return 0;
}



// write a  c program to count frequently of each element in a given array?
 #include<stdio.h>
int main(){
    int n,c=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    a[i]=-1;}
    for(int i=0;i<n;i++)
        if(a[i]==-1){
            int c=0;

    for(int j=0;j<n;j++){
        
        for(int j=0;j<n;j++)
        if(a[i]==a[j])
        c++;
        printf("%d occur %d time\n",a[i],c);

    }
    return 0;
}
}



// write a c program to left rotate an array by l time of rotation? 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n\nINPUTTED ARRAY\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int l,templ;
    printf("\n\nEnter teh no. of time you wnat to rotate in left\n");
    scanf("%d",&l);
    while(l--){
        templ=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=templ;
    }
    printf("\n\n\nLEFT ROTATED ARRAY\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}




// WACP to print the prices of 3 item with their gst 18%?
#include<stdio.h>
int main(){
    float p[3];
    printf("enter the value of price of all 3 items:");
    scanf("%f",&p[0]);
    scanf("%f",&p[1]);
    scanf("%f",&p[2]);
    printf("total price of item 1: %f\n",p[0]+(p[0]*0.18));
    printf("total price of item 2: %f\n",p[1]+(p[1]*0.18));
    printf("total price of item 2: %f\n",p[2]+(p[2]*0.18));
    return 0;
}




// To print the value of an array?
#include<stdio.h>
int main(){
    int a[5];
    //intput
    for(int i=0;i<5;i++){
        printf("index:",i);
        scanf("%d",&a[i]);
    }
    //output
    for(int i=0;i<5;i++){
        printf("index=%d\n",a[i]);  
    }
    return 0;
}



// To print the number in an array?
#include<stdio.h>
void printnumber(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    return 0;
}
void printnumber (int arr[],int n){
    for (int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}




// WACP To count the odd number in an given array?
#include<stdio.h>
int main(){
int countodd(int arr[],int n);
    int arr[]={1,2,3,4,5,6};
    printf("%d",countodd(arr,6));
    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){ 
            count++;
        }
    }
    return count;
}




// WACP TO print the value of *(arr+2) and *(arr+4) in an given array arr[]={1,2,3,4,5}?
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+4));
    return 0;
}



// WACP To reverse an array ?
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse array is:\n");
    for(int i=4;i>=0;i--){
        printf("%d\n",a[i]);
        
    }
    return 0;
}




// WACP to print the fibonoic series in  an array ?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n (n>2):");
    scanf("%d",&n);
    int fb[n];  //fb is fibonoic series 
    fb[0]=0;
    fb[1]=1;
    printf("%d\t%d\t",fb[0],fb[1]);
    for(int i=2;i<n;i++){
        fb[i]=fb[i-1]+fb[i-2];
        printf("%d\t",fb[i]);
    }
    printf("\n");
    return 0;
}




// V V I
// WACP To short a given array in accending order using bubble shot ?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(a[j]>a[j+1]){
           int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            } 
        }
    }
    for(int i=0;i<n;i++){
     printf("%d\t",a[i]);
    }
    return 0;

}




// WACP To take 2d array from user and find the sum of each row and each column?
#include <stdio.h>
// Function to take a 2D array from the user
void input_2d_array(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to calculate the sum of each row
void sum_of_rows(int rows, int cols, int matrix[rows][cols], int row_sums[rows]) {
    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < cols; j++) {
            row_sums[i] += matrix[i][j];
        }
    }
}

// Function to calculate the sum of each column
void sum_of_columns(int rows, int cols, int matrix[rows][cols], int col_sums[cols]) {
    for (int j = 0; j < cols; j++) {
        col_sums[j] = 0;
        for (int i = 0; i < rows; i++) {
            col_sums[j] += matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be greater than 0.\n");
        return 1;
    }

    int matrix[rows][cols];
    int row_sums[rows];
    int col_sums[cols];

    // Input the 2D array from the user
    input_2d_array(rows, cols, matrix);

    // Calculate the sum of each row and column
    sum_of_rows(rows, cols, matrix, row_sums);
    sum_of_columns(rows, cols, matrix, col_sums);

    // Display the results
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, row_sums[i]);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, col_sums[j]);
    }

    return 0;
}



// WACP To sparse matrix {means non zero element is less than zero} and dense {means less zero and more non zero}?
//  1   4 
//    2
//  7   3

// main diagonal:if(i==j)                       |logic
// opposite diagonal :if((i+j)==n-1)            |logic
// upper triangular :if(i<=j)                   |logic
// lower triangluar :if(i>=j)                   |logic




// WACP to print the sum of two matrix which was given by the user ?
#include<stdio.h>
int main(){
    int m,n;
    printf("enter the value of m,n:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    printf("enter the element of matrix a[m][n]:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    printf("enter the value of matrix b[m][n]:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("sum of the both matrix is:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        printf("%d\n",c[i][j]);
    }
    return 0;
}




// WACP to make two matrices from user and multiplies them ?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[n][n]);
        }
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[n][n]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
    for (int k=0;k<n;k++){
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    } 
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    printf("%4d",c[i][j]);
    printf("\n");
}
return 0;
}




// WACP TO take an array from user and delete all duplicate element (array contain only unique elemen t)?
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    for(k=j;k<n;k++){
                        a[k]=a[k+1];
                    }
                    n--;j--;
                }
                
            }
        }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}




// WACP to print the no of even elemnt in an array given by user?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(a[i]%2==0){
            printf("even element %d\n",a[i]);
        }
    return 0;
}

// WACP to print the hello and bye by using the function ?
#include<stdio.h>
void printhello();
void printbye();
void printhello(){
    printf("hello\n");
    printf("bye");
}
int main(){
    printhello();
    printbye();
    return 0;
}




// WACP TO find the sum of two number by using the function
#include<stdio.h>
void sum(){
int a,b;
scanf("%d%d",&a,&b);
printf("sum=%d",a+b);
}
int main(){
    sum();
}
// Alternate Method
#include<stdio.h>
void sum(int a,int b){
    int result =a+b;
    printf("Sum=%d",result);
}
void main(){
    sum(2,3);
}



// WACP to find the cube of any number?
#include<stdio.h>
void cube(){
    int n;
    printf("enter the Side of Cube:");
    scanf("%d",&n);
    printf("Cube=%d",(n*n*n));
}
void main(){
    cube();
}




// WACP to print the factorial of a given number by user ?
#include<stdio.h>
void factorial(){
    int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
    factorial=i*factorial;
    }
    printf("factorial=%d",factorial);
}
void main(){
    factorial();
}



// WACP to swap two number by using the pointer and the function ?
#include<stdio.h>
void swap(int *p,int *q) {
    int c=*p;
    *p=*q;
    *q=c;
}
void main(){
    int a,b;
    printf("enter the value of a,b:");
    scanf("%d%d",&a,&b);
    printf("%d%d before swaping\n",a,b);
    swap(&a,&b);
    printf("%d%d after swaping\n",a,b);
}





// WACP to find the diameter,circumference and area of circle using function ?
#include<stdio.h>
void acd(){
    float r;
    printf("enter the value of radius:");
    scanf("%f",&r);
    printf("Diameter : %f\n",2*r);
    printf("Circumfernce : %f\n",2*3.14*r);
    printf("Area : %f\n",3.14*r*r);
}
int main(){
    acd();
    return 0;
}





// WACP to find sum of two variable using pointer ?
#include<stdio.h>
int main(){
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
   a=22;
   b=66;
   printf("%d",*p1+*p2);
   return 0;
}





// WACP to make a function that will scan two variable which it take as argument?
#include<stdio.h>
void scan(int *p1,int *p2)
{
    scanf("%d %d",p1,p2);
}
int main(){
int a,b;
scan(&a,&b);
printf("%d %d",a,b);
return 0;
}




// WACP to make two function one to scan array and one  to print 1 d array ?
#include<stdio.h>
void scanner(int *p,int n)
{
for(int i=0;i<n;i++)
scanf("%d",p+i);
}
void printer (int *p,int n)
{
for(int i=0;i<n;i++)
printf("%d",*(p+i));
}
int main()
{
int a[100];
scanner(a,5);
printer(a,5);
return 0;
}






// NOTE ||concept
// NUMBER OF COLUMN IS COMPULSARY WHILE DECLARING THE TWO D ARRAY 


// WACP to make two function one to scan array and one to print 2 d array ? 
#include<stdio.h>
void scanar(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
}
void printar(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    printf("%d",a[i][j]);
    printf("\n");
}
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    scanar(a,r,c);
    printar(a,r,c);
    return 0;
}





// WACP to make a function to find the sum of element of array by taking  array as parameter ? 




// WACP to find the sum of digit of a given number by user using function?
#include<stdio.h>
void sun(){
int r,n,sum =0;
printf("enter the value of n:");
scanf("%d",&n);
while(n>0){
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of element : %d",sum);
}
int main(){
    sun();
    return 0;
}








// WACP to find the swap of two number using the pointer/call by refernce 
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    a=5;
    b=9;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}





// WACP to find the area, circumference and diameter of the circle by using the function
#include<stdio.h>
void a_c_d()
{
    int r;
    printf("enter the value of radius:");
    scanf("%d",&r);
    printf("Diameter =%d\n",2*r);
    printf("circumference=%f\n",3.14*2*r);
    printf("area=%f",3.14*r*r);
}
int main(){
    a_c_d();
    return 0;
}




#include<stdio.h>
int main(){
    int arr[]={8,13,14,5};
    char *ptr = arr;
    printf("%d",*(ptr+1));
    return 0;
}





// toogle means chenge the upper case into the lowerr case and the lower case into the upper case
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
           s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z'){
     s[i]=s[i]-32;}
    }
    printf("%s",s);
    return 0;
}






// WACP to take a string from user and count the number of words in it?
#include<stdio.h>
#include<string.h>  // contain function strlen(string_name)
void main(){
    char sentence[1000];
    int count =0;
    printf("Enter any String : ");
    gets(sentence);
    for(int i=0;i<strlen(sentence);i++){
        count +=1;
    }
    printf("Length of String = %d",count);
}





// WACP to take a string from user and reverse it?
#include<stdio.h>
#include<string.h>
void reverse (char s[]){
    char t;int c=0;
    for(int i=0;s[i]!='\0';i++)
    {c++;}
    for(int i=0;i<=c/2;i++)
    {
        t=s[i];
        s[i]=s[c-i];
        s[c-i]=t;
    }
    for(int i=0;i<=c;i++){
        printf("%c",s[i]);
    }
}
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    reverse(s);
    return 0;
}





// WACP to take a string from user and and check it is pallidrome or not?
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%[^\n]s",s1);
    strlwr(s1);
    strcpy(s2,s1);
    strrev(s1);
    if(strcmp (s1,s2)==0)
    printf("pallindrome");
    else
    printf("not pallidrome");
    return 0;
}




// 1.  WACP to print the hello world?
#include<stdio.h>
int main(){
    printf("hello world!");
    return 0;
}



// WACP to swap the two number without using the any other variable 
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a & b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d & b=%d",a,b);
    return 0;
}





// WACP to print the no. of note in a user given amount
#include<stdio.h>
int main(){
    int a;//a=amount.
    printf("enter the value of a:");
    scanf("%d",&a);
    a=a-100;
    printf("no. of 2k note : %d\n",a/2000);
    a=a%2000;
    printf("no. of 500 note : %d\n",a/500);
    a=a%500;
    printf("no. of 100 note : %d",1+(a/100));
    return 0;
}






// 2.  WACP to find the size of diffent data types in c?
#include<stdio.h>
int main(){
    int inta;
    float floata;
    double doublea;
    char chara;
    printf("size of int : %d bytes\n",sizeof(inta));
    printf("size of float: %d bytes\n",sizeof(floata));
    printf("size of double: %d bytes\n",sizeof(doublea));
    printf("size of char : %d bytes\n",sizeof(chara));
    return 0;
}




// 3. WACP to find the ASCII value in c?
#include<stdio.h>
int main(){
    char v;//v=character {alphabet may be upper or lower case}
    printf("enter any character:");
    scanf("%c",&v);
    printf("ASCII VALUE : %d",v);
    return 0;
}





// WACP to find the person is able to vote or not.
#include<stdio.h>
int main(){
    int age;
    printf("enter the value of age:");
    scanf("%d",&age);
    if(age>=0 && age<18){
        printf("not able to vote");
    }
    else
    {
        printf("able to vote");
    }
    return 0;
}





// WACP to find the year is leap or not.
#include<Stdio.h>
int main(){
    int y;//y=year
    printf("enter the value of year:");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0){
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}






// 4. WACP to print the prism of stric in triangle form prism
#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j<=n+(i-1))
        printf("*");
        else
        printf(" ");
        
    }
    printf("\n");
}
}





// WACP to print the pattern
// 1
// 22
// 333
// 4444
// 55555

#include<stdio.h>
int main(){
    int n;
    printf("enter the value of row  n:");
    scanf("%d",&n);
for(int r=1;r<=n;r++) 
{
   for(int c=1;c<=r;c++ ) 
   {
       printf("%d",r);
   }
   printf("\n");
}
return 0;
}






// WACP to print the pattern
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *

#include<stdio.h>
int main(){
    int n;
    printf("enter the value of row:");
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}






// 5.  WACP to print the '*' in the triangle format.
#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j<=n+(i-1))
        printf("*");
        else
        printf(" ");
        
    }
    printf("\n");
    
}
}



// 6. WACP to print the given number is odd or even .
#include<stdio.h>
int main(){
    int a;
       printf("enter the value of number:");
    scanf("%d",&a);
   (a/2) && (a%2==0) && printf("even");
   (a/2) && (a%2!=0) && printf("odd");
    return 0;
}



// 7. check wheather the character is vowel or consonant by switch case?
#include <stdio.h>
int main()
{
char ch;
printf("enter the character : ");
scanf("%c",&ch);
switch(ch)
{
    case 'a': 
    case 'e':
    case 'i': 
    case 'o': 
    case 'u':
    case 'A':
    case 'E': 
    case 'I':
    case 'O': 
    case 'U':
    printf("vowel");
    break;
    
   
     default:
     printf("consonant");
}
     return 0;
}




// 8. To check wheather the number is positive negative without using the if and else if ?
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of number :");
    scanf("%d",&a);
    (a>=0) && printf("positive number");
    (a<0) && printf("negative number");
    return 0;
}



// 9. WACP to check wheather the given is penodrum or not ?
#include<stdio.h>
int main(){
    int num,rem,temp,sum=0;
    printf("enter the value of number:");
    scanf("%d",&num);
   temp=num; 
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num/=10;
    }
    if(sum==temp)
    {printf("panodrum num");}
    
    else
    {printf("not panodrum num");}
    return 0;
   
}



// 10.  To check out put of given program?
#include<stdio.h>
int main(){
    int i=0,j=1,k;
    k=(i<5)&&(j<10);
    printf("k=%d",k);
    return 0;
}
// OUTPUT IS 
// K=1 [if both the condition are right]
// K=0 [if one of the above condition is true then give 0]




// 11. WACP to print the whic day is today. 
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
    switch(a)
    {
    case 1:printf("monday");
    break;
    case 2:printf("tuesday");
    break;
    case 3:printf("wednesday");
    break;
    case 4:printf("thrusday");
    break;
    case 5:printf("friday");
    break;
    case 6:printf("saturday");
    break;
    case 7:printf("sunday");
    break;
    defaut:printf("incorrect");
    return 0;
    }
}




// 12. To print day using the switch case 
#include<stdio.h>
int main(){
    int day;
    printf("enter the number (1-7) for day:");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("monday");
        break;
        case 2 : printf("tuesday");
        break;
        case 3 : printf("wednesday");
        break;
        case 4 : printf("thrusday");
        break;
        case 5 : printf("friday");
        break;
        case 6 : printf("saturday");
        break;
        case 7 : printf("sunday");
        break;
        default : printf("invalid given day");
    }
    return 0;
}




// 13. To print the counting number from one to 100?
#include<stdio.h>
int main(){
   
    for(int i=1; i<=100; i=i+1){
        printf("%d\n",i);
    }
    return 0;
}   



// 14. To print 0-11 by for loop.
#include<stdio.h>
int main(){
    for(int i=0;i<=11;i++)
    {printf("%d\n",i);}
    return 0;
}




// 15.To print the counting in opposite (100-1)
#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--)
    {printf("%d\n",i);}
    return 0;
}



//  16.To print all the positive even number or odd number also using the switch case
#include<stdio.h>
int main(){
    int number;
    printf("enter the value of number either it even or odd:");
    scanf("%d",&number);
    switch(number) {
        case 1 : printf("even series\t0,2,4,6,8,10,12,14,16,18,20,22,24.....");
        break;
        case 2 : printf("odd series\t1,3,5,7,9,11,13,15,17,19,21,23,25......");
        break;
        default:printf("invalid");
    }
    return 0;
}




// 17. To check wheather the out put of given ternary operator code
#include<stdio.h>
int main(){
    int a=2,b=2;
    a!=b? printf("both are equal"):printf("both are not equal");
    return 0;
 }




// 18.To learn the pre & post increment & decrement in code
 #include<stdio.h>
 int main(){
    int i=8;
    printf("%d\n",i--);
    printf("%d\n",i);
    return 0;
 }




// 19.To print the number in floating from 0 to 5.0?
#include<stdio.h>
 int main(){
    for(float i=0;i<=5.0;i=i+2){
        printf("%f\n",i);
    }
    return 0;
 }



// 20.To print the alphabet on for loop?
#include<stdio.h>
int main(){ 
for(char i='a';i<='z';i++)
    {printf("%c\n",i);}
    return 0;
}





// 21.To print the number start from 0 and go up to n which is given by the user
#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}





// 22.To print the number by do while where n is given by user
#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter the value of number:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}




// 23. To find the sum of n natural number ?
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    do{
       sum=sum+i;
        i++;
    }while(i<=n);
    printf("sum=%d",sum);
    return 0;
}

// 24. ALTERNATE MATHOD BY FOR loop
#include<stdio.h>
int main(){
    int sum=0,i=1,n;
    printf("enter the value of number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}



// 25. To scan f the value of array and print their value ? 
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}




// 26. To print the table given by user?
#include<stdio.h>
int main(){
    int n;
    printf("enter the table name:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}



// 27. To find the even sum of given natural number?//in case of odd sum i will start from i=1
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+2){
       
        sum=sum+i;
    }
    printf(" even sum=%d",sum);
    return 0;
}



// 28. To learn how to use break in a program to come out from the loop ?
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
    }while(n);
    printf("ok");
    return 0;
}



// 29. To check the number given by user is divisible by 7 or not ?
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
    }while(1);
    printf("this last number is divisible by 7");
    return 0;
}

// alternate method
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            printf("Given no. is multiple of 7 \n");
            break;
        }
    }while(n);
    return 0;
}
 
 



// 30.  WACP to find the sum of the digit ?
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of the given digit: %d",sum);
    return 0;
}

// ALTERNATE METHOD 
#include<stdio.h>
int main(){
     int n,sum=0;
     printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int r=n%10;
        sum =sum +r;
        n=n/10;
    }
    printf("sum : %d",sum);
    return 0;
}





// 31. TO PRINT THE NUMBER IN REVERSE AND THEIR SUM AFTER GIVEN A NUMBER ?
 #include<stdio.h>
 int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int sum =0;
    for(int i=n;i>=1;i--){
     printf("%d\n",i);
     sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
 }





// 32. TO print all the number from 1 to 10 expect for 6?
#include<stdio.h>
int main(){
    for (int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}




// 33. To check th e even no. b/w 5 to 50 by using continue?
#include<stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==1){
            continue;
        
        }  
        printf("%d\n",i);
    }
    return 0;
}



// 34. To print the factorial of a given number by user?
#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d*",i);
        factorial=i*factorial;
    }
    printf("\n");
    printf("Factorial=%d\n",factorial);
    return 0;
}



// 35. To print reverse of the table taking n from user?
#include<stdio.h>
int main(){
    int n,table;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
    table=n*i;
       printf("%d\n",table);
    }
    return 0;
}

// ALTERNATE METHOD
#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
for(int i=10;1>=1;i--){
    printf("%d\n",i*n);
}
return 0;
}




// 36. To print the pattern
// *****
// *****
// *****                   
// *****                    
// *****                    
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}





// 37. write a c progaram to count frequency of any value given by user in a given array?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n],value;
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
        scanf("%d",&value);
        for(int i=0;i<n;i++){
            if(a[i]==value){
            c++;}}
        printf("%d occurs %d times",value,c);
        return 0;
}



//38.  write a  c program to count frequently of each element in a given 2d array?
#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    a[i]=-1;}
    for(int i=0;i<n;i++)
        if(a[i]==-1){
            int c=0;

    for(int j=0;j<n;j++){
        
        for(int j=0;j<n;j++)
        if(a[i]==a[j])
        c++;
        printf("%d occur %d time\n",a[i],c);

    }
    return 0;
}
}





// WACP to find the day according to user.
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
scanf("%d",&a);
switch(a)
{
    case 0:printf("zero");
    break;
    case 1:printf("monday");
     break;
    case 2:printf("tuesday");
     break;
    case 3:printf("wednestday");
     break;
    case 4:printf("thrusday");
    break;
    case 5:printf("friday");
    break;
    case 6:printf("saturday");
     break;
    case 7:printf("sunday");
    break;
    defaut:printf(" boka");
}
return 0;
}




// WACP to check wheather the given number is odd or even by using the switch case.
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of number a:");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:printf("even\n");
        break;
        case 1:printf("odd");
    }
    return 0;
}





// WACP to print all the natural number in reverse order from n to 1.(using for loop).
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
while(n>0){
    n--;
    printf("%d\n",n);
    if(n==1)
    break;
}
    return 0;
}







// sum of digit
#include<stdio.h>
int main(){
    int n,sum=0,r;
    printf("enter the value of number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of the digit = %d",sum);
    return 0;
}





// 39. write a c program to left rotate an array by l time of rotation? 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n\nINPUTTED ARRAY\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int l,templ;
    printf("\n\nEnter teh no. of time you wnat to rotate in left\n");
    scanf("%d",&l);
    while(l--){
        templ=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=templ;
    }
    printf("\n\n\nLEFT ROTATED ARRAY\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}




// 40. WACP to print the prices of 3 item with their gst 18%?
#include<stdio.h>
int main(){
    float p[3];
    printf("enter the value of price of all 3 items:");
    scanf("%f",&p[0]);
    scanf("%f",&p[1]);
    scanf("%f",&p[2]);
    printf("total price of item 1: %f\n",p[0]+(p[0]*0.18));
    printf("total price of item 2: %f\n",p[1]+(p[1]*0.18));
    printf("total price of item 2: %f\n",p[2]+(p[2]*0.18));
    return 0;
}




// 41. To print the value of an array?
#include<stdio.h>
int main(){
    int a[5];
    //intput
    for(int i=0;i<5;i++){
        printf("index:",i);
        scanf("%d",&a[i]);
    }
    //output
    for(int i=0;i<5;i++){
        printf("index=%d\n",a[i]);  
    }
    return 0;
}



// 42. To print the number in an array?
#include<stdio.h>
void printnumber(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    return 0;
}
void printnumber (int arr[],int n){
    for (int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}



// 43. WACP To count the odd number in an given array?
#include<stdio.h>
int main(){
int countodd(int arr[],int n);
    int arr[]={1,2,3,4,5,6};
    printf("%d",countodd(arr,6));
    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){ 
            count++;
        }
    }
    return count;
}




// 44. WACP TO print the value of *(arr+2) and *(arr+4) in an given array arr[]={1,2,3,4,5}?
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+4));
    return 0;
}



// 45. WACP To reverse an array ?
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse array is:\n");
    for(int i=4;i>=0;i--){
        printf("%d\n",a[i]);
        
    }
    return 0;
}




// 46. WACP to print the fibonoic series in  an array ?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n (n>2):");
    scanf("%d",&n);
    int fb[n];//fb is fibonoic series 
    fb[0]=0;
    fb[1]=1;
    printf("%d\t%d\t",fb[0],fb[1]);
    for(int i=2;i<n;i++){
        fb[i]=fb[i-1]+fb[i-2];
        printf("%d\t",fb[i]);
    }
    printf("\n");
    return 0;
}




// V V I
// 47. WACP To short a given array in accending order using bubble shot ?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(a[j]>a[j+1]){
           int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            } 
        }
    }
    for(int i=0;i<n;i++){
     printf("%d\t",a[i]);
    }
    return 0;

}




// 48. WACP To take 2d array from user and find the sum of each row and each column?
#include <stdio.h>
// Function to take a 2D array from the user
void input_2d_array(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to calculate the sum of each row
void sum_of_rows(int rows, int cols, int matrix[rows][cols], int row_sums[rows]) {
    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < cols; j++) {
            row_sums[i] += matrix[i][j];
        }
    }
}

// Function to calculate the sum of each column
void sum_of_columns(int rows, int cols, int matrix[rows][cols], int col_sums[cols]) {
    for (int j = 0; j < cols; j++) {
        col_sums[j] = 0;
        for (int i = 0; i < rows; i++) {
            col_sums[j] += matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be greater than 0.\n");
        return 1;
    }

    int matrix[rows][cols];
    int row_sums[rows];
    int col_sums[cols];

    // Input the 2D array from the user
    input_2d_array(rows, cols, matrix);

    // Calculate the sum of each row and column
    sum_of_rows(rows, cols, matrix, row_sums);
    sum_of_columns(rows, cols, matrix, col_sums);

    // Display the results
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, row_sums[i]);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, col_sums[j]);
    }

    return 0;
}






// 49. WACP to print the sum of two matrix which was given by the user ?
#include<stdio.h>
int main(){
    int m,n;
    printf("enter the value of m,n:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    printf("enter the element of matrix a[m][n]:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    printf("enter the value of matrix b[m][n]:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("sum of the both matrix is:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        printf("%d\n",c[i][j]);
    }
    return 0;
}




// 50. WACP to make two matrices from user and multiplies them ?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[n][n]);
        }
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[n][n]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
    for (int k=0;k<n;k++){
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    } 
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    printf("%4d",c[i][j]);
    printf("\n");
}
return 0;
}




// 51. WACP TO take an array from user and delete all duplicate element (array contain only unique elemen t)?
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    for(k=j;k<n;k++){
                        a[k]=a[k+1];
                    }
                    n--;j--;
                }
                
            }
        }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}




// 52. WACP to print the no of even elemnt in an array given by user?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(a[i]%2==0){
            printf("even element %d\n",a[i]);
        }
    return 0;
}

// 53. WACP to print the hello and bye by using the function ?
#include<stdio.h>
void printhello();
void printbye();
void printhello(){
    printf("hello\n");
    printf("bye");
}
int main(){
    printhello();
    return 0;
}




// 54. WACP TO find the sum mof two number by using the function
#include<stdio.h>
void sum();
int main(){
    sum();
}
void sum()
{
int a,b;
scanf("%d%d",&a,&b);
printf("sum=%d",a+b);
}




// 55. WACP to find the cube of any number?
#include<stdio.h>
void cube(){

}
int main(){
    cube();
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("cube=%d",(n*n*n));
    return 0;
}




// 56. WACP to print the factorial of a given number by user ?
#include<stdio.h>
void factorial()
{
int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
    factorial=i*factorial;
    }
    printf("factorial=%d",factorial);
}
#include<stdio.h>
int main(){
    factorial();
}



// 57. WACP to swap two number by using the pointer and the function ?
#include<stdio.h>
void swap(int *p,int *q) 
{
int c=*p;
*p=*q;
*q=c;
}
int main()
{
    int a,b;
    printf("enter the value of a,b:");
    scanf("%d%d",&a,&b);
    printf("%d%d before swaping\n",a,b);
    swap(&a,&b);
    printf("%d%d after swaping\n",a,b);
}


// alternate
// swap by call by reference using function
#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("x=%d & y=%d\n",x,y);
    swap(&x,&y);
    printf("x=%d & y=%d",x,y);
    return 0;
}





// 58. WACP to find the diameter,circumference and area of circle using function ?
#include<stdio.h>
void acd(){
    float r;
    printf("enter the value of radius:");
    scanf("%f",&r);
    printf("Diameter : %f\n",2*r);
    printf("Circumfernce : %f\n",2*3.14*r);
    printf("Area : %f\n",3.14*r*r);
}
int main(){
    acd();
    return 0;
}





// 59. WACP to find sum of two variable using pointer ?
#include<stdio.h>
int main(){
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
   a=22;
   b=66;
   printf("%d",*p1+*p2);
   return 0;
}





// 60. WACP to make a function that will scan two variable which it take as argument?
#include<stdio.h>
void scan(int *p1,int *p2)
{
    scanf("%d %d",p1,p2);
}
int main(){
int a,b;
scan(&a,&b);
printf("%d %d",a,b);
return 0;
}




// 61.WACP to make two function one to scan array and one  to print 1 d array ?
#include<stdio.h>
void scanner(int *p,int n)
{
for(int i=0;i<n;i++)
scanf("%d",p+i);
}
void printer (int *p,int n)
{
for(int i=0;i<n;i++)
printf("%d",*(p+i));
}
int main()
{
int a[100];
scanner(a,5);
printer(a,5);
return 0;
}







// 62. WACP to make two function one to scan array and one to print 2 d array ? 
#include<stdio.h>
void scanar(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
}
void printar(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    printf("%d",a[i][j]);
    printf("\n");
}
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    // scanar(a,r,c);
    printar(a,r,c);
    return 0;
}






// 63. WACP to find the sum of digit of a given number by user using function?
#include<stdio.h>
void sun(){
int r,n,sum =0;
printf("enter the value of n:");
scanf("%d",&n);
while(n>0){
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of element : %d",sum);
}
int main(){
    sun();
    return 0;
}








// 64. WACP to find the swap of two number using the pointer/call by refernce 
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    a=5;
    b=9;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}





//  65. WACP to find the area, circumference and diameter of the circle by using the function
void area_circumfernce_diameter(){
    int r;
    printf("enter the value of radius:");
    scanf("%d",&r);
    printf("Diameter =%d\n",2*r);
    printf("circumference=%f\n",3.14*2*r);
    printf("area=%f",3.14*r*r);
}
#include<stdio.h>
void main(){
    area_circumference_diameter();
}



// 66. WACP to print the out put of the below program. 
#include<stdio.h>
int main(){
    int arr[]={8,13,14,5};
    char *ptr = arr;
    printf("%d",*(ptr+1));
    return 0;
}





// 67. toogle means chenge the upper case into the lowerr case and the lower case into the upper case
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
           s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z'){
     s[i]=s[i]-32;}
    }
    printf("%s",s);
    return 0;
}






// 68. WACP to take a string from user and reverse it?
#include<stdio.h>
#include<string.h>
void reverse (char s[]){
    char t;int c=0;
    for(int i=0;s[i]!='\0';i++)
    {c++;}
    for(int i=0;i<=c/2;i++)
    {
        t=s[i];
        s[i]=s[c-i];
        s[c-i]=t;
    }
    for(int i=0;i<=c;i++){
        printf("%c",s[i]);
    }
}
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    reverse(s);
    return 0;
}





// 69. WACP to take a string from user and and check it is pallidrome or not?
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%[^\n]s",s1);
    strlwr(s1);
    strcpy(s2,s1);
    strrev(s1);
    if(strcmp (s1,s2)==0)
    printf("pallindrome");
    else
    printf("not pallidrome");
    return 0;
}





// 70. print the value of i from using pointer to pointer 
#include<stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("value of i=%d",**pptr);
    return 0;
}




// WACP to take a string from user and toggle case it?


// WACP to take a string from user and count total number of alphabet
// ,digit ,space and special ?



// WACP to take a string from the user and covert it to lower case  ?



// WACP to take a string from user and convert this into the upper case?





// WACP to make function which will take string as argument and return its length?


// WACP to take a string from user and reverse print its words?
// input vijay kumar
// output kumar vijay



// WACP to check string in pangram or not?
// MEANS   all the alphabet from a to z must be the that sentence
// like the quick brown fox jumps over the lazy dog.




// WACP to take two string from the user and check theuy are anagram or not
// MEANS   ex.blue or lube and silent and listen 




// WACP to find the maximum and minimum element in an array.






// WACP to take a string from user and count total number of alphabet
// ,digit ,space and special ?



// WACP to take a string from the user and covert it to lower case  ?



// WACP to take a string from user and convert this into the upper case?



// WACP to take a string from user and toggle case it?


// WACP to make function which will take string as argument and return its length?


// WACP to take a string from user and reverse print its words?
// input vijay kumar
// output kumar vijay



// WACP to check string in pangram or not?
// MEANS   all the alphabet from a to z must be the that sentence
// like the quick brown fox jumps over the lazy dog.




// WACP to take two string from the user and check theuy are anagram or not
// MEANS   ex.blue or lube and silent and listen 





// WACP TO COUNT THE NUMBER OF VOWELS IN A STRING 
#include<stdio.h>
void main(){
    char c[] = "vijayeao kumar";
    int count =0;
    for(int i=0;i<20;i++){
        if(c[i] =='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
            count++;
        }
    }
    printf("number of vowel=%d",count);
}



// LOGIC BUILDING CLASS IN C-
// EXAMPLE OF ONE S COMPLEMENT OPERATOR 
#include<stdio.h>
void main(){
    signed int a=00001100;
    signed int b=00000011;
    signed int c=~b;
    printf("%u",c);
}



// EXAMPLE OF TERNARY OPERATOR 
#include<stdio.h>
void main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("%c",(marks>33) ? 'p':'f');
}
// Simple method -----
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char result ;
    if (n>33){
    result='p';
    printf("%c",result);
    }else{
    result ='f';
    printf("%c",result);
    }
}



// INPUT STRING IN C 
#include<stdio.h>
#include<String.h>
void main(){
    char name[1000];
    printf("enter any name : ");
    gets(name);
    printf("Welcome %s",name);
}




#include<stdio.h>
void main(){
printf("%d",printf("hello gla university is good\n"));
}



// EXAMPLE OF LEFT SHIFT AND RIGHT SHIFT 
#include<stdio.h>
void main(){
    char a=3;
    char b=a<<1;
    char c=a>>1;
    printf("%d\n",b); // 6
    printf("%d",c);   // 1
}



// // EXAMPLE OF XOR OPERATOR --> swapping of 2 number by biwise xor (^) operator
#include<stdio.h>
void main(){
    int a=4,b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\nb=%d",a,b);
}




#include<stdio.h>
void main(){
    char a=1,b=2;
    if(a & b)
    printf("Result is true(1)");  // not work on number 
    if (a && b)
    printf("Result is true(2)"); //out put will be Result is true
}





#include<stdio.h>
void main(){
    double number_1=111.11e8;
    printf("%f\n",number_1);
    printf("%e\n",number_1);
    printf("%g\n",number_1);
}




#include"stdio.h"
void main(){
    short int number_1 =32767;
    short int number_2 =65536;
    short int number_3 =32768;
    short int number_4 =32765;
    char c = 'ab';
    printf("%hd\n",number_1);
    printf("%hd\n",number_2);
    printf("%hd\n",number_3);
    printf("%hd\n",number_4);
    printf("%c",c);
}



// C PROGRAM TO FIND THE SUM WITHOUT USING ARTHMATICS OPERATOR
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter the values of num1 and num2 : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int num3=num1^num2;  // ^ xor is the bitswise operator 
    printf("Sum =%d",num3);
}



#include <stdio.h>
int main() {
    int num1, num2;
    // Read the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    while (num2 != 0) {
        // Carry holds common set bits of num1 and num2
        int carry = num1 & num2;

        // Sum of bits of num1 and num2 where at least one of the bits is not set
        num1 = num1 ^ num2;

        // Carry is shifted by one so that adding it to num1 gives the required sum
        num2 = carry << 1;
    }
    printf("Sum: %d\n", num1);
    return 0;
}





// C PROGRAM TO FIND THE GIVEN NUMBER IS ODD OR EVEN WITHOUT USING ARTHMATICS OPERATOR 
#include<stdio.h>
void main(){
    int num;
    printf("Enter the value of num : ");
    scanf("%d",&num);
    // using bit wise opertor
    if(num & 1==1){
        printf("odd");
        
    }else{
        printf("even");
    }
}
// ALTERNATE SYNTAX FOR SAME CODE 
#include<stdio.h>
void main(){
    int number;
    printf("Enter any number : ");
    scanf("%d",&number);
    int n=number & 1;  //bitwise and operator are used
    if(n==1){
        printf("ODD NUMBER");
    }
    else{
        printf("EVEN NUMBER");
    }
}





// C PROGRAM TO SHORT NUMBER IN THE ARRAY 
#include<stdio.h>
int main(){
    int arr[4];
    int temp=0;
    printf("Enter number in array : \n");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("NUMBER AFTER SHORTING :\n");
    for(int i=0;i<4;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}







// PRINT ANY THING WITHOUT USING PRINTF AND SEMICOLUMN 
#include<stdio.h>
void main(){
    if(printf("MY NAME IS VIJAY")){
        
    }
}




// PROGRAM TO CHECK OUT PUT OF FOLLING BELOW CODE
#include<stdio.h>
void main(){
    int var = 5>3 ? printf("%x",printf("javaexamination")) : printf("no");
    printf("%d",var);
}





// PROGRAM TO FIND THE OUTPUT OF FOLLOWING CODE
#include<stdio.h>
void main(){
    int var=printf("%d",5>2)?printf("%x",printf("javaexamination")) : printf("no");
    printf("%d",var);
}





// PROGRAM TO CHECK THE BELOW CODE OUTPUT 
#include<stdio.h>
void main(){
    int var = printf("%d","hello")?printf("%x",printf("javaexamination")):printf("no");
    printf("%d",var);
}
// only use %s to print the string otherwise %d give the address of hello in the memory 
#include<stdio.h>
void main(){
    int var = printf("%s", "hello") ? printf("%x", printf("javaexamination")) : printf("no");
    printf("%d", var);
}






// TAKING 2 D ARRAY matrix AND PRINT  ALL THE ELEMENT OF MTRIX 
#include<stdio.h>
int main(){
    int m[3][3];
    // input matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }
    // condition
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}







// PROGRAM TO FIND THE GREATEST OF FOUR NUMBER
#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter the values of a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    // intially taken a is greatest 
    int greatest =a;
    if(b>greatest){
        greatest =b;
    }
    if(c>greatest){
        greatest=c;
    }
    if(d>greatest){
        greatest =d;
    }
    printf("GREATEST NUMBER = %d",greatest);
}

// BY USING SwiTCH CASE
#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter the values of a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    switch(a>b && b>c && c>d){
        case 1:printf("%d is greatest",a);
        case 0:switch(b>a && b>c && b>d){
            case 1:printf("%d is greatest",b);
            case 0:switch(c>a && c>b && c>d){
                case 1:printf("%d is greatest",c);
                case 0:printf("%d is greatest",d);
            }
        }
    }
}




// STRING INPUT METHOD IN C PROGRAM 
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter any string:");
    // following are the 4 method to take input string in c 
    // gets(str);
    // fgets(str,100,stdin);
    // scanf("%[^\n]%*c",str);
    // scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;
}





// PROGRAM TO FIND THE LEAP YEAR USING TERNARY OPERATOR AND ALSO USING IF ELSE
#include<stdio.h>
void main(){
    int year;
    printf("Enter any Year:");
    scanf("%d",&year);
    // by using normal if else
    if((year % 4 ==0 && year %100 !=0)  || (year % 400 ==0 && year %100 !=0)){
        printf("%d is leap year",year);
    }else{
        printf("%d is NOT leap year",year);
    }
} 



#include<stdio.h>
void main(){
    int y;
    printf("Enter any Year:");
    scanf("%d",&y);
    (y%4==0)?(y%100!=0 ? printf("leap year") : (y%400 ==0? printf("leap year") :printf("not"))) : printf("not");
}








// |--------------------|

// 1.  WACP to print the hello world?
#include<stdio.h>
int main(){
    printf("hello world!");
    return 0;
}



// 2.  WACP to find the size of diffent data types in c?
#include<stdio.h>
int main(){
    int inta;
    float floata;
    double doublea;
    char chara;
    printf("size of int : %d bytes\n",sizeof(inta));
    printf("size of float: %d bytes\n",sizeof(floata));
    printf("size of double: %d bytes\n",sizeof(doublea));
    printf("size of char : %d bytes\n",sizeof(chara));
    return 0;
}




// 3. WACP to find the ASCII value in c?
#include<stdio.h>
int main(){
    char v;//v=character {alphabet may be upper or lower case}
    printf("enter any character:");
    scanf("%c",&v);
    printf("ASCII VALUE : %d",v);
    return 0;
}





// 4. WACP to print the prism of stric in triangle form prism
#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j<=n+(i-1))
        printf("*");
        else
        printf(" ");
        
    }
    printf("\n");
}
}



// 5.  WACP to print the '*' in the triangle format.
#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j<=n+(i-1))
        printf("*");
        else
        printf(" ");
        
    }
    printf("\n");
    
}
}



// 6. WACP to print the given number is odd or even .
#include<stdio.h>
int main(){
    int a;
       printf("enter the value of number:");
    scanf("%d",&a);
   (a/2) && (a%2==0) && printf("even");
   (a/2) && (a%2!=0) && printf("odd");
    return 0;
}



// 7. check wheather the character is vowel or consonant by switch case?
#include <stdio.h>
int main()
{
char ch;
printf("enter the character : ");
scanf("%c",&ch);
switch(ch)
{
    case 'a': 
    case 'e':
    case 'i': 
    case 'o': 
    case 'u':
    case 'A':
    case 'E': 
    case 'I':
    case 'O': 
    case 'U':
    printf("vowel");
    break;
    
   
     default:
     printf("consonant");
}
     return 0;
}




// 8. To check wheather the number is positive negative without using the if and else if ?
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of number :");
    scanf("%d",&a);
    (a>=0) && printf("positive number");
    (a<0) && printf("negative number");
    return 0;
}



// 9. WACP to check wheather the given is penodrum or not ?
#include<stdio.h>
int main(){
    int num,rem,temp,sum=0;
    printf("enter the value of number:");
    scanf("%d",&num);
   temp=num; 
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num/=10;
    }
    if(sum==temp)
    {printf("panodrum num");}
    
    else
    {printf("not panodrum num");}
    return 0;
   
}



// 10.  To check out put of given program?
#include<stdio.h>
int main(){
    int i=0,j=1,k;
    k=(i<5)&&(j<10);
    printf("k=%d",k);
    return 0;
}
// OUTPUT IS 
// K=1 [if both the condition are right]
// K=0 [if one of the above condition is true then give 0]




// 11. WACP to print the whic day is today. 
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
    switch(a)
    {
    case 1:printf("monday");
    break;
    case 2:printf("tuesday");
    break;
    case 3:printf("wednesday");
    break;
    case 4:printf("thrusday");
    break;
    case 5:printf("friday");
    break;
    case 6:printf("saturday");
    break;
    case 7:printf("sunday");
    break;
    defaut:printf("incorrect");
    return 0;
    }
}




// 12. To print day using the switch case 
#include<stdio.h>
int main(){
    int day;
    printf("enter the number (1-7) for day:");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("monday");
        break;
        case 2 : printf("tuesday");
        break;
        case 3 : printf("wednesday");
        break;
        case 4 : printf("thrusday");
        break;
        case 5 : printf("friday");
        break;
        case 6 : printf("saturday");
        break;
        case 7 : printf("sunday");
        break;
        default : printf("invalid given day");
    }
    return 0;
}




// 13. To print the counting number from one to 100?
#include<stdio.h>
int main(){
   
    for(int i=1; i<=100; i=i+1){
        printf("%d\n",i);
    }
    return 0;
}   



// 14. To print 0-11 by for loop.
#include<stdio.h>
int main(){
    for(int i=0;i<=11;i++)
    {printf("%d\n",i);}
    return 0;
}




// 15.To print the counting in opposite (100-1)
#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--)
    {printf("%d\n",i);}
    return 0;
}



//  16.To print all the positive even number or odd number also using the switch case
#include<stdio.h>
int main(){
    int number;
    printf("enter the value of number either it even or odd:");
    scanf("%d",&number);
    switch(number) {
        case 1 : printf("even series\t0,2,4,6,8,10,12,14,16,18,20,22,24.....");
        break;
        case 2 : printf("odd series\t1,3,5,7,9,11,13,15,17,19,21,23,25......");
        break;
        default:printf("invalid");
    }
    return 0;
}




// 17. To check wheather the out put of given ternary operator code
#include<stdio.h>
int main(){
    int a=2,b=2;
    a!=b? printf("both are equal"):printf("both are not equal");
    return 0;
 }




// 18.To learn the pre & post increment & decrement in code
 #include<stdio.h>
 int main(){
    int i=8;
    printf("%d\n",i--);
    printf("%d\n",i);
    return 0;
 }




// 19.To print the number in floating from 0 to 5.0?
#include<stdio.h>
 int main(){
    for(float i=0;i<=5.0;i=i+2){
        printf("%f\n",i);
    }
    return 0;
 }



// 20.To print the alphabet on for loop?
#include<stdio.h>
int main(){ 
for(char i='a';i<='z';i++)
    {printf("%c\n",i);}
    return 0;
}





// 21.To print the number start from 0 and go up to n which is given by the user
#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}





// 22.To print the number by do while where n is given by user
#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter the value of number:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}




// 23. To find the sum of n natural number ?
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    do{
       sum=sum+i;
        i++;
    }while(i<=n);
    printf("sum=%d",sum);
    return 0;
}

// 24. ALTERNATE MATHOD BY FOR loop
#include<stdio.h>
int main(){
    int sum=0,i=1,n;
    printf("enter the value of number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}



// 25. To scan f the value of array and print their value ? 
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}




// 26. To print the table given by user?
#include<stdio.h>
int main(){
    int n;
    printf("enter the table name:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}



// 27. To find the even sum of given natural number?//in case of odd sum i will start from i=1
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+2){
       
        sum=sum+i;
    }
    printf(" even sum=%d",sum);
    return 0;
}



// 28. To learn how to use break in a program to come out from the loop ?
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
    }while(n);
    printf("ok");
    return 0;
}



// 29. To check the number given by user is divisible by 7 or not ?
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
    }while(1);
    printf("this last number is divisible by 7");
    return 0;
}

// alternate method
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            printf("Given no. is multiple of 7 \n");
            break;
        }
    }while(n);
    return 0;
}
 
 



// 30.  WACP to find the sum of the digit ?
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of the given digit: %d",sum);
    return 0;
}

// ALTERNATE METHOD 

#include<stdio.h>
int main(){
     int n,sum=0;
     printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int r=n%10;
        sum =sum +r;
        n=n/10;
    }
    printf("sum : %d",sum);
    return 0;
}





// 31. TO PRINT THE NUMBER IN REVERSE AND THEIR SUM AFTER GIVEN A NUMBER ?
 #include<stdio.h>
 int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int sum =0;
    for(int i=n;i>=1;i--){
     printf("%d\n",i);
     sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
 }





// 32. TO print all the number from 1 to 10 expect for 6?
#include<stdio.h>
int main(){
    for (int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}




// 33. To check th e even no. b/w 5 to 50 by using continue?
#include<stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==1){
            continue;
        
        }  
        printf("%d\n",i);
    }
    return 0;
}



// 34. To print the factorial of a given number by user?
#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d*",i);
        factorial=i*factorial;
    }
    printf("Factorial=%d\n",factorial);
    return 0;
}



// 35. To print reverse of the table taking n from user?
#include<stdio.h>
int main(){
    int n,table;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
    table=n*i;
       printf("%d\n",table);
    }
    return 0;
}

// ALTERNATE METHOD
#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
for(int i=10;1>=1;i--){
    printf("%d\n",i*n);
}
return 0;
}




// 36. To print the pattern
// *****
// *****
// *****                   
// *****                    
// *****                    
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}





// 37. write a c progaram to count frequency of any value given by user in a given array?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n],value;
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
        scanf("%d",&value);
        for(int i=0;i<n;i++){
            if(a[i]==value){
            c++;}}
        printf("%d occurs %d times",value,c);
        return 0;
}



//38.  write a  c program to count frequently of each element in a given array?
 #include<stdio.h>
int main(){
    int n,c=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        a[i]=-1;
    }
    for(int i=0;i<n;i++)
        if(a[i]==-1){
            int c=0;

    for(int j=0;j<n;j++){
        
        for(int j=0;j<n;j++)
        if(a[i]==a[j])
        c++;
        printf("%d occur %d time\n",a[i],c);

    }
    return 0;
}
}



// 39. write a c program to left rotate an array by l time of rotation? 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n\nINPUTTED ARRAY\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int l,templ;
    printf("\n\nEnter teh no. of time you wnat to rotate in left\n");
    scanf("%d",&l);
    while(l--){
        templ=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=templ;
    }
    printf("\n\n\nLEFT ROTATED ARRAY\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}




// 40. WACP to print the prices of 3 item with their gst 18%?
#include<stdio.h>
int main(){
    float p[3];
    printf("enter the value of price of all 3 items:");
    scanf("%f",&p[0]);
    scanf("%f",&p[1]);
    scanf("%f",&p[2]);
    printf("total price of item 1: %f\n",p[0]+(p[0]*0.18));
    printf("total price of item 2: %f\n",p[1]+(p[1]*0.18));
    printf("total price of item 2: %f\n",p[2]+(p[2]*0.18));
    return 0;
}




// 41. To print the value of an array?
#include<stdio.h>
int main(){
    int a[5];
    //intput
    for(int i=0;i<5;i++){
        printf("index:",i);
        scanf("%d",&a[i]);
    }
    //output
    for(int i=0;i<5;i++){
        printf("index=%d\n",a[i]);  
    }
    return 0;
}



// 42. To print the number in an array?
#include<stdio.h>
void printnumber(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    return 0;
}
void printnumber (int arr[],int n){
    for (int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}



// 43. WACP To count the odd number in an given array?
#include<stdio.h>
int main(){
int countodd(int arr[],int n);
    int arr[]={1,2,3,4,5,6};
    printf("%d",countodd(arr,6));
    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){ 
            count++;
        }
    }
    return count;
}




// 44. WACP TO print the value of *(arr+2) and *(arr+4) in an given array arr[]={1,2,3,4,5}?
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+4));
    return 0;
}



// 45. WACP To reverse an array ?
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse array is:\n");
    for(int i=4;i>=0;i--){
        printf("%d\n",a[i]);
        
    }
    return 0;
}




// 46. WACP to print the fibonoic series in  an array ?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n (n>2):");
    scanf("%d",&n);
    int fb[n];//fb is fibonoic series 
    fb[0]=0;
    fb[1]=1;
    printf("%d\t%d\t",fb[0],fb[1]);
    for(int i=2;i<n;i++){
        fb[i]=fb[i-1]+fb[i-2];
        printf("%d\t",fb[i]);
    }
    printf("\n");
    return 0;
}




// V V I
// 47. WACP To short a given array in accending order using bubble shot ?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(a[j]>a[j+1]){
           int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            } 
        }
    }
    for(int i=0;i<n;i++){
     printf("%d\t",a[i]);
    }
    return 0;

}





// 49. WACP to print the sum of two matrix which was given by the user ?
#include<stdio.h>
int main(){
    int m,n;
    printf("enter the value of m,n:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    printf("enter the element of matrix a[m][n]:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    printf("enter the value of matrix b[m][n]:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("sum of the both matrix is:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        printf("%d\n",c[i][j]);
    }
    return 0;
}




// 50. WACP to make two matrices from user and multiplies them ?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[n][n]);
        }
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[n][n]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
    for (int k=0;k<n;k++){
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    } 
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    printf("%4d",c[i][j]);
    printf("\n");
}
return 0;
}




// 51. WACP TO take an array from user and delete all duplicate element (array contain only unique elemen t)?
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    for(k=j;k<n;k++){
                        a[k]=a[k+1];
                    }
                    n--;j--;
                }
                
            }
        }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}




// 52. WACP to print the no of even elemnt in an array given by user?
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(a[i]%2==0){
            printf("even element %d\n",a[i]);
        }
    return 0;
}

// 53. WACP to print the hello and bye by using the function ?
#include <stdio.h>

// Function prototypes
void printHello(void);
void printHi(void);

int main() {
    printHello();
    printHi();
    return 0;
}

// Function definitions
void printHello(void) {
    printf("hello\n");
}

void printHi(void) {
    printf("Hi");
}



// 54. WACP TO find the sum mof two number by using the function
#include<stdio.h>
void sum();
int main(){
    sum();
}
void sum()
{
int a,b;
scanf("%d%d",&a,&b);
printf("sum=%d",a+b);
}




// 55. WACP to find the cube of any number?
#include<stdio.h>
void cube(){

}
int main(){
    cube();
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("cube=%d",(n*n*n));
    return 0;
}




// 56. WACP to print the factorial of a given number by user ?
#include<stdio.h>
void factorial()
{
int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
    factorial=i*factorial;
    }
    printf("factorial=%d",factorial);
}
#include<stdio.h>
int main(){
    factorial();
}



// 57. WACP to swap two number by using the pointer and the function ?
#include<stdio.h>
void swap(int *p,int *q) 
{
int c=*p;
*p=*q;
*q=c;
}
int main()
{
    int a,b;
    printf("enter the value of a,b:");
    scanf("%d%d",&a,&b);
    printf("%d%d before swaping\n",a,b);
    swap(&a,&b);
    printf("%d%d after swaping\n",a,b);
}


// alternate
// swap by call by reference using function
#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("x=%d & y=%d\n",x,y);
    swap(&x,&y);
    printf("x=%d & y=%d",x,y);
    return 0;
}





// 58. WACP to find the diameter,circumference and area of circle using function ?
#include<stdio.h>
void acd(){
    float r;
    printf("enter the value of radius:");
    scanf("%f",&r);
    printf("Diameter : %f\n",2*r);
    printf("Circumfernce : %f\n",2*3.14*r);
    printf("Area : %f\n",3.14*r*r);
}
int main(){
    acd();
    return 0;
}





// 59. WACP to find sum of two variable using pointer ?
#include<stdio.h>
int main(){
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
   a=22;
   b=66;
   printf("%d",*p1+*p2);
   return 0;
}





// 60. WACP to make a function that will scan two variable which it take as argument?
#include<stdio.h>
void scan(int *p1,int *p2)
{
    scanf("%d %d",p1,p2);
}
int main(){
int a,b;
scan(&a,&b);
printf("%d %d",a,b);
return 0;
}




#include <stdio.h>

// Function to scan elements into an array
void scanArray(int *p, int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", p + i);
    }
}

// Function to print elements of an array
void printArray(int *p, int n) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main() {
    int a[100];
    int n;

    // Prompt user for the number of elements
    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    // Check if the input size is valid
    if(n > 0 && n <= 100) {
        scanArray(a, n);
        printArray(a, n);
    } else {
        printf("Invalid array size.\n");
    }

    return 0;
}








// 62. WACP to make two function one to scan array and one to print 2 d array ? 
#include<stdio.h>
void scanar(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
}
void printar(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    printf("%d",a[i][j]);
    printf("\n");
}
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    scanar(a,r,c);
    printar(a,r,c);
    return 0;
}






// 63. WACP to find the sum of digit of a given number by user using function?
#include<stdio.h>
void sun(){
int r,n,sum =0;
printf("enter the value of n:");
scanf("%d",&n);
while(n>0){
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of element : %d",sum);
}
int main(){
    sun();
    return 0;
}








// 64. WACP to find the swap of two number using the pointer/call by refernce 
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    a=5;
    b=9;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}





//  65. WACP to find the area, circumference and diameter of the circle by using the function
#include<stdio.h>
void a_c_d()
{
    int r;
    printf("enter the value of radius:");
    scanf("%d",&r);
    printf("Diameter =%d\n",2*r);
    printf("circumference=%f\n",3.14*2*r);
    printf("area=%f",3.14*r*r);
}
int main(){
    a_c_d();
    return 0;
}



// 66. WACP to print the out put of the below program. 
#include<stdio.h>
int main(){
    int arr[]={8,13,14,5};
    char *ptr = arr;
    printf("%d",*(ptr+1));
    return 0;
}





// 67. toogle means chenge the upper case into the lowerr case and the lower case into the upper case
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
           s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z'){
     s[i]=s[i]-32;}
    }
    printf("%s",s);
    return 0;
}






// 68. WACP to take a string from user and reverse it?
#include<stdio.h>
#include<string.h>
void reverse (char s[]){
    char t;int c=0;
    for(int i=0;s[i]!='\0';i++)
    {c++;}
    for(int i=0;i<=c/2;i++)
    {
        t=s[i];
        s[i]=s[c-i];
        s[c-i]=t;
    }
    for(int i=0;i<=c;i++){
        printf("%c",s[i]);
    }
}
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    reverse(s);
    return 0;
}





// 69. WACP to take a string from user and and check it is pallidrome or not?
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%[^\n]s",s1);
    strlwr(s1);
    strcpy(s2,s1);
    strrev(s1);
    if(strcmp (s1,s2)==0)
    printf("pallindrome");
    else
    printf("not pallidrome");
    return 0;
}





// 70. print the value of i from using pointer to pointer 
#include<stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("value of i=%d",**pptr);
    return 0;
}



