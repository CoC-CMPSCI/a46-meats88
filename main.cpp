#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;

    // Use the following input format: <status> <gender> <major>
    // student female cs ; or student male math ; or nonstudent male cs ; etc.
    cin >> status >> gender >> major;

    // TODO: Determine factor based on status, gender, and major using if statements
if("student" == status){
    if(gender == "female"){
        if ("cs" == major){
            factor = 3.0;
        }else {
            factor = 1.0;
        }
    }

        else { 
            if (major == "cs"){
                factor = 2.0;
            } else{
                factor = 0.2;
            }
        }
    }
        
    else {
        if("cs" == major){factor = 0.5;}
        else{
            factor = 0.1;
        }
    }
    double finalScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    /* **************************************************
    **************************************************
    Do not change the output format. The output should be in the following format:
    Decided Factor: <factor>, Final Scholarship Amount: <finalScholarship>
    **************************************************
    ************************************************** */
    cout << "Decided Factor: " << factor << ", Final Scholarship Amount: " << finalScholarship << endl;

    return 0;
    }
