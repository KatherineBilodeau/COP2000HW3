// Katherine_Bilodeau_HW_3_COP2000

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
bool is_menu_choice_valid (int);
int getInput();
void calculateMembershipDues(float);

int main ()
{
  const float gold_apr   = 0.01;
  const float silver_apr = 0.02;
  const float bronze_apr = 0.04;
   
      
    switch (getInput())
    {
        //gold level
        case 1:
        {
            calculateMembershipDues(gold_apr);
            break;
        }
        //silver level
        case 2:
        {
            calculateMembershipDues(silver_apr);
            break;
        }
        //bronze level
        case 3:
        {
           calculateMembershipDues(bronze_apr);
           break;
        }
        //quit
        case 4:
        {
            cout << "Thank you for using Rhonda's Fee Calculator. " << endl;
            break;
        }
        
    }
    
    

        return 0;
}
void calculateMembershipDues(float apr)
{
  const int min_number_years = 1 ;
  const int max_number_years = 10 ; 
  int number_of_years;

  const float base_cost_of_membership = 1200.00;
  float cost_per_year=0;
  
  float running_total = 0;

  for (int current_year = min_number_years; current_year <= max_number_years; current_year++)
  {
        //calcuation
        cout << "Year " <<setw (2) << current_year << " $ " << setprecision (2) << fixed << base_cost_of_membership*(1+(apr*current_year)) << endl; 
     
  }
}

int getInput()
{    
     int menu_input;
    input: 
    cout << "What membership level are you: " << endl;
    cout << "Press 1 for Gold Membership"     << endl;
    cout << "Press 2 for Silver Membership"   << endl;
    cout << "Press 3 for Bronze Membership"   << endl;
    cout << "Press 4 to Quit"                 << endl;
    
    cin >> menu_input;
    

    if (is_menu_choice_valid (menu_input)) 
    {
        return menu_input;
    }
    else {
        cout << "Invalid input, please try again..." << endl << endl << endl;
        goto input;
    }
}


// Funtion to Validate Input
bool is_menu_choice_valid (int menu_input)
{
    if (menu_input > 4 || menu_input < 1 ) return false;
    else return true; 
}
