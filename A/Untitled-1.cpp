#include <iostream>
using namespace std;

struct user
{
    string name;
    int pin;
    float deposit;
};

void create_new_account(user user[], int& count)
{
    string name;
    cout << "ENTER USER NAME : ";
    cin >> user[count].name;
    cout << "ENTER PIN  :";
    cin >> user[count].pin;
    cout << "ENTER  DEPOSIT :";
    cin >> user[count].deposit;
    count++;


}

void view_balance(user user[], int looged_inuser)
{
    
    {
        cout << "user balance  : L.E" << user[looged_inuser].deposit << endl;

    }
   
   
}

int log_in(user user[], int& count)
{
    string name;
    cout << "ENTER user name : ";
    cin >> name;
    int pin;
    cout << "ENTER PIN : ";
    cin >> pin;

    for (int i = 0; i < count; i++)
    {

        if (user[i].name == name && user[i].pin == pin)
        {
            cout << "Login successful! \n";
            return i;
        }
    }
    cout << "Invalid information \n ";
    cout << "please try again \n ";

    return -1;

}

void transfer_money(user user[], int count, int looged_inuser) {
    if (looged_inuser == -1) {
        cout << "You must log in first to transfer money.\n";
        return;
    }

    string receiverName;
    float amount;
    int receiverIndex = -1;

    cout << "Enter the recipient's username: ";
    cin >> receiverName;

    
    for (int i = 0; i < count; i++) {
        if (user[i].name == receiverName) {
            receiverIndex = i;
            break;
        }
    }

    
    if (receiverIndex == -1) {
        cout << "Error: Recipient not found.\n";
        return;
    }

    
    if (receiverIndex == looged_inuser) {
        cout << "Error: You cannot transfer money to yourself.\n";
        return;
    }

   
    cout << "Enter transfer amount: ";
    cin >> amount;

  
    if (amount <= 0) {
        cout << "Error: Amount must be greater than zero.\n";
        return;
    }

    
    if (amount > user[looged_inuser].deposit) {
        cout << "Error: Insufficient balance.\n";
        return;
    }

   
    user[looged_inuser].deposit -= amount;
    user[receiverIndex].deposit += amount;

    cout << "Transfer successful! $" << amount << " sent to " << user[receiverIndex].name << ".\n";
    cout << "Your new balance: $" << user[looged_inuser].deposit << endl;
}

void change_pin(user user[], int looged_inuser) {
    if (looged_inuser == -1) {
        cout << "Error: You must log in first to change your PIN.\n";
        return;  
    }

    int oldPin, newPin, confirmPin;
    int attempts = 3;

   
    while (attempts > 0) {
        cout << "Enter your current PIN: ";
        cin >> oldPin;

        if (oldPin == user[looged_inuser].pin) {
            break;  
        }
        else {
            attempts--;
            cout << "Incorrect PIN. Attempts left: " << attempts << endl;
        }

        if (attempts == 0) {
            cout << "Too many incorrect attempts. Returning to the main menu.\n";
            return;
        }
    }

    cout << "Enter new PIN (must be at least 4 digits and different from old PIN): ";
    cin >> newPin;

    if (newPin == oldPin)
    {
        cout << "Error: New PIN cannot be the same as the old one.\n";
        return;
    }
    if (newPin < 1000 || newPin > 9999) {
        cout << "Error: PIN must be at least 4 digits.\n";
        return;
    }
    cout << "Confirm new PIN: ";
    cin >> confirmPin;

    if (newPin != confirmPin) {
        cout << "Error: PIN confirmation does not match.\n";
        return;
    }
    user[looged_inuser].pin = newPin;
    cout << "PIN successfully changed!\n";
}

void calculate_interest(user users[], int looged_inuser)
    {
    if (looged_inuser == -1) {
        cout << "Error: You must log in first to check interest.\n";
        return;
    }

    float balance = users[looged_inuser].deposit;
    float interestRate = 0.05;

    cout << "\nYear | Balance Before | Interest Amount | Total Balance\n";
    cout << "------------------------------------------------------\n";

    for (int year = 1; year <= 5; year++) {
        float interest = balance * interestRate; 
        float newBalance = balance + interest;   

       
        cout << " " << year << "   |   " << balance << "    |    " << interest << "    |    " << newBalance << endl;

        balance = newBalance; 
    }
}








int choice;
int main()
{
    cout << "welcome to The Bank Bank \n";
    cout << "please insert your card \n ";

    user user[10000];
    int count = 0;
    int looged_inuser = -1;
    do
    {

        cout << "1.Create new account\n";
        cout << "2.log in \n ";
        cout << "3.view balance \n ";
        cout << "4.cash deposit \n ";
        cout << "5.cash withdraw \n ";
        cout << "6.Transfer Money\n";
        cout << "7.change pin \n ";
        cout << "8.calculate_interest\n";
        cout << "9.sign out  \n ";
        cout << "10.exit  \n ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            create_new_account(user, count);
            break;
        case 2:
            looged_inuser = log_in(user, count);

            break;
        case 3:
        {
            if (looged_inuser == -1)
            {
                cout << "you must log in first to view your balance \n";
            }
            else
            {
                view_balance(user, looged_inuser);

            }
        }
        break;
        case 4:
        {
            if (looged_inuser == -1)
            {
                cout << "You must log in first to deposit cash.\n";
            }
            else {
                float amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                user[looged_inuser].deposit += amount;
                cout << "Deposit successful! New balance: L.E" << user[looged_inuser].deposit << endl;
            }
        }
        break;
        case 5:
        {
            if (looged_inuser == -1)
            {
                cout << "You must log in first to withdraw cash.\n";
            }
            else
            {

                float amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > user[looged_inuser].deposit)
                {
                    cout << "Error please try again \n ";
                    cout << "the amount you entered is more than your current balance.\n";
                }
                else
                {
                    user[looged_inuser].deposit -= amount;
                    cout << "Withdrawal successful! New balance: $" << user[looged_inuser].deposit << endl;
                }
            }
        }
        break;
        case 6:
            transfer_money(user, count, looged_inuser);
            break;
        case 7:
           change_pin(user, looged_inuser);
            break;
        case 8:  
            calculate_interest(user, looged_inuser);
            break;



        case 9:
            system("exit");
            break;
        case 10:
            char exitConfirm;
            cout << "Are you sure you want to exit? (Y/N): ";
            cin >> exitConfirm;

            if (exitConfirm == 'Y' || exitConfirm == 'y') {
                cout << "Take your card.\n";
                cout << "Thanks for using The Bank Bank! 😊\n";
                exit(0);
            }
            else {
                cout << "Returning to menu...\n";
            }
            break;


        default:
            cout << "invaild choice \n ";
        }
    } while (choice != 7);
    return 0;
}
