#include <iostream>
#include <unistd.h>
using namespace std;


int myarr[100];
int counter = 10;
int main_menu_check = 20;

void array_display()
{

cout<<endl;
cout <<"The array's cell's serial numbers and their values are displayed for your convenience."<<endl<<endl;

for (int i  = 1; i<= counter; i ++)
{cout <<i<<": ["<<myarr[i - 1]<<"]   ";}
cout<<endl <<endl;

}

void Update_by_index()
{
int spec_loc;
int new_val;
array_display();
cout <<"Please enter the location of the value you wish to update."<<endl;
cin>>spec_loc;
sleep(2);
if (spec_loc > counter || spec_loc <= 0)
    {
    cout <<"The location must be within the number of elements stored by the array."<<endl;
    sleep(5);
    }
else
{
    cout <<"Please enter the new value you wish to store at " <<spec_loc<<endl;
    cin>>new_val;
    sleep(1);
    myarr[spec_loc - 1] = new_val;
}
}

void Update_by_value()
{
    int check_size = 0;
    int old_val;
    int new_val;
    int choice;
    int* ____temp_array = new int [check_size + 1];
    array_display();
    cout <<"Please enter the value you wish to update in the array."<<endl;
    cin>>old_val;
    sleep(1);
    for (int i = 0; i<counter; i++)
        {
            if (myarr[i] == old_val)
            {
            ____temp_array[check_size] = i;
            check_size++;
            }
        }

    if (check_size <= 0){cout<<"The value "<<old_val<<" is not present anywhere in the array. Please enter a valid value."<<endl;
    sleep(5);
    }

    else if (check_size == 1)
    {
    cout << old_val<<" is placed at cell # "<<____temp_array[check_size - 1] + 1<<" in the array. Please enter the new value you'd like to update it to"<<endl;
    cin>> new_val;
    sleep(1);
    myarr[____temp_array[check_size -1]] = new_val;
    }
    else if (check_size > 1)
    {
      cout<<"The value "<<old_val<<" is present at cell numbers ";
      for (int i = 0; i < check_size; i++){
        cout<<____temp_array[i] + 1<<", ";
      }
      cout<<endl <<"Which of these cells would you like to update?"<<endl;
      cin>>choice;
      sleep(1);
      cout<<"Please enter the new value you'd like to update it to."<<endl;
      cin>>new_val;
      sleep(1);
      myarr[choice - 1] =new_val;
    }

    delete[] ____temp_array;
}

void Update(){

int updation_loop_val = 0;
int choice;
while (updation_loop_val != -1){
cout <<"Please select your desired option"<<endl;
cout <<"1. Update by index"<<endl;
cout <<"2. Update by value"<<endl;
cout <<"3. Back to main menu"<<endl;

cin>>choice;
if (choice == 1)
    {
    Update_by_index();
    array_display();
    sleep(5);
    system("CLS");
    }
else if (choice == 2)
    {
    Update_by_value();
    array_display();
    sleep(5);
    system("CLS");
    }
else if (choice ==3)
    {
    updation_loop_val = -1;
    system("CLS");
    }
else
    {
     cout <<"Please enter a valid choice"<<endl;
     sleep(5);
     system("CLS");
    }

}

}

void Main_menu_diplay()
{
    cout<<"Please enter your desired option."<<endl<<endl;
    cout<<"1. Update"<<endl;
    cout<<"2. Exit."<<endl;

}



int main(){


    cout<<"Please initialize the array with 10 elements"<<endl;

     for (int i = 0; i<10; i++)
    {
        cin>>myarr[i];

    }

while(main_menu_check == 20)
{
int Main_menu_option;
Main_menu_diplay();
cin>>Main_menu_option;


 if(Main_menu_option == 1){Update(); }
else if (Main_menu_option == 2){main_menu_check= -1; cout<<"Thank you for using our program. Fee Amanillah! :)"<<endl;
sleep(5); }
system("CLS");

}

return 0;
}
