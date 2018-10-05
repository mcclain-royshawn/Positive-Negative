//Comment

//Header
        #include<iostream>
        using namespace std;

//Global Functions

//Function Declaration

//Main Function
       int main()
       {
//Local Variables

        int integer;
        float number;

//Code           
        
         cout<<"Enter an integer: ";
         cin>>integer;
         
         if (integer>=0)
         {
                       cout<<"You entered a positive integer: "<<integer<<endl;
                       }
           
         else
         {
                       cout<<"You entered a negative integer: "<<integer<<endl;
                       }  
           
         cout<<"Enter an number: ";
         cin>>number;
         
         if (number>=0.0)
         {
                        
                       cout<<"You entered a positive number: "<<number<<endl;
                       }
           
         else
         {
                       cout<<"You entered a negative number: "<<number<<endl;
                       }
         
           system ("pause");
           return 0;
           }
