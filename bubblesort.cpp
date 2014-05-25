#include<iostream>
using namespace std;
class bubblesort{
    int n,i,j,x,a[50],no_of_swap;   //variables of integer type
 public:
    void get(){     // function to enter data
        cout<<"how any numbers you want to sort?\n";
        cin>>n;     //number of elements to sort
        cout<<"enter the unsorted list\n";
        for(i=0;i<n;i++){
            cin>>a[i];  //elements entered in array
        }
    }
    void sort(){    //function to sort list
        for(i=0;i<n;i++){
            no_of_swap=0;
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){    //if element > its successor
                    x=a[j];     //swapping of element & its successor
                    a[j]=a[j+1];
                    a[j+1]=x;
                    no_of_swap++;
                }
            }
            if(no_of_swap==0)   //Already sorted list
            break;
        }
    }
    void display(){     // function to display sorted list
        cout<<"sorted list is\n";
        for(i=0;i<n;i++){
            cout<<a[i]<<"\t";
        }
    }
};
int main(){
    bubblesort bs1;
    cout<<"IMPLEMENTING BUBBLE SORT\n\n";
    bs1.get();      //call to in function
    bs1.sort();     //call to sort function
    bs1.display();  //call to display function
    return 0;
}

