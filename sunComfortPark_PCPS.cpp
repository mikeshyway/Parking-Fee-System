/******************************************************************************

C++ SOURCE CODE 

*******************************************************************************/
#include <iostream> 

using namespace std; 

int main() 

{ 

    //Initialize Value 

    int x, P_P, hours, fees; 

    //Input Value for Parking Detail 

    cout<< "Sunway Parking System"; 

    cout<<"\nEnter 1 for Weekdays"; 

    cout<<"\nEnter 2 for Weekends, Eve of Public holidays & Public holidays"; 

    cout<<"\nEnter 3 for Preferred parking"; 

    cout<<"\nEnter 4 for Lost ticket"; 

    cout<<"\nEnter 5 for Valet and Outside parking"; 

    cout<<"\nPlease enter your number:"; 

    cin>>x; 

 

    //Function of Cases 

    //Case 1: Parking Rate of Weekdays 

    //Case 2: Parking Rate of Weekends, Eve Public Holidays & Public Holidays 

    //Case 3: Preferred Parking 

    //Case 4: Lost Ticket Penalty 

    //Case 5: Valet & Outside Parking 

     

    //Validation for Input Value 

    if (x < 1 || x > 5) 

    { 

        cout<<"Please enter the correct number"; 

    } 
    
    //Process & Output 

    switch(x) 

    { 

        //Case 1: Parking Rate of Weekdays 

        case 1: 

        cout<<"How many hours you parked?"; 

        cin>>hours; 
        
        if(hours < 1 || hours > 24)
        {
            cout<<"Please enter the correct number";
            break;
        }


        if (hours == 1 || hours == 2) 

        { 

            fees = 2; 

        } 

        if (hours >= 3) 

        { 

            fees = hours; 

        } 

        if (fees >= 12) 

        { 

            fees = 12; 

        } 

        cout<<"Fees you should pay: RM"<<fees<<endl; 

        break; 

         

        //Case 2: Parking Rate of Weekends, Eve Public Holidays & Public Holidays 

        case 2: 

        cout<<"How many hours you parked?"; 

        cin>>hours;
        
        if(hours < 1 || hours > 24)
        {
            cout<<"Please enter the correct number";
            break;
        }

        if(hours == 1 || hours == 2) 

        { 

            fees = 3; 

        } 

        if(hours >=3) 

        { 

            fees = hours + 1; 

        } 

        if(fees >= 15) 

        { 

            fees = 15; 

        } 

        cout<<"Fees you should pay:RM"<<fees<<endl; 

        break; 
        
        //Case 3: Perferred Parking 

        case 3: 

        cout<<"1 for Weekdays"; 

        cout<<"\n2 for Weekends"; 

        cout<<"\nPlease enter the number:"; 

        cin>>P_P; 

        if(P_P != 1 && P_P !=2) 

        { 

            cout<<"Please enter the correct number"<<endl; 

            break; 

        } 

        cout<<"How many hours you parked?"; 

        cin>>hours; 
        
        if(hours < 1 || hours > 24)
        {
            cout<<"Please enter the correct number";
            break;
        }

        if (hours == 1 || hours == 2 ) 

        { 

            fees = 5; 

        } 

        if (hours >= 3) 

        { 

            fees = hours + 3; 

        } 

        switch(P_P) 

        { 
            //Weekdays in Case 3: Perferred Parking
            case 1: 

            if (fees >= 12) 

            { 

                fees = 12; 

            } 
    
            break; 

            //Weekends in Case 3: Perferred Parking
            case 2: 

            if (fees >= 15) 

            { 

                fees = 15; 

            } 

            break; 

        } 

        cout<<"Fees you should pay: RM"<<fees<<endl; 

        break; 
        
        
        //Case 4: Lost Ticket Penalty 

        case 4: 

        cout<<"Lost ticket penalty fee: RM20"; 

        break; 

         

        //Case 5: Valet & Outside Parking 

        case 5: 

        cout<<"Valet and Outside Parking per entry: RM15"; 

        break; 

    } 

  

    return 0; 

} 