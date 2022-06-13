#include <iostream>
using namespace std;

int  even (int start, int end)
{
    while (start<=end){
        if (start%2==0)
            cout<< start;
        start+=1;
    }
    cout <<endl;
    return 0;
}

int odd (int start, int end)
{
    while (start<=end){

        if (start%2!=0)
            cout<< start;
        start+=1;
    }
    cout <<endl;
    return 0;
}

int sum (int start, int end)
{
    int sum=0;
    while (start<=end){
        sum+=start;
        start+=1;
    }
    return sum;
}

int prime (int start, int end)
{
    int i=2;
    bool flag=true;
    while (start<=end){
        if (start<2)
            flag=false;
        while (i<start){
            if (start%i==0){
                flag=false;
                break;
            }
            i+=1;
        }
        if (flag==true)
            cout << start;
        flag=true;
        i=2;
        start+=1;
    }
    cout <<endl;
    return 0;
}

int max_prime (int start, int end)
{
    int i=2 , max=1;
    bool flag=true;
    while (start<=end){
        if (start<2)
            flag=false;
        while (i<start){
            if (start%i==0){
                flag=false;
                break;
            }
            i+=1;
        }
        if (flag==true){
            if (start>max)
                max=start;
        }
        flag=true;
        i=2;
        start+=1;
    }
    return max;
}

int max_non_prime (int start, int end)
{
    int i=2 , max_non=1;
    bool flag=true;
    while (start<=end){
        if (start<2)
            flag=true;
        while (i<start){
            if (start%i==0){
                flag=false;
                break;
            }
            i+=1;
        }
        if (flag==false){
            if (start>max_non)
                max_non=start;
        }
        flag=true;
        i=2;
        start+=1;
    }
    return max_non;
}

int total_non_prime (int start, int end)
{
    int i=2 , total=0;
    bool flag=true;
    while (start<=end){
        if (start<2)
            flag=true;
        while (i<start){
            if (start%i==0){
                flag=false;
                break;
            }
            i+=1;
        }
        if (flag==false){
            total+=start;
        }
        flag=true;
        i=2;
        start+=1;
    }
    return total;
}

int main()
{
    char press;
    int start, end, flag;
    do {
    cout<<endl <<"enter your range start number" <<endl;
    cin>> start;
    cout<<endl <<"enter your range end number" <<endl;
    cin>> end;
    if (start>end){
        flag=start;
        start=end;
        end=flag;
    }
    cout<<endl <<"press (1)- To get all even numbers within the range" <<endl;
    cout<<endl <<"press (2)- To get all odd numbers within the range" <<endl;
    cout<<endl <<"press (3)- To the sum of the numbers within the range" <<endl;
    cout<<endl <<"press (4)- To get all prime numbers within the range" <<endl;
    cout<<endl <<"press (5)- To get maximum prime number within the range" <<endl;
    cout<<endl <<"press (6)- To get maximum non prime number within the range" <<endl;
    cout<<endl <<"press (7)- To get total number of non prime numbers within the range" <<endl;
    cin>> press;
    if (press=='1'){
        cout <<endl <<"your choice is 1" <<endl<<endl <<"the even numbers are" << " : ";
        cout<< even (start,end) <<endl;
    }
    else if (press=='2'){
        cout <<endl << "your choice is 2" <<endl<<endl <<"the odd numbers are" << " : ";
        cout << odd (start,end) <<endl;
    }
    else if (press=='3'){
        cout <<endl << "your choice is 3" <<endl<<endl <<"the sum of numbers is" << " : ";
        cout << sum (start,end)  <<endl;
    }
    else if (press=='4'){
        cout <<endl << "your choice is 4" <<endl<<endl <<"the prime numbers are" << " : ";
        cout << prime (start,end) <<endl;
    }
    else if (press=='5'){
        cout <<endl << "your choice is 5" <<endl<<endl <<"the maximum prime number is" << " : ";
        cout << max_prime (start,end) <<endl;
    }
    else if (press=='6'){
        cout <<endl << "your choice is 6" <<endl<<endl <<"the maximum non prime number is" << " : ";
        cout << max_non_prime (start,end) <<endl;
    }
    else if (press=='7'){
        cout <<endl << "your choice is 7" <<endl <<endl <<"the total numbeer of non prime numbers is" << " : ";
        cout << total_non_prime (start,end) <<endl;
    }
    cout <<endl <<"press (8)- To enter new range" <<endl<<endl << "press (E)- To exit program" <<endl;
    cin >> press;
    if ((press!='8') and (press!='E')){
        cout << "wrong choice" <<endl;
    }
    } while (press=='8');
    return 0;
}
