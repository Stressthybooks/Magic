#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

using namespace std;

void loadingAnimation() {
    int delay = 15; 
    int count = 0; 
    
    int numEmptyLines = 0;
    int fontSize = 16;
    int windowHeight = 25; 
    numEmptyLines = (windowHeight - 3) / 2 - fontSize / 2;
    

    for (int i = 0; i < numEmptyLines; i++) {
        cout << endl;
    }
    
    cout << "\t\t\t\t\t\t\t\t\t\t\tLoading, please wait..." << endl << endl;
    
    thread animationThread([&]() {
        while (count <= 100) {
            cout << "\r\t\t\t\t\t\t\t\t\t\t\t[";
            for (int i = 0; i < count / 5; i++) {
                cout << "#";
            }
            for (int i = 0; i < 20 - (count / 5); i++) {
                cout << "-";
            }
            cout << "] " << count << "%" << flush;
            count++;
            this_thread::sleep_for(chrono::milliseconds(delay));
        }
        cout << "\r\n\n\t\t\t\t\t\t\t\t\t\t\t         Done!       " << endl;
    });
    
   
    for (int i = 0; i < 10; i++) {
        this_thread::sleep_for(chrono::seconds(1));
    }
    animationThread.detach();
    

    for (int i = 0; i < numEmptyLines; i++) {
        cout << endl;
    }
}

struct Account {
    string username;
    string pin;
    double balance;
    double amountdue;
    double amountDue;
};

Account createAccount() {
    Account account;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tCreate an Account" << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tUsername: ";
    cin >> account.username;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tPIN (4 digits): ";
    cin >> account.pin;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tDeposit Amount: P";
    cin >> account.balance;
    system ("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\t  AAAA    CCCCCCC   CCCCCCC  OOOOOOO   UU      UU  NN      NN TTTTTTTT\n";
    cout << "\t\t\t\t\t\t\t\t\tAA    AA CC        CC       OO     OO  UU      UU  NNN     NN TTTTTTTT\n";
    cout << "\t\t\t\t\t\t\t\t\tAA    AA CC        CC       OO     OO  UU      UU  NN NN   NN    TT   \n";
    cout << "\t\t\t\t\t\t\t\t\tAAAAAAAA CC        CC       OO     OO  UU      UU  NN  NN  NN    TT   \n";
    cout << "\t\t\t\t\t\t\t\t\tAAAAAAAA CC        CC       OO     OO  UU      UU  NN   NN NN    TT   \n";
    cout << "\t\t\t\t\t\t\t\t\tAA    AA  CC       CC       OO     OO  UU      UU  NN    NNNN    TT   \n";
    cout << "\t\t\t\t\t\t\t\t\tAA    AA   CCCCCC   CCCCCCC  OOOOOOO   UUUUUUUUU   NN      NN    TT   \n\n";
    cout << "\t\t\t\t\t\t\t\t\tHH    HH    AAAA    SSSSSS   BBBBBB    EEEEEEE  EEEEEEE  NN    NN\n";
    cout << "\t\t\t\t\t\t\t\t\tHH    HH   AA  AA  SS        BB    BB  EE       EE       NNN   NN\n";
    cout << "\t\t\t\t\t\t\t\t\tHHHHHHHH  AA    AA  SSSSSS   BBBBBB    EEEEE    EEEEE    NN NN NN\n";
    cout << "\t\t\t\t\t\t\t\t\tHH    HH  AAAAAAAA       SS  BB    BB  EE       EE       NN  NNNN\n";
    cout << "\t\t\t\t\t\t\t\t\tHH    HH  AA    AA  SSSSSS    BBBBBB   EEEEEEE  EEEEEEE  NN   NNN\n\n";
    cout << "\t\t\t\t\t\t\t\t\t CCCCC  RRRRRRR  EEEEEEE     AAAAA  TTTTTTT  EEEEEEE   DDDDD   \n";
    cout << "\t\t\t\t\t\t\t\t\tCC      RR   RR  EE         AA   AA    TT    EE        DD  DD  \n";
    cout << "\t\t\t\t\t\t\t\t\tCC      RRRRRRR  EEEEE      AAAAAAA    TT    EEEEE     DD   DD \n";
    cout << "\t\t\t\t\t\t\t\t\tCC      RR  RR   EE        AA     AA   TT    EE        DD  DD  \n";
    cout << "\t\t\t\t\t\t\t\t\t CCCCC  RR   RR  EEEEEEE  AA       AA  TT    EEEEEEE   DDDDD   \n\n";
    cout << "\t\t\t\t\t\t\tTTTTTTTTT HH      HH  AAAAAA   NN      NN  KKK   KKK   YYY      YYY  OOOOOOO   UU      UU\n";
    cout << "\t\t\t\t\t\t\t   TT     HH      HH AA    AA  NNNN    NN  KKK  KKK     YYY    YYY  OO     OO  UU      UU\n";
    cout << "\t\t\t\t\t\t\t   TT     HHHHHHHHHH AAAAAAAA  NN NN   NN  KKKKKK          YYYY     OO     OO  UU      UU\n";
    cout << "\t\t\t\t\t\t\t   TT     HH      HH AA    AA  NN  NN  NN  KKK  KKK         YY      OO     OO  UU      UU\n";
    cout << "\t\t\t\t\t\t\t   TT     HH      HH AA    AA  NN    NNNN  KKK   KKK        YY       OOOOOOO    UUUUUUU \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tFFFFFFFFF  OOOOOOO   RRRRRRR\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tFF        OO     OO  RR   RR\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tFFFFFF    OO     OO  RRRRRRR\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tFF        OO     OO  RR  RR\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tFF         OOOOOOO   RR   RR\n\n";
    cout << "\t\t\t\t\t\t\tTTTTTTTTT  RRRRRRRR      UU      UU   SSSSSSSS   TTTTTTTT   IIIIIII   NNN     NN   GGGGGGGG\n";
    cout << "\t\t\t\t\t\t\t   TT      RR     RR     UU      UU  SS             TT         II     NNNN    NN  GG       \n";
    cout << "\t\t\t\t\t\t\t   TT      RRRRRRRR      UU      UU   SSSSSSSS      TT         II     NN NN   NN  GG   GGGG \n";
    cout << "\t\t\t\t\t\t\t   TT      RR  RR        UU      UU          SS     TT         II     NN  NN  NN  GG     GG\n";
    cout << "\t\t\t\t\t\t\t   TT      RR    RR       UUUUUUUU    SSSSSSSS      TT      IIIIIII   NN    NNNN   GGGGGGGG \n";
    return account;
}
Account login(Account accounts[], int count) {
    string username, pin;
    cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\tLogin" << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tUsername: ";
    cin >> username;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tPIN (4 digits): ";
    cin >> pin;
    for (int i = 0; i < count; i++) {
        if (accounts[i].username == username && accounts[i].pin == pin) {
            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tLogin successful!" << endl;
            return accounts[i];
        }
    }
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tLogin failed. Please try again." << endl;
    return Account();
}

void deposit(Account& account) {
    double amount;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tDeposit Money" << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tCurrent balance: P" << account.balance << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tAmount to deposit: P";
    cin >> amount;

    // Update balance
    account.balance += amount;

    // Generate and display receipt
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tDeposit successful!" << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tReceipt:" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tAccount Holder: " << account.username << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tTransaction Type: Deposit" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tAmount: P" << amount << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tNew Balance: P" << account.balance << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
}

void withdraw(Account& account) {
    double amount;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tWithdraw Money" << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tCurrent balance: P" << account.balance << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tAmount to withdraw: P";
    cin >> amount;

    // Check if withdrawal amount exceeds balance
    if (amount > account.balance) {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tWithdrawal failed. Insufficient funds." << endl;
    } else {
        // Update balance
        account.balance -= amount;

        // Generate and display receipt
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tWithdrawal successful!" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tReceipt:" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tAccount Holder: " << account.username << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tTransaction Type: Withdrawal" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tAmount: P" << amount << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tNew Balance: P" << account.balance << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
    }
}

void balanceInquiry(Account account) {
cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tBalance Inquiry" << endl;
cout << "\n\t\t\t\t\t\t\t\t\t\t\tCurrent balance: $" << account.balance << endl;
}

void loan(Account& account) {
    double finaldue;
    double loanAmount;
    int lc;
    double payment;

    	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tLoan" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t1.Loan" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t2.Loan Payment" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
		cin >> lc;
		system("cls");
switch (lc)
{
    case 1:
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tLoan Application" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tAmount to loan: P";
        cin >> loanAmount;

        // Calculate interest based on loan amount
        double interestRate = 0.03; // 3% interest rate for loan amounts below 10,000
        if (loanAmount >= 10000) {
            interestRate = 0.05; // 5% interest rate for loan amounts of 10,000 and above
        }
        double interest = loanAmount * interestRate;
        finaldue = loanAmount + interest;

        // Get loan date and contact number
        string loanDate, contactNumber;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tLoan Date (YYYY-MM-DD): ";
        cin >> loanDate;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tContact Number: ";
        cin >> contactNumber;

        // Calculate due date for the loan (assuming 30 days term)
        int loanTerm = 30;
        string dueDate = loanDate;
        dueDate.replace(8, 2, to_string(stoi(loanDate.substr(8, 2)) + loanTerm));

        system("cls");
        // Generate and display loan receipt
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tLoan application successful!" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tReceipt:" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tAccount Holder";
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tName: " << account.username << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tContact Number: " << contactNumber << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tLoan Amount: P" << loanAmount << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tInterest Rate: " << interestRate * 100 << "%" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tInterest: P" << interest << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tTotal Due: P" << finaldue << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tLoan Date: " << loanDate << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tDue Date: " << dueDate << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
        }
        break;

        case 2:
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tLoan Payment" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tAmount Due: " << finaldue << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Payment Amount: P";
        cin >> payment;
        while (payment < finaldue) {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tPlease enter a valid payment amount greater than or equal to the amount due." << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Payment Amount: P";
            cin >> payment;
        }
        account.balance -= payment;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tPayment successful!" << endl;
        system("cls");
        // Generate and display loan receipt
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tLoan payment successful!" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tReceipt:" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tAccount Holder";
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tName: " << account.username << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tLoan Amount: P" << finaldue << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tRemaining Balance: P" << account.balance << endl;
    }
    break;
}

    }

		
            		

void loanPay(Account& account) {
    double amountdue;
    amountdue = account.amountdue;
    
}
void bankingSystem() {
const int MAX_ACCOUNTS = 10;
Account accounts[MAX_ACCOUNTS];
int accountCount = 0;
bool loggedIn = false;
Account currentAccount;


while (true) {
    system("cls");
    cout << "\n\n\t\t\t\t\tWW       WW  EEEEEEE  LL       CCCCCCC  OOOOOOO   MM      MM  EEEEEEE    TTTTTTTT  OOOOOOO     CCCCCCC  BBBBBBB   BBBBBBB\n";
    cout << "\t\t\t\t\tWW       WW  EE       LL      CC       OO     OO  MMMM  MMMM  EE            TT    OO     OO   CC        BB    BB  BB    BB\n";
    cout << "\t\t\t\t\tWW   W   WW  EEEEE    LL     CC        OO     OO  MM MMMM MM  EEEEE         TT    OO     OO   CC        BBBBBBB   BBBBBBB\n";
    cout << "\t\t\t\t\t WW WWW WW   EE       LL      CC       OO     OO  MM  MM  MM  EE            TT    OO     OO   CC        BB    BB  BB    BB\n";
    cout << " \t\t\t\t\t  WW   WW    EEEEEEE  LLLLLLL  CCCCCCC  OOOOOOO   MM  MM  MM  EEEEEEE       TT     OOOOOOO     CCCCCCC  BBBBBBB   BBBBBBB\n";
    cout << "\t\t\t\t\t===========================================================================================================================\n";
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t1. Create an Account" << endl;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t2. Login" << endl;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t3. Exit" << endl;
    int choice;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice (1-3): ";
    cin >> choice;
    cout << "\n\t\t\t\t\t\t\t\t\t\t Press any key to continue";
    getch();
    system("cls");

    if (choice == 1) {
        if (accountCount < MAX_ACCOUNTS) {
            accounts[accountCount] = createAccount();
            accountCount++;
        } else {
            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tAccount limit reached. Cannot create new account." << endl;
        }
        system("pause");
    } else if (choice == 2) {
        currentAccount = login(accounts, accountCount);
        if (currentAccount.username != "") {
            loggedIn = true;
        }
        system("pause");
    } else if (choice == 3) {
        break;
    } else {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid choice. Please try again." << endl;
        system("pause");
    }

    while (loggedIn) {
        system("cls");
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tMM       MM  EEEEEEE  NN      NN  UU    UU\n";
        cout << "\t\t\t\t\t\t\t\t\t\tMMM     MMM  EE       NNNN    NN  UU    UU\n";
        cout << "\t\t\t\t\t\t\t\t\t\tMM MM MM MM  EEEEE    NN NN   NN  UU    UU\n";
        cout << "\t\t\t\t\t\t\t\t\t\tMM  MMM  MM  EE       NN  NN  NN  UU    UU\n";
        cout << "\t\t\t\t\t\t\t\t\t\tMM       MM  EEEEEEE  NN    NNNN   UUUUUU\n\n";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tWelcome, " << currentAccount.username << "!" << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t1. Deposit Money" << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t2. Withdraw Money" << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t3. Balance Inquiry" << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t4. Loan" <<endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t5. LoanPay" <<endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t6. Logout" << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t7. Exit" << endl;
        int choice;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tEnter your choice (1-7):  ";
        cin >> choice;

        switch (choice)
        {
		case 1:
		{
        	system ("cls");
            deposit(currentAccount);
            system("pause");
        }
        break;
        
      	case 2:
		{
        	system ("cls");
            withdraw(currentAccount);
            system("pause");
        }
		break; 
		
		case 3: 
		{
        	system ("cls");
            balanceInquiry(currentAccount);
            system("pause");
        } 
        break;
        
        case 4:
        {
        	system("cls");
        	loan(currentAccount);
        	system("pause");
		}
		break;
        
        case 5:
        {
        	system("cls");
        	loanPay(currentAccount);
        	system("pause");
		}
		break;
		
		case 6: 
		{
            loggedIn = false;
            currentAccount = Account();
            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tLogged out successfully!" << endl;
            system("pause");
        } 
		break;
		
		case 7: 
		{
            loggedIn = false;
            currentAccount = Account();
            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tThank you for trusting us. Goodbye!" << endl;
            loadingAnimation();
            break;
        }
		break;
		
		default: 
		{
            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid choice. Please try again." << endl;
            system("pause");
      	}
      	break;
      	
  		}
    }
  }
}
int main()
{
loadingAnimation();
bankingSystem();
return 0;
}