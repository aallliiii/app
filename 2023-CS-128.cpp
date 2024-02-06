// all the header files
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <windows.h>
// namespace
using namespace std;
// all function prototypes
void viewMembers(string name[], int age[], float height[], float weight[], string memberusername[], int &countMember, int xPosition, int yPosition);
void header(int xPosition, int yPosition);
int menuAdmin(int xPosition, int yPosition);
void memberRegistration(string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[], int &countMember, int xPosition, int yPosition,string usernameadmin[],int countsign);
void employeeRegistration(string employeeName[], int employeeAge[], string working[], int employeeSalary[], int &countEmployee, int xPosition, int yPosition);
void person(int xPosition, int yPosition);
void billing(int xPosition, int yPosition);
void facility_management(string broken[], string awaiting[], int &countBroken, int &countAwaiting, int xPosition, int yPosition);
void optionadmin(int number, string usernameadmin[], string passwordadmin[], string category[], string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[], string employeeName[], int employeeAge[], string working[], string broken[], string awaiting[], int &passwordchange, int &countMember, int &countEmployee, int &countBroken, int &countAwaiting, int xPosition, int yPosition, int employeeSalary[],int countsign);
int menuTrainer(int xPosition, int yPosition);
void viewEmployees(string employeeName[], int employeeAge[], string working[], int &countEmployee, int xPosition, int yPosition, int employeeSalary[]);
void viewBroken(string broken[], int &countBroken, int xPosition, int yPosition);
void viewAwaiting(string awaiting[], int &countAwaiting, int xPosition, int yPosition);
void gotoxy(int x, int y);
void optionTrainer(int number, string usernameadmin[], string passwordadmin[], string category[], string name[], int age[], float height[], float weight[], string dietm[], string dieta[], string dietn[], string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], string memberusername[], string memberPassword[], int &passwordchange, int &countMember, int &countEmployee, int &countDiet, int &countWorkout, int xPosition, int yPosition,int countsign);
void lines(int xPosition, int yPosition);
void memberUpDate(string name[], int age[], float height[], float weight[], int xPosition, int yPosition, string memberUsername[], string memberPassword[], int countMember);
void footertrainer(int xPosition, int yPosition);
void EmployeeUpdate(string employeeName[], int employeeAge[], string working[], int xPosition, int yPosition, int employeeSalary[]);
void diet(string dietm[], string dieta[], string dietn[], int &countDiet, int xPosition, int yPosition);
void updateDiet(string dietm[], string dieta[], string dietn[], int xPosition, int yPosition);
void viewDiet(string dietm[], string dieta[], string dietn[], int &countDiet, int xPosition, int yPosition);
void addWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &countWorkout, int xPosition, int yPosition);
void viewWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &countWorkout, int xPosition, int yPosition);
void updateWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int xPosition, int yPosition);
void adminheader(int xPosition, int yPosition);
void headersign(int xPosition, int yPosition);
void loginHeader(int xPosition, int yPosition);
void optionMember(int number, string dietm[], string dieta[], string dietn[], string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], string memberPassword[], string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[], int &passwordchangemember, int &countDiet, int &countWorkout, int &selectw, int &selectd, int &countprogess, int xPosition, int yPosition, string name[], int age[], float height[], float weight[], string memberusername[], string memberpassword[]);
int menumember(int xPosition, int yPosition);
void selectdiet(string dietm[], string dieta[], string dietn[], int &countDiet, int &selectd, int xPosition, int yPosition);
int arrow(int increase, int size, int arrowx, int arrowy);
void changepassword(int idx, string usernameadmin[], string passwordadmin[], string category[], int xPosition, int yPosition);
bool checkString(string array[], int countsign, string check);
void changepasswordmember(int idx, string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[], int xPosition, int yPosition);
void viewSelectedDiet(string dietm[], string dieta[], string dietn[], int &selectd, int xPosition, int yPosition);
void viewworkouts(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &selectw, int xPosition, int yPosition);
void selectWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &countWorkout, int &selectw, int xPosition, int yPosition);
void progress(string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[], int &countprogess, int xPosition, int yPosition);
void viewProgress(string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[], int &countprogess, int xPosition, int yPosition);
int validation_int(int x, int y, int c, int d);
float validation_float(int x, int y, int c, int d);
void assignValueMember(string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[]);
void updateValueMember(string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[]);
string getField(string record, int field);
bool integerCheck(string check);
bool floatCheck(string check);
void assignValueLogin(string usernameadmin[], string passwordadmin[], string cateory[]);
int arraySize(string size[]);
void updatePasswordadmin(string usernameadmin[], string passwordadmin[], string category[]);
void assignValueEmployee(string employeeName[], int employeeAge[], string working[], int employeeSalary[]);
void updateValueEmployee(string employeeName[], int employeeAge[], string working[], int employeeSalary[]);
void assignValueDiet(string dietm[], string dieta[], string dietn[]);
void updateValueDiet(string dietm[], string dieta[], string dietn[]);
void assignValueWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[]);
void updateValueWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[]);
void assignValueprogress(string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[]);
void gymlines(int xPosition, int yPosition);
void logininsert(int xPosition, int yPosition);
void signupinsert(int xPosition, int yPosition);
void printPerson();
void slogan();
void removeEmployee(string employeeName[], int employeeAge[], string working[], int employeeSalary[], int &countEmployee, int xPosition, int yPosition);
void removeMember(string name[], int age[], float height[], float weight[], int xPosition, int yPosition, string memberUsername[], string memberPassword[], int &countMember);
void assignValueBroken(string broken[]);
void assignValueAwaiting(string awaiting[]);
bool enter(string input);
bool space(string input);
// main function of the program
main()

{
    // handle to change color
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    //arrays and variables declaration to store data 
    int loginAgain;
    string usernameadmin[1000]; 
    string passwordadmin[1000];
    string memberusername[1000];
    string memberPassword[1000];
    string employeeName[1000];
    int employeeAge[1000];
    string working[1000];
    int employeeSalary[1000];
    string category[1000];
    string name[1000];
    int age[1000];
    float height[1000];
    float weight[1000];
    string dietm[1000];
    string dieta[1000];
    string dietn[1000];
    string monday1[1000];
    string tuesday1[1000];
    string wednesday1[1000];
    string thursday1[1000];
    string friday1[1000];
    string saturday1[1000];
    string sunday1[1000];
    string broken[1000];
    string awaiting[1000];
    string monday_progress[1000];
    string tuesday_progress[1000];
    string wednesday_progress[1000];
    string thursday_progress[1000];
    string friday_progress[1000];
    string saturday_progress[1000];
    string sunday_progress[1000];
    string username;
    string password;
    string item;
     // counter variables to store data in the arrays
    int countEmployee = 0;
    int countMember = 0;
    int countBroken = 0;
    int countAwaiting = 0;
    int countsign = 0;
    int countDiet = 0;
    int countWorkout = 0;
    int countprogess = 0;
    int selectd = 0;
    int selectw = 0;
    int xPosition = 45;
    int yPosition = 14;
    fstream login;
    string loginFile = "login.txt";
    // function to assign values to arrays from files
    assignValueLogin(usernameadmin, passwordadmin, category);
    assignValueMember(name, age, height, weight, memberusername, memberPassword);
    assignValueEmployee(employeeName, employeeAge, working, employeeSalary);
    assignValueDiet(dietm, dieta, dietn);
    assignValueWorkout(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1);
    assignValueprogress(monday_progress, tuesday_progress, wednesday_progress, thursday_progress, friday_progress, saturday_progress, sunday_progress);
    assignValueBroken(broken);
    assignValueAwaiting(awaiting);
    // initializing counter variables
    countMember = arraySize(name);
    countsign = arraySize(usernameadmin);
    countEmployee = arraySize(employeeName);
    countDiet = arraySize(dietm);
    countWorkout = arraySize(monday1);
    countBroken = arraySize(broken);
    countAwaiting = arraySize(awaiting);
    // adding animation to the code
    system("color 0B");
    system("Cls");
    header(xPosition, yPosition);
    printPerson();
    slogan();
    Sleep(1000);
    // main while loop
    while (1)
    {
        // main start menu
        int loginoption = 0;
        int answer = 0;
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        person(xPosition, yPosition);
        gymlines(xPosition, yPosition);
        

        // answer is a function that returns number of the option selected
        answer = arrow(3, 3, 65, 14); 

        // loginoption is used to in if to transfer the control to either login menu, exit menu or to exit the program
        loginoption = answer;    
        if (loginoption == 1)
        {
            while (1)
            {
                int again = 0;
                system("Cls");

                // print header

                header(xPosition, yPosition);
                lines(xPosition, yPosition);
                loginHeader(xPosition, yPosition);

                // variable declaration

                string answer = "hello";
                int countuser = 0;
                int countsignmember = 0;
                int passwordchange = 0;
                int passwordchangemember = 0;
                loginHeader(xPosition, yPosition);
                logininsert(xPosition, yPosition);

                // this while loop does not allow the 
                // user to enter space input or empty input
                // this logic is used several times in the program

                while (true)
                {
                    gotoxy(xPosition + 45, yPosition + 4);
                    getline(cin, username);
                    gotoxy(xPosition + 45, yPosition + 4);
                    if (enter(username) && space(username))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition + 4);
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition + 4);
                    }
                }
                while (true)
                {
                    gotoxy(xPosition + 45, yPosition + 5);
                    getline(cin, password);
                    if (enter(password) && space(password))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition + 5);
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition + 5);
                    }
                }

                // loop to find the index number in which the entered username 
                // is stored (for member)

                for (int a = 0; a < countMember; a++)
                {
                    if (memberusername[countsignmember] == username)
                    {
                        break;
                    }

                    countsignmember++;
                    passwordchangemember = countsignmember;
                }

                // loop to find the index number in which the entered username 
                // is stored (for admin and trainer)

                for (int i = 0; i < countsign; i++)
                {
                    if (usernameadmin[countuser] == username)
                    {
                        break;
                    }
                    countuser++;
                    passwordchange = countuser;
                }

                // checks what is the entered category
                // for further processing

                if (username == usernameadmin[countuser] && password == passwordadmin[countuser] && category[countuser] == "admin")
                {
                    answer = "admin";
                }
                else if (username == usernameadmin[countuser] && password == passwordadmin[countuser] && category[countuser] == "trainer")
                {
                    answer = "trainer";
                }
                else if (username == memberusername[countsignmember] && password == memberPassword[countsignmember])
                {
                    answer = "member";
                }

                // this part of the program transfer the control to either
                // admin function, trainer function or member function

                int select;
                string type;

                system("Cls");
                header(xPosition, yPosition);
                lines(xPosition, yPosition);
                type = answer;
                if (type == "admin")
                {
                    // admin menu 

                    while (1)
                    {
                        system("Cls");
                        header(xPosition, yPosition);
                        lines(xPosition, yPosition);
                        select = menuAdmin(xPosition, yPosition);
                        if (select == 11)
                        {
                            break;
                        }
                        else if (select == 12)
                        {
                            again = 1;
                            break;
                        }
                        optionadmin(select, usernameadmin, passwordadmin, category, name, age, height, weight, memberusername, memberPassword, employeeName, employeeAge, working, broken, awaiting, passwordchange, countMember, countEmployee, countBroken, countAwaiting, xPosition, yPosition, employeeSalary,countsign);
                    }
                }
                else if (type == "trainer")
                {
                    while (1)
                    {
                        // trainer menu 

                        system("Cls");
                        header(xPosition, yPosition);
                        select = menuTrainer(xPosition, yPosition);
                        if (select == 12)
                        {
                            break;
                        }
                        else if (select == 13)
                        {
                            again = 1;
                            break;
                        }
                        optionTrainer(select, usernameadmin, passwordadmin, category, name, age, height, weight, dietm, dieta, dietn, monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, memberusername, memberPassword, passwordchange, countMember, countEmployee, countDiet, countWorkout, xPosition, yPosition,countsign);
                    }
                }
                else if (type == "member")
                {
                    while (1)
                    {
                        // member menu 

                        system("Cls");
                        header(xPosition, yPosition);
                        select = menumember(xPosition, yPosition);
                        if (select == 9)
                        {
                            break;
                        }

                        if (select == 10)
                        {
                            again = 1;
                            break;
                        }
                        optionMember(select, dietm, dieta, dietn, monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, memberPassword, monday_progress, tuesday_progress, wednesday_progress, thursday_progress, friday_progress, saturday_progress, sunday_progress, passwordchangemember, countDiet, countWorkout, selectw, selectd, countprogess, xPosition, yPosition, name, age, height, weight, memberusername, memberPassword);
                    }
                }
                else
                {

                    // this part of the program executes when the user enters the wrong 
                    // credentials 

                    system("Cls");
                    header(xPosition, yPosition);
                    lines(xPosition, yPosition);
                    gotoxy(xPosition + 15, yPosition);
                    SetConsoleTextAttribute(c, 12);
                    cout << "INVALID USERNAME OR PASSWORD..";
                    SetConsoleTextAttribute(c, 11);
                    gotoxy(xPosition + 15, yPosition + 3);
                    cout << "Would you like to login again...";
                    gotoxy(xPosition + 15, yPosition + 6);
                    cout << "CONTINUE";
                    gotoxy(xPosition + 15, yPosition + 7);
                    cout << "EXIT";

                    loginAgain = arrow(1, 2, xPosition + 5, yPosition + 6);

                    if (loginAgain != 1)
                    {

                        break;
                    }
                }
                if (again == 1)
                    break;
            }
        }

        // control tranfers to the signup menu
        
        else if (loginoption == 2)
        {
            // variables declaration 

            string usernamesign;
            string password;
            string type;
            string categoryv;
            string categorypassword;
            login.open(loginFile, ios::app);
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            headersign(xPosition, yPosition);
            signupinsert(xPosition, yPosition);
            while (true)
            {
                gotoxy(xPosition + 62, yPosition + 3);
                getline(cin, usernamesign);
                if (enter(usernamesign) && space(usernamesign))
                {
                    break;
                }
                else
                {
                    gotoxy(xPosition + 62, yPosition + 3);
                    cout << "                   ";
                    gotoxy(xPosition + 62, yPosition + 3);
                }
            }
            while (true)
            {
                gotoxy(xPosition + 62, yPosition + 4);
                getline(cin, password);
                if (enter(password) && space(password))
                {
                    break;
                }
                else
                {
                    gotoxy(xPosition + 62, yPosition + 4);
                    cout << "                   ";
                    gotoxy(xPosition + 62, yPosition + 4);
                }
            }
            while (true)
            {
                gotoxy(xPosition + 62, yPosition + 5);
                getline(cin, categoryv);
                if (enter(categoryv) && space(categoryv))
                {
                    break;
                }
                else
                {
                    gotoxy(xPosition + 62, yPosition + 5);
                    cout << "                   ";
                    gotoxy(xPosition + 62, yPosition + 5);
                }
            }

            if (categoryv == "admin")

            // if the entered category is admin
            // it requires for an extra signup password 
            // for security purposes
            {
                gotoxy(xPosition + 32, yPosition + 7);
                cout << "Enter admin registration password...";
                // cin >> categorypassword;
                while (true)
            {
                gotoxy(xPosition + 70, yPosition + 7);
                getline(cin, categorypassword);
                if (enter(categorypassword) && space(categorypassword))
                {
                    break;
                }
                else
                {
                    gotoxy(xPosition + 70, yPosition + 7);
                    cout << "           ";
                    gotoxy(xPosition + 70, yPosition + 7);
                }
            }
                if (categorypassword == "123")
                {
                    if (checkString(usernameadmin, countsign, usernamesign)) // checks if the username is already registered or not
                    {
                        usernameadmin[countsign] = usernamesign;
                        login << usernameadmin[countsign] << ",";
                        passwordadmin[countsign] = password;
                        login << passwordadmin[countsign] << ",";
                        category[countsign] = categoryv;
                        login << category[countsign] << endl;
                        countsign++;
                        login.close();
                    }
                    else
                    {
                        gotoxy(xPosition + 35, yPosition + 8);
                        SetConsoleTextAttribute(c, 12);
                        cout << "User Name already registered...";
                        SetConsoleTextAttribute(c, 11);
                        getch();
                    }
                }
                else
                {
                    //  if the registration password is incorrect

                    gotoxy(xPosition + 32, yPosition + 8);
                    SetConsoleTextAttribute(c, 12);
                    cout << "INCORRECT REGISTRATION PASSWORD";
                    SetConsoleTextAttribute(c, 11);
                    getch();
                }
            }
            else if (categoryv == "trainer")
            {
                if (checkString(usernameadmin, countsign, usernamesign))
                {
                    usernameadmin[countsign] = usernamesign;
                    login << usernameadmin[countsign] << ",";
                    passwordadmin[countsign] = password;
                    login << passwordadmin[countsign] << ",";
                    category[countsign] = categoryv;
                    login << category[countsign] << endl;
                    countsign++;
                    login.close();
                }
                else
                {
                    //  if the username exists already

                    gotoxy(xPosition + 35, yPosition + 7);
                    SetConsoleTextAttribute(c, 12);
                    cout << "User Name already registered...";
                    SetConsoleTextAttribute(c, 11);
                    getch();
                }
            }

            else
            { // if category selected is invalid
                gotoxy(xPosition + 35, yPosition + 7);
                SetConsoleTextAttribute(c, 12);
                cout << "INVALID CATEGORY SELECTED";
                SetConsoleTextAttribute(c, 11);
                getch();
            }
        }
        else if (loginoption == 3)
        {
            system("Cls");
            break;
        }
    }
}
// function to print intro lines for the gym
void gymlines(int xPosition, int yPosition)
{
    gotoxy(xPosition + 7, yPosition + 20);
    cout << "Welcome to ShapeUp Fitness Gym, where your journey to a healthier and stronger you ";
    gotoxy(xPosition + 7, yPosition + 21);
    cout << "begins. Our state-of-the-art facility is designed to inspire and motivate, offering a dynamic";
    gotoxy(xPosition + 7, yPosition + 22);
    cout << "space for individuals of all fitness levels. With cutting-edge equipment, expert trainers, and a ";
    gotoxy(xPosition + 7, yPosition + 23);
    cout << "supportive community, ShapeUp Fitness Gym is committed to helping you achieve your";
    gotoxy(xPosition + 7, yPosition + 24);
    cout << "fitness goals. Whether you're looking to build muscle, improve endurance, or simply lead a ";
    gotoxy(xPosition + 7, yPosition + 25);
    cout << "healthier lifestyle, we provide the tools and guidance you need. Join us at ShapeUp Fitness ";
    gotoxy(xPosition + 7, yPosition + 26);
    cout << "Gym and transform your body, mind, and life.";

    gotoxy(xPosition + 30, yPosition);
    cout << "Login...";
    gotoxy(xPosition + 30, yPosition + 3);
    cout << "SignUp...";
    gotoxy(xPosition + 30, yPosition + 6);
    cout << "Exit...";
}
// this function is used to prints the login table
void logininsert(int xPosition, int yPosition)
{
    gotoxy(xPosition, yPosition);
    cout << "                          ###########################################################                           " << endl;
    gotoxy(xPosition, yPosition + 1);
    cout << "                         #  #                                                     #  #                          " << endl;
    gotoxy(xPosition, yPosition + 2);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 3);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 4);
    cout << "                         # #  User Name:                                           # #                          " << endl;
    gotoxy(xPosition, yPosition + 5);
    cout << "                         # #   Password:                                           # #                          " << endl;
    gotoxy(xPosition, yPosition + 6);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 7);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 8);
    cout << "                         #  #                                                     #  #                          " << endl;
    gotoxy(xPosition, yPosition + 9);
    cout << "                          ###########################################################                           " << endl;
}
// this function is used to print signup table
void signupinsert(int xPosition, int yPosition)
{
    gotoxy(xPosition, yPosition);
    cout << "                          ###########################################################                           " << endl;
    gotoxy(xPosition, yPosition + 1);
    cout << "                         #  #                                                     #  #                          " << endl;
    gotoxy(xPosition, yPosition + 2);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 3);
    cout << "                         # #   User Name (Without Spaces):                         # #                          " << endl;
    gotoxy(xPosition, yPosition + 4);
    cout << "                         # #   Password (Without Spaces):                          # #                          " << endl;
    gotoxy(xPosition, yPosition + 5);
    cout << "                         # #   Category (admin/trainer):                           # #                          " << endl;
    gotoxy(xPosition, yPosition + 6);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 7);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 8);
    cout << "                         # #                                                       # #                          " << endl;
    gotoxy(xPosition, yPosition + 9);
    cout << "                         #  #                                                     #  #                          " << endl;
    gotoxy(xPosition, yPosition + 10);
    cout << "                          ###########################################################                           " << endl;
}
// gotoxy function
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
// this function gets number of the selected option from the menu function the value
// and then transfer the control accordingly 
void optionadmin(int number, string usernameadmin[], string passwordadmin[], string category[], string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[], string employeeName[], int employeeAge[], string working[], string broken[], string awaiting[], int &passwordchange, int &countMember, int &countEmployee, int &countBroken, int &countAwaiting, int xPosition, int yPosition, int employeeSalary[],int countsign)
{

    if (number == 1)
    {
        // register members
        memberRegistration(name, age, height, weight, memberusername, memberPassword, countMember, xPosition, yPosition,usernameadmin,countsign);
    }
    else if (number == 2)
    {
        // view registered members
        viewMembers(name, age, height, weight, memberusername, countMember, xPosition, yPosition);
    }
    else if (number == 3)
    {
        // update registered members
        memberUpDate(name, age, height, weight, xPosition, yPosition, memberusername, memberPassword, countMember);
    }
    else if (number == 4)
    {
        // delete members
        removeMember(name, age, height, weight, xPosition, yPosition, memberusername, memberPassword, countMember);
    }

    else if (number == 5)
    {
        // employee registration
        employeeRegistration(employeeName, employeeAge, working, employeeSalary, countEmployee, xPosition, yPosition);
    }
    else if (number == 6)
    {
        // view registered employees
        viewEmployees(employeeName, employeeAge, working, countEmployee, xPosition, yPosition, employeeSalary);
    }
    else if (number == 7)
    {
        // update registered employees
        EmployeeUpdate(employeeName, employeeAge, working, xPosition, yPosition, employeeSalary);
    }
    else if (number == 8)
    {
        // delete employees
        removeEmployee(employeeName, employeeAge, working, employeeSalary, countEmployee, xPosition, yPosition);
    }
    else if (number == 9)
    {
        // to manage gym machines
        facility_management(broken, awaiting, countBroken, countAwaiting, xPosition, yPosition);
    }
    else if (number == 10)
    {
        // to change password
        changepassword(passwordchange, usernameadmin, passwordadmin, category, xPosition, yPosition);
    }
}
// this function is used to print header
void header(int xPosition, int yPosition)
{

    int x = 35;
    int y = 1;
    gotoxy(x, y);
    cout << "  _________.__                          ____ ___          ___________.__  __                                  _____________.___.  _____   " << endl;
    gotoxy(x, y + 1);
    cout << " /   _____/|  |__ _____  ______   ____ |    |   \\______   \\_   _____/|__|/  |_  ____   ____   ______ ______  /  _____/\\__  |   | /     \\  " << endl;
    gotoxy(x, y + 2);
    cout << " \\_____  \\ |  |  \\__  \\ \\____ \\_/ __ \\|    |   /\\____ \\   |    __)  |  \\   __\\/    \\_/ __ \\ /  ___//  ___/ /   \\  ___ /   |   |/  \\ /  \\ " << endl;
    gotoxy(x, y + 3);
    cout << " /        \\|   Y  \\/ __ \\|  |_> >  ___/|    |  / |  |_> >  |     \\   |  ||  | |   |  \\  ___/ \\___ \\ \\___ \\  \\    \\_\\  \\____   /    Y    \\" << endl;
    gotoxy(x, y + 4);
    cout << "/_______  /|___|  (____  /   __/ \\___  >______/  |   __/   \\___  /   |__||__| |___|  /\\___  >____  >____  >  \\______  // ______\\____|__  /" << endl;
    gotoxy(x, y + 5);
    cout << "        \\/      \\/     \\/|__|        \\/          |__|          \\/                  \\/     \\/     \\/     \\/          \\/ \\/              \\/ " << endl
         << endl
         << endl;
}
//  this function is used to print 
//  admin menu 
int menuAdmin(int xPosition, int yPosition)
{
    adminheader(xPosition, yPosition);
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    int number = 0;

    lines(xPosition, yPosition);

    gotoxy(xPosition + 35, yPosition);
    cout << "NEW MEMBER REGISTRATION    ";
    gotoxy(xPosition + 35, yPosition + 1);
    cout << "VIEW EXISTING MEMBERS ";
    gotoxy(xPosition + 35, yPosition + 2);
    cout << "UPDATE MEMBERS  ";
    gotoxy(xPosition + 35, yPosition + 3);
    cout << "DELETE MEMBER";
    gotoxy(xPosition + 35, yPosition + 4);
    cout << "EMPLOYEE REGISTRAION ";
    gotoxy(xPosition + 35, yPosition + 5);
    cout << "VIEW EMPLOYEES       ";
    gotoxy(xPosition + 35, yPosition + 6);
    cout << "UPDATE EMPLOYEES        ";
    gotoxy(xPosition + 35, yPosition + 7);
    cout << "DELETE EMPLOYEE";
    gotoxy(xPosition + 35, yPosition + 8);
    cout << "FACILITY MANAGEMENT ";
    gotoxy(xPosition + 35, yPosition + 9);
    cout << "CHANGE PASSWORD ";
    gotoxy(xPosition + 35, yPosition + 10);
    cout << "LOGOUT ";
    gotoxy(xPosition + 35, yPosition + 11);
    cout << "HOMEPAGE                        ";

    person(xPosition, yPosition);

    // function to return the number of the selected option
    number = arrow(1, 12, 65, 14);

    return number;
}
// this function is used to register new members
void memberRegistration(string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[], int &countMember, int xPosition, int yPosition,string usernameadmin[],int countsign)
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    string passwordm;
    string usernamem;
    string nameofmember;
    fstream member;
    string fileName = "memberfile.txt";
    int ageofmember;
    float heightofmember;
    float weightofmember;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    member.open(fileName, ios::app);
    gotoxy(xPosition + 18, yPosition);
    cout << "Enter your name   : ";
    while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, nameofmember);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(nameofmember) && space(nameofmember))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    name[countMember] = nameofmember;
    member << name[countMember] << ",";
    gotoxy(xPosition + 18, yPosition + 3);
    cout << "Enter your age    : ";

    gotoxy(xPosition + 45, yPosition + 3);
    // input is entered with validation
    ageofmember = validation_int(xPosition + 45, yPosition + 4, xPosition + 45, yPosition + 3);
    age[countMember] = ageofmember;
    member << age[countMember] << ",";
    gotoxy(xPosition + 18, yPosition + 6);
    cout << "Enter your height : ";
    gotoxy(xPosition + 45, yPosition + 6);

    heightofmember = validation_float(xPosition + 45, yPosition + 7, xPosition + 45, yPosition + 6);
    height[countMember] = heightofmember;
    member << height[countMember] << ",";
    gotoxy(xPosition + 18, yPosition + 9);
    cout << "Enter you weight  : ";
    gotoxy(xPosition + 45, yPosition + 9);

    weightofmember = validation_float(xPosition + 45, yPosition + 10, xPosition + 45, yPosition + 9);
    weight[countMember] = weightofmember;
    member << weight[countMember] << ",";

    // loop for iteration
    while (1)
    {

        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 18, yPosition);
        cout << "Enter your username (without spaces) : ";
       
        while (true)
                {
                    gotoxy(xPosition + 61, yPosition );
                    getline(cin, usernamem);
                    gotoxy(xPosition + 61, yPosition );
                    if (enter(usernamem) && space(usernamem))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 61, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 61, yPosition );
                    }
                }

                // to check if the username is already registered
                // or not
        if (checkString(memberusername, countMember, usernamem)&&checkString(usernameadmin, countsign, usernamem))
        {

            memberusername[countMember] = usernamem;
            member << memberusername[countMember] << ",";
            gotoxy(xPosition + 18, yPosition + 3);
            cout << "Enter you password  : ";
            
            while (true)
                {
                    gotoxy(xPosition + 45, yPosition +3 );
                    getline(cin, passwordm);
                    gotoxy(xPosition + 45, yPosition +3);
                    if (enter(passwordm) && space(passwordm))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition +3);
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition +3);
                    }
                }
            memberPassword[countMember] = passwordm;
            member << memberPassword[countMember] << endl;
            countMember++;
            break;
        }
        // username exists already
        else
        {
            gotoxy(xPosition + 18, yPosition + 18);
            SetConsoleTextAttribute(c, 12);
            cout << "Username already exists...";
            SetConsoleTextAttribute(c, 11);
            getch();
            gotoxy(xPosition + 18, yPosition + 18);
            cout << "                          ";
        }
    }
    member.close();
}
// this function is used for employee registration
void employeeRegistration(string employeeName[], int employeeAge[], string working[], int employeeSalary[], int &countEmployee, int xPosition, int yPosition)
{
    fstream employee;
    string fileName = "employee.txt";
    employee.open(fileName, ios::app);
    string name;
    int age;
    string working_experience;
    int salary;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 18, yPosition);
    cout << "Enter name                               : ";
    while (true)
                {
                    gotoxy(xPosition + 65, yPosition );
                    getline(cin, name);
                    gotoxy(xPosition + 65, yPosition );
                    if (enter(name) && space(name))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 65, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 65, yPosition );
                    }
                }
    employeeName[countEmployee] = name;
    employee << employeeName[countEmployee] << ",";
    gotoxy(xPosition + 18, yPosition + 3);
    cout << "Enter age                                : ";
    gotoxy(xPosition + 65, yPosition + 3);

    age = validation_int(xPosition + 65, yPosition + 4, xPosition + 65, yPosition + 3);
    employeeAge[countEmployee] = age;
    employee << employeeAge[countEmployee] << ",";
    gotoxy(xPosition + 18, yPosition + 6);
    cout << "Enter previous working experience        : ";

    cin.ignore();
    gotoxy(xPosition + 65, yPosition +6 );
    getline(cin, working_experience);
    // while (true)
    //             {
    //                 gotoxy(xPosition + 65, yPosition +6 );
    //                 getline(cin, working_experience);
    //                 gotoxy(xPosition + 65, yPosition +6 );
    //                 if (enter(working_experience) && space(working_experience))
    //                 {
    //                     break;
    //                 }
    //                 else
    //                 {
    //                     gotoxy(xPosition + 65, yPosition +6 );
    //                     cout << "                          ";
    //                     gotoxy(xPosition + 65, yPosition +6 );
    //                 }
    //             }
    working[countEmployee] = working_experience;
    employee << working[countEmployee] << ",";
    gotoxy(xPosition + 18, yPosition + 9);
    cout << "Enter Salary                             : ";
    gotoxy(xPosition + 65, yPosition + 9);
    salary = validation_int(xPosition + 65, yPosition + 10, xPosition + 65, yPosition + 9);
    employeeSalary[countEmployee] = salary;
    employee << employeeSalary[countEmployee] << endl;

    countEmployee++;
    employee.close();
}
// this function is used to calculate the bill
// of the member
void billing(int xPosition, int yPosition)
{
    int months;
    string stud;
    int total;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Are you a student (Yes/No): ";
    gotoxy(xPosition + 50, yPosition);
    cin >> stud;
    gotoxy(xPosition + 15, yPosition + 5);
    cout << "Enter the number of months: ";
   
    months=validation_int(xPosition+50,yPosition+6,xPosition+50,yPosition+5);

    // to check if the member is student 
    // or not to calculate discount
    if (stud == "Yes")
    {
        total = months * 1500;
    }
    if (stud == "No")
    {
        total = months * 2500;
    }
    gotoxy(xPosition + 35, yPosition + 10);
    cout << "Your bill is " << total << " RUPEES..";
    getch();
}
// this function is used to add and view 
// the broken and awaiting machines
void facility_management(string broken[], string awaiting[], int &countBroken, int &countAwaiting, int xPosition, int yPosition)
{

    int again;
    int enter;
    string machine_name;
    fstream brokenm;
    fstream awaitingm;
    string brokenFile = "broken.txt";
    string awaitingFile = "awaiting.txt";
    brokenm.open(brokenFile, ios::app);
    awaitingm.open(awaitingFile, ios::app);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "ENTER BROKEN MACHINES      " << endl;
    gotoxy(xPosition + 15, yPosition + 2);
    cout << "ENTER AWAITING MACHINES  " << endl;
    gotoxy(xPosition + 15, yPosition + 4);
    cout << "VIEW BROKEN MACHINES  " << endl;
    gotoxy(xPosition + 15, yPosition + 6);
    cout << "VIEW AWAITING MACHINES  " << endl;
    enter = arrow(2, 4, xPosition + 5, yPosition);
    if (enter == 1)
    {
        while (1)
        {

            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter the machine name: ";

            cin.ignore();
            gotoxy(xPosition + 60, yPosition);
            getline(cin, machine_name);
            broken[countBroken] = machine_name;
            brokenm << broken[countBroken] << endl;
            countBroken++;
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "ADD ANOTHER MACHINE" << endl;
            gotoxy(xPosition + 15, yPosition + 2);
            cout << "EXIT MENU " << endl;

            again = arrow(2, 2, xPosition + 5, yPosition);
            if (again != 1)
            {
                brokenm.close();
                break;
            }
        }
    }
    else if (enter == 2)
    {
        while (1)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter the machine name: ";

            cin.ignore();
            gotoxy(xPosition + 60, yPosition);
            getline(cin, machine_name);
            awaiting[countAwaiting] = machine_name;
            awaitingm << awaiting[countAwaiting] << endl;
            countAwaiting++;
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "ADD ANOTHER MACHINE" << endl;
            gotoxy(xPosition + 15, yPosition + 2);
            cout << "EXIT MENU" << endl;
            gotoxy(xPosition + 65, yPosition + 2);
            again = arrow(2, 2, xPosition + 5, yPosition);

            if (again != 1)
            {
                awaitingm.close();
                break;
            }
        }
    }
    else if (enter == 3)
    {
        viewBroken(broken, countBroken, xPosition, yPosition);
    }
    else if (enter == 4)
    {
        viewAwaiting(awaiting, countAwaiting, xPosition, yPosition);
    }
}
// this function is used to print the menu of the trainer and return the selected option number
int menuTrainer(int xPosition, int yPosition)

{
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    person(xPosition, yPosition);
    int option;
    footertrainer(xPosition, yPosition);
    gotoxy(xPosition + 35, yPosition);
    cout << "ADD NEW MEMBERS";
    gotoxy(xPosition + 35, yPosition + 1);
    cout << "VIEW EXISTING MEMBERS ";
    gotoxy(xPosition + 35, yPosition + 2);
    cout << "UPDATE EXISTING MEMBERS ";
    gotoxy(xPosition + 35, yPosition + 3);
    cout << "DELETE MEMBER";
    gotoxy(xPosition + 35, yPosition + 4);
    cout << "ADD NEW DIET ";
    gotoxy(xPosition + 35, yPosition + 5);
    cout << "VIEW EXISTING DIET";
    gotoxy(xPosition + 35, yPosition + 6);
    cout << "UPDATE EXISTING DIET ";
    gotoxy(xPosition + 35, yPosition + 7);
    cout << "ADD NEW WORKOUT ";
    gotoxy(xPosition + 35, yPosition + 8);
    cout << "VIEW EXISTING WORKOUT ";
    gotoxy(xPosition + 35, yPosition + 9);
    cout << "UPDATE EXISTING WORKOUT";
    gotoxy(xPosition + 35, yPosition + 10);
    cout << "CHANGE PASSWORD ";
    gotoxy(xPosition + 35, yPosition + 11);
    cout << "LOGOUT ";
    gotoxy(xPosition + 35, yPosition + 12);
    cout << "HOMEPAGE";
    option = arrow(1, 13, xPosition + 25, yPosition);

    return option;
}
// this function prints the existing members on the screen
void viewMembers(string name[], int age[], float height[], float weight[], string memberusername[], int &countMember, int xPosition, int yPosition)
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);

    int i = 0;
    int b = 2;
    fstream member;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition, yPosition);
    cout << "ROLL NUMBER";
    gotoxy(xPosition + 20, yPosition);
    cout << "NAME";
    gotoxy(xPosition + 40, yPosition);
    cout << "AGE";
    gotoxy(xPosition + 60, yPosition);
    cout << "HEIGHT";
    gotoxy(xPosition + 80, yPosition);
    cout << "WEIGHT";
    gotoxy(xPosition + 100, yPosition);
    cout << "USERNAME";
SetConsoleTextAttribute(c,6);
    while (i < countMember)
    {
        gotoxy(xPosition, yPosition + b);
        cout << i + 1;

        gotoxy(xPosition + 20, yPosition + b);
        cout << name[i].substr(0, 17);
        gotoxy(xPosition + 40, yPosition + b);
        cout << to_string(age[i]).substr(0, 5);
        gotoxy(xPosition + 60, yPosition + b);
        cout << to_string(height[i]).substr(0, 5);
        gotoxy(xPosition + 80, yPosition + b);
        cout << to_string(weight[i]).substr(0, 5);
        gotoxy(xPosition + 100, yPosition + b);

        cout << memberusername[i].substr(0, 17);

        i++;
        b += 1;
    }
SetConsoleTextAttribute(c,11);
    getch();
}
// this function prints the existing employees
// on the screen
void viewEmployees(string employeeName[], int employeeAge[], string working[], int &countEmployee, int xPosition, int yPosition, int employeeSalary[])
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    int b = 2;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    int a = 0;
    gotoxy(xPosition - 20, yPosition);
    cout << "EMPLOYEE ROLL NUMBER";
    gotoxy(xPosition + 9, yPosition);
    cout << "EMPLOYEE NAME";
    gotoxy(xPosition + 38, yPosition);
    cout << "EMPLOYEE AGE";
    gotoxy(xPosition + 67, yPosition);
    cout << "EMPLOYEE WORK EXPERIENCE";
    gotoxy(xPosition + 110, yPosition);
    cout << "EMPLOYEE SALARY";
    for (int i = 0; i < countEmployee; i++)
    {
        gotoxy(xPosition - 20, yPosition + b);
        cout << i + 1;

        gotoxy(xPosition + 9, yPosition + b);
        cout << employeeName[i].substr(0, 20);
        gotoxy(xPosition + 38, yPosition + b);
        cout << to_string(employeeAge[i]).substr(0, 4);
        gotoxy(xPosition + 67, yPosition + b);
        cout << working[i].substr(0, 20);
        gotoxy(xPosition + 110, yPosition + b);
        SetConsoleTextAttribute(c, 12);
        cout << "RS " << to_string(employeeSalary[i]).substr(0, 8);
        SetConsoleTextAttribute(c, 11);
        b++;
    }

    getch();
}
// this function is used to view broken machines
void viewBroken(string broken[], int &countBroken, int xPosition, int yPosition)

{
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    int b = 2;
    gotoxy(xPosition + 15, yPosition);
    cout << "Machine Names " << endl
         << endl;
    for (int i = 0; i < countBroken; i++)
    {
        gotoxy(xPosition + 15, yPosition + b);
        cout << broken[i] << endl;
        b++;
    }

    getch();
}
// this function is used to view awaiting machines
void viewAwaiting(string awaiting[], int &countAwaiting, int xPosition, int yPosition)

{
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    int b = 2;
    gotoxy(xPosition + 15, yPosition);
    cout << "Machine Names" << endl
         << endl;
    for (int i = 0; i < countAwaiting; i++)
    {
        gotoxy(xPosition + 15, yPosition + b);
        cout << awaiting[i] << endl;
        b++;
    }

    getch();
}
// this function gets number of the selected option from the menu function the value
// and then transfer the control accordingly 
void optionTrainer(int number, string usernameadmin[], string passwordadmin[], string category[], string name[], int age[], float height[], float weight[], string dietm[], string dieta[], string dietn[], string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], string memberusername[], string memberPassword[], int &passwordchange, int &countMember, int &countEmployee, int &countDiet, int &countWorkout, int xPosition, int yPosition,int countsign)

{
    if (number == 1)
    {
        memberRegistration(name, age, height, weight, memberusername, memberPassword, countMember, xPosition, yPosition,usernameadmin,countsign);
    }
    else if (number == 2)
    {
        viewMembers(name, age, height, weight, memberusername, countMember, xPosition, yPosition);
    }
    else if (number == 3)
    {
        memberUpDate(name, age, height, weight, xPosition, yPosition, memberusername, memberPassword, countMember);
    }
    else if (number == 4)
    {
        removeMember(name, age, height, weight, xPosition, yPosition, memberusername, memberPassword, countMember);
    }
    else if (number == 5)
    {
        diet(dietm, dieta, dietn, countDiet, xPosition, yPosition);
    }
    else if (number == 6)
    {
        viewDiet(dietm, dieta, dietn, countDiet, xPosition, yPosition);
    }
    else if (number == 7)
    {
        updateDiet(dietm, dieta, dietn, xPosition, yPosition);
    }
    else if (number == 8)
    {
        addWorkout(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, countWorkout, xPosition, yPosition);
    }
    else if (number == 9)
    {
        viewWorkout(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, countWorkout, xPosition, yPosition);
    }
    else if (number == 10)
    {
        updateWorkout(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, xPosition, yPosition);
    }
    else if (number == 11)
    {
        changepassword(passwordchange, usernameadmin, passwordadmin, category, xPosition, yPosition);
    }
}
// this function is for printing design on the screen
void lines(int xPosition, int yPosition)
{

    gotoxy(xPosition - 40, yPosition - 2);
    cout << "G                                                                                                                                                                                                    G";
    gotoxy(xPosition - 40, yPosition - 1);
    cout << "Y                                                                                                                                                                                                    Y";
    gotoxy(xPosition - 40, yPosition);
    cout << "M                                                                                                                                                                                                    M";
    gotoxy(xPosition - 40, yPosition + 2);
    cout << "M                                                                                                                                                                                                    M";
    gotoxy(xPosition - 40, yPosition + 3);
    cout << "A                                                                                                                                                                                                    A";
    gotoxy(xPosition - 40, yPosition + 4);
    cout << "N                                                                                                                                                                                                    N";
    gotoxy(xPosition - 40, yPosition + 5);
    cout << "A                                                                                                                                                                                                    A";
    gotoxy(xPosition - 40, yPosition + 6);
    cout << "G                                                                                                                                                                                                    G";
    gotoxy(xPosition - 40, yPosition + 7);
    cout << "E                                                                                                                                                                                                    E";
    gotoxy(xPosition - 40, yPosition + 8);
    cout << "M                                                                                                                                                                                                    M";
    gotoxy(xPosition - 40, yPosition + 9);
    cout << "E                                                                                                                                                                                                    E";
    gotoxy(xPosition - 40, yPosition + 10);
    cout << "N                                                                                                                                                                                                    N";
    gotoxy(xPosition - 40, yPosition + 11);
    cout << "T                                                                                                                                                                                                    T";
    gotoxy(xPosition - 40, yPosition + 13);
    cout << "S                                                                                                                                                                                                    S";
    gotoxy(xPosition - 40, yPosition + 14);
    cout << "Y                                                                                                                                                                                                    Y";
    gotoxy(xPosition - 40, yPosition + 15);
    cout << "S                                                                                                                                                                                                    S";
    gotoxy(xPosition - 40, yPosition + 16);
    cout << "T                                                                                                                                                                                                    T";
    gotoxy(xPosition - 40, yPosition + 17);
    cout << "E                                                                                                                                                                                                    E";
    gotoxy(xPosition - 40, yPosition + 18);
    cout << "M                                                                                                                                                                                                    M";
    gotoxy(xPosition - 12, yPosition + 30);
    cout << "################################################################################################################################################";
    gotoxy(xPosition - 17, yPosition + 31);
    cout << "##########################################################################################################################################################";
    gotoxy(xPosition - 22, yPosition + 32);
    cout << "####################################################################################################################################################################";
}
// this function prints a person 
// on the screen
void person(int xPosition, int yPosition)
{
    gotoxy(xPosition + 90, yPosition);
    cout << "                .*@@@*.    ";
    gotoxy(xPosition + 90, yPosition + 1);
    cout << "                @@@@@@@    ";
    gotoxy(xPosition + 90, yPosition + 2);
    cout << "        =***+=-.#@@@@@#    ";
    gotoxy(xPosition + 90, yPosition + 2);
    cout << "      -@@=+#@@@@+:+++:   ==";
    gotoxy(xPosition + 90, yPosition + 3);
    cout << "     =@+        =%#+.  :## ";
    gotoxy(xPosition + 90, yPosition + 4);
    cout << "    -*.          +@@@*+@#  ";
    gotoxy(xPosition + 90, yPosition + 5);
    cout << "    .       .--:   :+##=   ";
    gotoxy(xPosition + 90, yPosition + 6);
    cout << "           -@@@@@@#=:      ";
    gotoxy(xPosition + 90, yPosition + 7);
    cout << "         .+#*+#@@@@@@@+    ";
    gotoxy(xPosition + 90, yPosition + 8);
    cout << "        -@@@*   .:=@@@@.   ";
    gotoxy(xPosition + 90, yPosition + 9);
    cout << "       *@@%-     +@@@+     ";
    gotoxy(xPosition + 90, yPosition + 10);
    cout << "     :%@%-     =@@*-       ";
    gotoxy(xPosition + 90, yPosition + 11);
    cout << "    +@%-     -#+:          ";
    gotoxy(xPosition + 90, yPosition + 12);
    cout << "  .#%-      -.             ";
    gotoxy(xPosition + 90, yPosition + 13);
    cout << " -*:                       ";
}
// this function is used to update members
void memberUpDate(string name[], int age[], float height[], float weight[], int xPosition, int yPosition, string memberUsername[], string memberPassword[], int countMember)

{
    int update = 0;
    char again;
    string newname;
    int ageu;
    float height_weight;
    fstream member;

    while (1)
    {
        HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        string username;
        gotoxy(xPosition + 15, yPosition);
        cout << "Enter the username of member you want to remove: ";
        while (true)
                {
                    gotoxy(xPosition + 70, yPosition  );
                    getline(cin, username);
                    gotoxy(xPosition + 70, yPosition  );
                    if (enter(username) && space(username))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 70, yPosition  );
                        cout << "                          ";
                        gotoxy(xPosition + 70, yPosition  );
                    }
                }
        int memberNumber = 0;
        int memberNumber1 = memberNumber - 1;
        for (int i = 0; i <= countMember; i++)
        {
            if (username == memberUsername[i])
            {

                memberNumber1 = i;

                break;
            }
        }

        if (memberNumber1 > -1)
        {
            // system("Cls");
            // header(xPosition, yPosition);
            // lines(xPosition, yPosition);

            // gotoxy(xPosition + 15, yPosition);
            // cout << "Enter roll number of member you want to update: ";
            // gotoxy(xPosition + 100, yPosition);

            // member1 = validation_int(xPosition + 45, yPosition + 3, xPosition + 100, yPosition);
            // memberNumber = member1 - 1;
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            person(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "UPDATE NAME ";
            gotoxy(xPosition + 15, yPosition + 2);
            cout << "UPDATE AGE ";
            gotoxy(xPosition + 15, yPosition + 4);
            cout << "UPDATE HEIGHT ";
            gotoxy(xPosition + 15, yPosition + 6);
            cout << "UPDATE WEIGHT ";
            update = arrow(2, 4, xPosition + 5, yPosition);

            if (update == 1)
            {
                system("Cls");
                header(xPosition, yPosition);
                lines(xPosition, yPosition);
                gotoxy(xPosition + 15, yPosition);
                cout << "Enter new name: ";

                while (true)
                {
                    gotoxy(xPosition + 40, yPosition );
                    getline(cin, newname);
                    gotoxy(xPosition + 40, yPosition );
                    if (enter(newname) && space(newname))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 40, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 40, yPosition );
                    }
                }
                name[memberNumber] = newname;
                gotoxy(xPosition + 18, yPosition + 5);
                SetConsoleTextAttribute(c, 2);
                cout << "Name updated successfully...";
                SetConsoleTextAttribute(c, 11);
            }
            else if (update == 2)
            {
                system("Cls");
                header(xPosition, yPosition);
                lines(xPosition, yPosition);
                gotoxy(xPosition + 15, yPosition);
                cout << "Enter new age: ";
                gotoxy(xPosition + 40, yPosition);

                ageu = validation_int(xPosition + 40, yPosition + 1, xPosition + 40, yPosition);
                age[memberNumber] = ageu;
                gotoxy(xPosition + 18, yPosition + 5);
                SetConsoleTextAttribute(c, 2);
                cout << "Age updated successfuly...";
                SetConsoleTextAttribute(c, 11);
            }
            else if (update == 3)
            {
                system("Cls");
                header(xPosition, yPosition);
                lines(xPosition, yPosition);
                gotoxy(xPosition + 15, yPosition);
                cout << "Enter new height: ";

                gotoxy(xPosition + 40, yPosition);
                height_weight = validation_float(xPosition + 40, yPosition + 1, xPosition + 40, yPosition);
                height[memberNumber] = height_weight;
                gotoxy(xPosition + 18, yPosition + 5);
                SetConsoleTextAttribute(c, 2);
                cout << "Height updated successfuly...";
                SetConsoleTextAttribute(c, 11);
            }
            else if (update == 4)
            {
                system("Cls");
                header(xPosition, yPosition);
                lines(xPosition, yPosition);
                gotoxy(xPosition + 15, yPosition);
                cout << "Enter new weight: ";
                gotoxy(xPosition + 40, yPosition);

                height_weight = validation_float(xPosition + 40, yPosition + 1, xPosition + 40, yPosition);
                weight[memberNumber] = height_weight;
                gotoxy(xPosition + 18, yPosition + 5);
                SetConsoleTextAttribute(c, 2);
                cout << "Weight updated successfuly...";
                SetConsoleTextAttribute(c, 11);
            }
        }
        else
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            SetConsoleTextAttribute(c, 4);
            cout << "Member not found...";
            SetConsoleTextAttribute(c, 11);
        }
        getch();
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        SetConsoleTextAttribute(c, 6);
        cout << "Do you want to update something else...";
        SetConsoleTextAttribute(c, 11);
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "YES";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "NO";

        again = arrow(2, 2, xPosition + 5, yPosition + 2);

        if (again != 1)
        {
            break;
        }
    }

    updateValueMember(name, age, height, weight, memberUsername, memberPassword);
}
// this function is used to update employees
void EmployeeUpdate(string employeeName[], int employeeAge[], string working[], int xPosition, int yPosition, int employeeSalary[])

{
    int again = 0;
    int employee = 0;
    int employee1 = 0;
    string newNandE;
    int update;
    int NewAge = 0;
    int newsalary = 0;
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    while (1)
    {

        system("Cls");
        header(xPosition, yPosition);

        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "Enter roll number of employee you want to update: ";
    

        employee1 = validation_int(xPosition + 75, yPosition + 1, xPosition + 75, yPosition);
        employee = employee1 - 1;
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        person(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "UPDATE NAME ";
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "UPDATE AGE ";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "UPDATE WORK EXPERIENCE ";
        gotoxy(xPosition + 15, yPosition + 6);
        cout << "UPDATE SALARY";

        update = arrow(2, 4, xPosition + 5, yPosition);
        if (update == 1)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new name: ";

            
            while (true)
                {
                    gotoxy(xPosition + 40, yPosition );
                    getline(cin, newNandE);
                    gotoxy(xPosition + 40, yPosition );
                    if (enter(newNandE) && space(newNandE))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 40, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 40, yPosition );
                    }
                }
            employeeName[employee] = newNandE;
            gotoxy(xPosition + 18, yPosition + 5);
            SetConsoleTextAttribute(c, 2);
            cout << "Name updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }
        else if (update == 2)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new age: ";

            NewAge = validation_int(xPosition + 40, yPosition + 1, xPosition + 40, yPosition);
            employeeAge[employee] = NewAge;
            gotoxy(xPosition + 18, yPosition + 5);
            SetConsoleTextAttribute(c, 2);
            cout << "Age updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }
        else if (update == 3)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter updated work experience:  ";

            cin.ignore();
            gotoxy(xPosition + 50, yPosition);
            getline(cin, newNandE);
            working[employee] = newNandE;
            gotoxy(xPosition + 18, yPosition + 5);
            SetConsoleTextAttribute(c, 2);
            cout << "Work experience updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }

        else if (update == 4)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new salary: ";

            newsalary = validation_int(xPosition + 40, yPosition + 1, xPosition + 40, yPosition);
            employeeSalary[employee] = newsalary;
            gotoxy(xPosition + 18, yPosition + 5);
            SetConsoleTextAttribute(c, 2);
            cout << "Salary updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }
        updateValueEmployee(employeeName, employeeAge, working, employeeSalary);
        getch();
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        SetConsoleTextAttribute(c, 6);
        cout << "Do you want to update something else...";
        SetConsoleTextAttribute(c, 11);
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "YES";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "NO";
        again = arrow(2, 2, xPosition + 5, yPosition + 2);

        if (again != 1)
        {
            break;
        }
    }
}
// this function is used to add diet
void diet(string dietm[], string dieta[], string dietn[], int &countDiet, int xPosition, int yPosition)

{
    string day;
    string afternoon;
    string night;
    fstream diet;
    string dietFile = "diet.txt";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    diet.open(dietFile, ios::app);
    gotoxy(xPosition + 15, yPosition);
    cout << "PLAN " << countDiet + 1 << "...";
    gotoxy(xPosition + 15, yPosition + 2);
    cout << "Enter day diet... ";

    while (true)
                {
                    gotoxy(xPosition + 50, yPosition );
                    getline(cin, day);
                    gotoxy(xPosition + 50, yPosition );
                    if (enter(day) && space(day))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 50, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 50, yPosition );
                    }
                }

    dietm[countDiet] = day;
    diet << dietm[countDiet] << ",";
    gotoxy(xPosition + 15, yPosition + 4);
    cout << "Enter afternoon diet...";

    while (true)
                {
                    gotoxy(xPosition + 50, yPosition );
                    getline(cin, afternoon);
                    gotoxy(xPosition + 50, yPosition );
                    if (enter(afternoon) && space(afternoon))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 50, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 50, yPosition );
                    }
                }
    dieta[countDiet] = afternoon;
    diet << dieta[countDiet] << ",";
    gotoxy(xPosition + 15, yPosition + 6);
    cout << "Enter night diet...";

    
    while (true)
                {
                    gotoxy(xPosition + 50, yPosition );
                    getline(cin, night);
                    gotoxy(xPosition + 50, yPosition );
                    if (enter(night) && space(night))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 50, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 50, yPosition );
                    }
                }
    dietn[countDiet] = night;
    diet << dietn[countDiet] << endl;
    diet.close();
    countDiet++;
}
// this function is used to view diet
void viewDiet(string dietm[], string dieta[], string dietn[], int &countDiet, int xPosition, int yPosition)

{

    int b = 2;
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 7, yPosition);
    cout << "PLAN";
    gotoxy(xPosition + 28, yPosition);
    cout << "MORNING";
    gotoxy(xPosition + 63, yPosition);
    cout << "AFTERNOON";
    gotoxy(xPosition + 98, yPosition);
    cout << "NIGHT";
    for (int i = 0; i < countDiet; i++)
    {
        SetConsoleTextAttribute(c, 6);
        gotoxy(xPosition - 7, yPosition + b);
        cout << i + 1;
        gotoxy(xPosition + 28, yPosition + b);
        cout << dietm[i].substr(0, 20);
        gotoxy(xPosition + 63, yPosition + b);
        cout << dieta[i].substr(0, 20);
        gotoxy(xPosition + 98, yPosition + b);
        cout << dietn[i].substr(0, 20);
        SetConsoleTextAttribute(c, 11);
        b++;
    }

    getch();
}
// this function is used to update diet
void updateDiet(string dietm[], string dieta[], string dietn[], int xPosition, int yPosition)

{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    int option;
    string change;
    int plan = 0;
    int a = 0;
    int again1;
    while (1)
    {

        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "Enter the diet plan you want to update...";

        gotoxy(xPosition + 60, yPosition);
        a=validation_int(xPosition+60,yPosition+1,xPosition+60,yPosition);
        plan = a - 1;
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "CHANGE DAY DIET PLAN";
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "CHANGE AFTERNOON DIET PLAN";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "CHANGE NIGHT DIET PLAN ";
        option = arrow(2, 3, xPosition + 5, yPosition);

        if (option == 1)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new diet...";
            while (true)
                {
                    gotoxy(xPosition + 40, yPosition );
                    getline(cin, change);
                    gotoxy(xPosition + 40, yPosition );
                    if (enter(change) && space(change))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 40, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 40, yPosition );
                    }
                }
            dietm[plan] = change;
            gotoxy(xPosition + 18, yPosition + 2);
            SetConsoleTextAttribute(c, 2);
            cout << "Diet updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }
        else if (option == 2)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new diet...";
            while (true)
                {
                    gotoxy(xPosition + 40, yPosition );
                    getline(cin, change);
                    gotoxy(xPosition + 40, yPosition );
                    if (enter(change) && space(change))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 40, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 40, yPosition );
                    }
                }
            dieta[plan] = change;
            gotoxy(xPosition + 18, yPosition + 2);
            SetConsoleTextAttribute(c, 2);
            cout << "Diet updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }
        else if (option == 3)
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new diet...";
while (true)
                {
                    gotoxy(xPosition + 40, yPosition );
                    getline(cin, change);
                    gotoxy(xPosition + 40, yPosition );
                    if (enter(change) && space(change))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 40, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 40, yPosition );
                    }
                }
            dietn[plan] = change;
            gotoxy(xPosition + 18, yPosition + 2);
            SetConsoleTextAttribute(c, 2);
            cout << "Diet updated successfully...";
            SetConsoleTextAttribute(c, 11);
        }

        getch();
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "Would you like to update again...";
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "UPDATE";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "EXIT";
        again1 = arrow(2, 2, xPosition + 5, yPosition + 2);
        if (again1 != 1)
        {
            break;
        }
    }
    updateValueDiet(dietm, dieta, dietn);
}
// this function is used to add workout
void addWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &countWorkout, int xPosition, int yPosition)

{
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    fstream workout;
    string workoutFile = "workout.txt";
    string monday;
    string tuesday;
    string wednesday;
    string thursday;
    string friday;
    string saturday;
    string sunday;
    workout.open(workoutFile, ios::app);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Workout " << countWorkout + 1;
    getch();
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Monday Workout";
    while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, monday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(monday) && space(monday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    monday1[countWorkout] = monday;
    workout << monday1[countWorkout] << ",";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Tuesday Workout";

    while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, tuesday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(tuesday) && space(tuesday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    tuesday1[countWorkout] = tuesday;
    workout << tuesday1[countWorkout] << ",";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Wednesday Workout";

    while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, wednesday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(wednesday) && space(wednesday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    wednesday1[countWorkout] = wednesday;
    workout << wednesday1[countWorkout] << ",";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Thursday Workout";

   while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, thursday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(thursday) && space(thursday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    thursday1[countWorkout] = thursday;
    workout << thursday1[countWorkout] << ",";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Friday Workout";
while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, friday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(friday) && space(friday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    friday1[countWorkout] = friday;
    workout << friday1[countWorkout] << ",";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Saturday Workout";

    while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, saturday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(saturday) && space(saturday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    saturday1[countWorkout] = saturday;
    workout << saturday1[countWorkout] << ",";
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter Sunday Workout";
while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, sunday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(sunday) && space(sunday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
    sunday1[countWorkout] = sunday;
    workout << sunday1[countWorkout] << endl;
    workout.close();
    countWorkout++;
}
// this function is used to view diet
void viewWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &countWorkout, int xPosition, int yPosition)
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    int a = 2;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 20, yPosition);
    cout << "Plan";
    gotoxy(xPosition, yPosition);
    cout << "Monday";
    gotoxy(xPosition + 20, yPosition);
    cout << "Tuesday";
    gotoxy(xPosition + 40, yPosition);
    cout << "Wednesday";
    gotoxy(xPosition + 60, yPosition);
    cout << "Thursday";
    gotoxy(xPosition + 80, yPosition);
    cout << "Friday";
    gotoxy(xPosition + 100, yPosition);
    cout << "Saturday";
    gotoxy(xPosition + 120, yPosition);
    cout << "Sunday";

    for (int i = 0; i < countWorkout; i++)
    {
        SetConsoleTextAttribute(c, 6);
        gotoxy(xPosition - 20, yPosition + a);
        cout << i + 1;
        gotoxy(xPosition, yPosition + a);
        cout << monday1[i].substr(0, 15);
        gotoxy(xPosition + 20, yPosition + a);
        cout << tuesday1[i].substr(0, 15);
        gotoxy(xPosition + 40, yPosition + a);
        cout << wednesday1[i].substr(0, 15);
        gotoxy(xPosition + 60, yPosition + a);
        cout << thursday1[i].substr(0, 15);
        gotoxy(xPosition + 80, yPosition + a);
        cout << friday1[i].substr(0, 15);
        gotoxy(xPosition + 100, yPosition + a);
        cout << saturday1[i].substr(0, 15);
        gotoxy(xPosition + 120, yPosition + a);
        cout << sunday1[i].substr(0, 15);
        SetConsoleTextAttribute(c, 11);
        a++;
    }

    getch();
}
// this function is used to update workout
void updateWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int xPosition, int yPosition)
{
    int workout = 0;
    int workout1 = 0;
    int day;
    int again1;
    string neww;
    while (1)
    {
        HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "Enter workout plan you want to update...";
        gotoxy(xPosition + 55, yPosition);

        cin >> workout1;
        workout = workout1 - 1;
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "UPDATE SUNDAY WORKOUT";
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "UPDATE MONDAY WORKOUT";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "UPDATE TUESDAY WORKOUT";
        gotoxy(xPosition + 15, yPosition + 6);
        cout << "UPDATE WEDNESDAY WORKOUT";
        gotoxy(xPosition + 15, yPosition + 8);
        cout << "UPDATE THURSDAY WORKOUT";
        gotoxy(xPosition + 15, yPosition + 10);
        cout << "UPDATE FRIDAY WORKOUT";
        gotoxy(xPosition + 15, yPosition + 12);
        cout << "UPDATE SATURDAY WORKOUT";
        day = arrow(2, 7, xPosition + 5, yPosition);
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        if (day == 1)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            
            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            sunday1[workout] = neww;
        }
        else if (day == 2)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            monday1[workout] = neww;
        }
        else if (day == 3)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            tuesday1[workout] = neww;
        }
        else if (day == 4)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            wednesday1[workout] = neww;
        }
        else if (day == 5)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            thursday1[workout] = neww;
        }
        else if (day == 6)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            friday1[workout] = neww;
        }
        else if (day == 7)
        {
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter new workout...";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, neww);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(neww) && space(neww))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            saturday1[workout] = neww;
        }
        gotoxy(xPosition + 18, yPosition + 3);
        SetConsoleTextAttribute(c, 2);
        cout << "Workout updated successfully...";
        SetConsoleTextAttribute(c, 11);
        getch();
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        gotoxy(xPosition + 15, yPosition);
        cout << "Would you like to update again...";
        gotoxy(xPosition + 15, yPosition + 2);
        cout << "UPDATE";
        gotoxy(xPosition + 15, yPosition + 4);
        cout << "EXIT";
        again1 = arrow(2, 2, xPosition + 5, yPosition + 2);

        if (again1 != 1)
        {
            break;
        }
    }
    updateValueWorkout(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1);
}
// function to check the if the username already exists
bool checkString(string array[], int countsign, string check)

{
    for (int i = 0; i < countsign; i++)
    {
        if (check == array[i])
        {
            return 0;
        }
    }
    return 1;
}
// function to print admin header
void adminheader(int xPosition, int yPosition)
{
    gotoxy(xPosition + 38, yPosition + 20);
    cout << "   ___      __          _       ";
    gotoxy(xPosition + 38, yPosition + 21);
    cout << "  / _ | ___/ /  __ _   (_)  ___ ";
    gotoxy(xPosition + 38, yPosition + 22);
    cout << " / __ |/ _  /  /  ' \\ / /  / _ \\ ";
    gotoxy(xPosition + 38, yPosition + 23);
    cout << "/_/ |_|\\_,_/  /_/_/_//_/  /_//_/";
}
// function to print login header
void loginHeader(int xPosition, int yPosition)
{
    gotoxy(xPosition + 40, yPosition + 20);
    cout << "   __                _       ";
    gotoxy(xPosition + 40, yPosition + 21);
    cout << "  / /  ___   ___ _  (_)  ___ ";
    gotoxy(xPosition + 40, yPosition + 22);
    cout << " / /__/ _ \\ / _ `/ / /  / _ \\";
    gotoxy(xPosition + 40, yPosition + 23);
    cout << "/____/\\___/ \\_, / /_/  /_//_/";
    gotoxy(xPosition + 40, yPosition + 24);
    cout << "           /___/             ";
}
// function to print header sign
void headersign(int xPosition, int yPosition)

{
    gotoxy(xPosition + 33, yPosition + 20);
    cout << "   ____   _                __  __       ";
    gotoxy(xPosition + 33, yPosition + 21);
    cout << "  / __/  (_)  ___ _  ___  / / / /   ___ ";
    gotoxy(xPosition + 33, yPosition + 22);
    cout << " _\\ \\   / /  / _ `/ / _ \\/ /_/ /   / _ \\";
    gotoxy(xPosition + 33, yPosition + 23);
    cout << "/___/  /_/   \\_, / /_//_/\\____/   / .__/";
    gotoxy(xPosition + 33, yPosition + 24);
    cout << "            /___/                /_/    ";
}
// function toprint footer trainer
void footertrainer(int xPosition, int yPosition)
{

    gotoxy(xPosition + 33, yPosition + 20);
    cout << " ______               _                  ";
    gotoxy(xPosition + 33, yPosition + 21);
    cout << "/_  __/  ____ ___ _  (_)  ___  ___   ____";
    gotoxy(xPosition + 33, yPosition + 22);
    cout << " / /    / __// _ `/ / /  / _ \\/ -_) / __/";
    gotoxy(xPosition + 33, yPosition + 23);
    cout << "/_/    /_/   \\_,_/ /_/  /_//_/\\__/ /_/   ";
}
// function to change password of the admin and trainer
void changepassword(int idx, string usernameadmin[], string passwordadmin[], string category[], int xPosition, int yPosition)

{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    string newpassword;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter new password ";

    while (true)
                {
                    gotoxy(xPosition + 35, yPosition );
                    getline(cin, newpassword);
                    gotoxy(xPosition + 35, yPosition );
                    if (enter(newpassword) && space(newpassword))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 35, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 35, yPosition );
                    }
                }
    passwordadmin[idx] = newpassword;
    updatePasswordadmin(usernameadmin, passwordadmin, category);
    gotoxy(xPosition + 18, yPosition + 3);
    SetConsoleTextAttribute(c, 2);
    cout << "PASSWORD UPDATED SUCCESSFULLY...";
    SetConsoleTextAttribute(c, 11);
    getch();
}
// function to print the menu of the member and return a value
// of the selected option
int menumember(int xPosition, int yPosition)
{
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    int memberoption;
    person(xPosition, yPosition);
    gotoxy(xPosition + 35, yPosition);
    cout << "SELECT DIET PLAN " << endl;
    gotoxy(xPosition + 35, yPosition + 1);
    cout << "VIEW YOUR DIET PLAN " << endl;
    gotoxy(xPosition + 35, yPosition + 2);
    cout << "SELECT WORKOUT PLAN " << endl;
    gotoxy(xPosition + 35, yPosition + 3);
    cout << "VIEW YOUR WORKOUT PLAN " << endl;
    gotoxy(xPosition + 35, yPosition + 4);
    cout << "ENTER YOUR ONE MONTH WORKOUT RECORD " << endl;
    gotoxy(xPosition + 35, yPosition + 5);
    cout << "VIEW YOUR ONE MONTH WORKOUT RECORD" << endl;
    gotoxy(xPosition + 35, yPosition + 6);
    cout << "CALCULATE YOUR BILL";
    gotoxy(xPosition + 35, yPosition + 7);
    cout << "CHANGE PASSWORD " << endl;
    gotoxy(xPosition + 35, yPosition + 8);
    cout << "LOGOUT " << endl;
    gotoxy(xPosition + 35, yPosition + 9);
    cout << "HOMEPAGE" << endl;
    gotoxy(xPosition + 35, yPosition + 10);
    memberoption = arrow(1, 10, xPosition + 25, yPosition);

    return memberoption;
}
// function for navigation
int arrow(int increase, int size, int arrowx, int arrowy)

{

    int a = increase;
    int b = 0;
    int menusizeleast = 1;

    int count = 1;
    gotoxy(arrowx, arrowy);
    cout << "----->";
    while (1)
    {
        char c;
        c = _getch();
        if (c == 80 && menusizeleast < size)
        {
            c = 'd';
            menusizeleast = menusizeleast + 1;
        }
        else if (c == 72 && menusizeleast > 1)
        {
            c = 'u';
            menusizeleast -= 1;
        }
        if (c == 'd')
        {
            gotoxy(arrowx, arrowy + b);
            cout << "       ";
            gotoxy(arrowx, arrowy + a);
            cout << "----->";
            a += increase;
            b += increase;
            Sleep(200);
            c = 'b';
            count = count + 1;
        }
        else if (c == 'u')
        {
            a -= increase, b -= increase;
            gotoxy(arrowx, arrowy + a);
            cout << "       ";
            gotoxy(arrowx, arrowy + b);
            cout << "----->";
            Sleep(200);
            c = 'b';
            count = count - 1;
        }

        if (c == 13)
        {

            break;
        }
    }
    Sleep(100);

    return count;
}
// function that gets the value of the selected option
// and then transfers the control accordingly
void optionMember(int number, string dietm[], string dieta[], string dietn[], string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], string memberPassword[], string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[], int &passwordchangemember, int &countDiet, int &countWorkout, int &selectw, int &selectd, int &countprogess, int xPosition, int yPosition, string name[], int age[], float height[], float weight[], string memberusername[], string memberpassword[])
{

    if (number == 1)
    {
        selectdiet(dietm, dieta, dietn, countDiet, selectd, xPosition, yPosition);
    }
    else if (number == 2)
    {
        viewSelectedDiet(dietm, dieta, dietn, selectd, xPosition, yPosition);
    }
    else if (number == 3)
    {
        selectWorkout(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, countWorkout, selectw, xPosition, yPosition);
    }
    else if (number == 4)
    {
        viewworkouts(monday1, tuesday1, wednesday1, thursday1, friday1, saturday1, sunday1, selectw, xPosition, yPosition);
    }
    else if (number == 5)
    {
        progress(monday_progress, tuesday_progress, wednesday_progress, thursday_progress, friday_progress, saturday_progress, sunday_progress, countprogess, xPosition, yPosition);
    }
    else if (number == 6)
    {
        viewProgress(monday_progress, tuesday_progress, wednesday_progress, thursday_progress, friday_progress, saturday_progress, sunday_progress, countprogess, xPosition, yPosition);
    }
    else if (number == 7)
    {
        billing(xPosition, yPosition);
    }
    else if (number == 8)
    {
        changepasswordmember(passwordchangemember, name, age, height, weight, memberusername, memberPassword, xPosition, yPosition);
    }
}
// function to change the password of the member
void changepasswordmember(int idx, string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[], int xPosition, int yPosition)
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    string newpassword;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter new password ";

    gotoxy(xPosition + 35, yPosition);
    cin >> newpassword;
    while (true)
                {
                    gotoxy(xPosition + 35, yPosition );
                    getline(cin, newpassword);
                    gotoxy(xPosition + 35, yPosition );
                    if (enter(newpassword) && space(newpassword))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 35, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 35, yPosition );
                    }
                }
    memberPassword[idx] = newpassword;
    updateValueMember(name, age, height, weight, memberusername, memberPassword);
    gotoxy(xPosition + 18, yPosition + 3);
    SetConsoleTextAttribute(c, 2);
    cout << "PASSWORD UPDATED SUCCESSFULLY...";
    SetConsoleTextAttribute(c, 11);
    getch();
}
// function to select diet for the member
void selectdiet(string dietm[], string dieta[], string dietn[], int &countDiet, int &selectd, int xPosition, int yPosition)

{
    int b = 2;
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 7, yPosition);
    cout << "PLAN";
    gotoxy(xPosition + 28, yPosition);
    cout << "MORNING";
    gotoxy(xPosition + 63, yPosition);
    cout << "AFTERNOON";
    gotoxy(xPosition + 98, yPosition);
    cout << "NIGHT";
    for (int i = 0; i < countDiet; i++)
    {
        SetConsoleTextAttribute(c, 6);
        gotoxy(xPosition - 7, yPosition + b);
        cout << i + 1;
        gotoxy(xPosition + 28, yPosition + b);
        cout << dietm[i].substr(0, 20);
        gotoxy(xPosition + 63, yPosition + b);
        cout << dieta[i].substr(0, 20);
        gotoxy(xPosition + 98, yPosition + b);
        cout << dietn[i].substr(0, 20);
        SetConsoleTextAttribute(c, 11);
        b++;
    }

    gotoxy(xPosition - 7, yPosition + b + 5);
    cout << "Enter the diet plan number you want to select";

    selectd = validation_int(xPosition + 50, yPosition + b + 6, xPosition + 50, yPosition + b + 5);
    if (selectd > countDiet)
    {

        gotoxy(xPosition - 7, yPosition + b + 6);
        SetConsoleTextAttribute(c, 4);
        cout << "Diet plan does not exist...";
        SetConsoleTextAttribute(c, 11);
        getch();
    }
    else
    {
        gotoxy(xPosition - 7, yPosition + b + 6);
        SetConsoleTextAttribute(c, 2);
        cout << "Diet Plan selected successfully...";
        SetConsoleTextAttribute(c, 11);
        getch();
        selectd = selectd - 1;
    }
}
// function the prints the selected diet
void viewSelectedDiet(string dietm[], string dieta[], string dietn[], int &selectd, int xPosition, int yPosition)

{
    int b = 2;
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 7, yPosition);
    cout << "PLAN";
    gotoxy(xPosition + 28, yPosition);
    cout << "MORNING";
    gotoxy(xPosition + 63, yPosition);
    cout << "AFTERNOON";
    gotoxy(xPosition + 98, yPosition);
    cout << "NIGHT";
    SetConsoleTextAttribute(c, 6);
    gotoxy(xPosition - 7, yPosition + b);
    cout << "YOUR PLAN";
    gotoxy(xPosition + 28, yPosition + b);
    cout << dietm[selectd].substr(0, 20);
    gotoxy(xPosition + 63, yPosition + b);
    cout << dieta[selectd].substr(0, 20);
    gotoxy(xPosition + 98, yPosition + b);
    cout << dietn[selectd].substr(0, 20);
    SetConsoleTextAttribute(c, 11);

    getch();
}
// function to select workout
void selectWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &countWorkout, int &selectw, int xPosition, int yPosition)

{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    int a = 2;
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 20, yPosition);
    cout << "Plan";
    gotoxy(xPosition, yPosition);
    cout << "Monday";
    gotoxy(xPosition + 20, yPosition);
    cout << "Tuesday";
    gotoxy(xPosition + 40, yPosition);
    cout << "Wednesday";
    gotoxy(xPosition + 60, yPosition);
    cout << "Thursday";
    gotoxy(xPosition + 80, yPosition);
    cout << "Friday";
    gotoxy(xPosition + 100, yPosition);
    cout << "Saturday";
    gotoxy(xPosition + 120, yPosition);
    cout << "Sunday";

    for (int i = 0; i < countWorkout; i++)
    {
        SetConsoleTextAttribute(c, 6);
        gotoxy(xPosition - 20, yPosition + a);
        cout << i + 1;
        gotoxy(xPosition, yPosition + a);
        cout << monday1[i].substr(0, 15);
        gotoxy(xPosition + 20, yPosition + a);
        cout << tuesday1[i].substr(0, 15);
        gotoxy(xPosition + 40, yPosition + a);
        cout << wednesday1[i].substr(0, 15);
        gotoxy(xPosition + 60, yPosition + a);
        cout << thursday1[i].substr(0, 15);
        gotoxy(xPosition + 80, yPosition + a);
        cout << friday1[i].substr(0, 15);
        gotoxy(xPosition + 100, yPosition + a);
        cout << saturday1[i].substr(0, 15);
        gotoxy(xPosition + 120, yPosition + a);
        cout << sunday1[i].substr(0, 15);
        SetConsoleTextAttribute(c, 11);
        a++;
    }

    gotoxy(xPosition, yPosition + a + 5);
    cout << "ENTER YOUR DIET PLAN NUMBER";

    selectw = validation_int(xPosition + 40, yPosition + a + 6, xPosition + 40, yPosition + 5 + a);
    if (selectw > countWorkout)
    {
        gotoxy(xPosition, yPosition + a + 6);
        SetConsoleTextAttribute(c, 4);
        cout << "WORKOUT PLAN DOES NOT EXIST";
        SetConsoleTextAttribute(c, 11);
        getch();
    }
    else
    {
        gotoxy(xPosition, yPosition + a + 6);
        SetConsoleTextAttribute(c, 2);
        cout << "WORKOUT PLAN SELECTED SUCCESSFULLY";
        SetConsoleTextAttribute(c, 11);
        getch();
        selectw = selectw - 1;
    }
}
// function to view the selected workout
void viewworkouts(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[], int &selectw, int xPosition, int yPosition)
{
    int a = 2;
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 20, yPosition);
    cout << "Plan";
    gotoxy(xPosition, yPosition);
    cout << "Monday";
    gotoxy(xPosition + 20, yPosition);
    cout << "Tuesday";
    gotoxy(xPosition + 40, yPosition);
    cout << "Wednesday";
    gotoxy(xPosition + 60, yPosition);
    cout << "Thursday";
    gotoxy(xPosition + 80, yPosition);
    cout << "Friday";
    gotoxy(xPosition + 100, yPosition);
    cout << "Saturday";
    gotoxy(xPosition + 120, yPosition);
    cout << "Sunday";

    SetConsoleTextAttribute(c, 6);
    gotoxy(xPosition - 20, yPosition + a);
    cout << "YOUR PLAN";
    gotoxy(xPosition, yPosition + a);
    cout << monday1[selectw].substr(0, 15);
    gotoxy(xPosition + 20, yPosition + a);
    cout << tuesday1[selectw].substr(0, 15);
    gotoxy(xPosition + 40, yPosition + a);
    cout << wednesday1[selectw].substr(0, 15);
    gotoxy(xPosition + 60, yPosition + a);
    cout << thursday1[selectw].substr(0, 15);
    gotoxy(xPosition + 80, yPosition + a);
    cout << friday1[selectw].substr(0, 15);
    gotoxy(xPosition + 100, yPosition + a);
    cout << saturday1[selectw].substr(0, 15);
    gotoxy(xPosition + 120, yPosition + a);
    cout << sunday1[selectw].substr(0, 15);
    SetConsoleTextAttribute(c, 11);

    getch();
}
// function to add the monthly progress in workout
void progress(string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[], int &countprogess, int xPosition, int yPosition)
{
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    fstream workoutprogress;
    string workoutprogressFile = "workoutprogress.txt";
    string monday;
    string tuesday;
    string wednesday;
    string thursday;
    string friday;
    string saturday;
    string sunday;
    workoutprogress.open(workoutprogressFile, ios::out);
    while (1)
    {
        if (countprogess >= 4)
        {
            int option = 0;
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "ALL FOUR WEEKS ENTERED..";
            gotoxy(xPosition + 15, yPosition + 2);
            cout << "ENTER AGAIN";
            gotoxy(xPosition + 15, yPosition + 3);
            cout << "EXIT";
            option = arrow(1, 2, xPosition + 5, yPosition + 2);
            if (option == 1)
            {
                countprogess = 0;
            }
            if (option != 1)
            {
                break;
            }
        }
        else
        {
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Week " << countprogess + 1 << " of the month ";
            getch();
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Monday Workout";

            
            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, monday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(monday) && space(monday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            monday_progress[countprogess] = monday;
            workoutprogress << monday_progress[countprogess] << ",";
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Tuesday Workout";

            
            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, tuesday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(tuesday) && space(tuesday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            tuesday_progress[countprogess] = tuesday;
            workoutprogress << tuesday_progress[countprogess] << ",";
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Wednesday Workout";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, wednesday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(wednesday) && space(wednesday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            wednesday_progress[countprogess] = wednesday;
            workoutprogress << wednesday_progress[countprogess] << ",";
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Thursday Workout";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, thursday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(thursday) && space(thursday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            thursday_progress[countprogess] = thursday;
            workoutprogress << thursday_progress[countprogess] << ",";
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Friday Workout";

            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, friday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(friday) && space(friday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            friday_progress[countprogess] = friday;
            workoutprogress << friday_progress[countprogess] << ",";
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Saturday Workout";
            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, saturday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(saturday) && space(saturday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            saturday_progress[countprogess] = saturday;
            workoutprogress << saturday_progress[countprogess] << ",";
            system("Cls");
            header(xPosition, yPosition);
            lines(xPosition, yPosition);
            gotoxy(xPosition + 15, yPosition);
            cout << "Enter Sunday Workout";
            while (true)
                {
                    gotoxy(xPosition + 45, yPosition );
                    getline(cin, sunday);
                    gotoxy(xPosition + 45, yPosition );
                    if (enter(sunday) && space(sunday))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 45, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 45, yPosition );
                    }
                }
            sunday_progress[countprogess] = sunday;
            workoutprogress << sunday_progress[countprogess] << ",";
            countprogess++;
        }
    }
    workoutprogress.close();
}
// function to view the monthly progress
void viewProgress(string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[], int &countprogess, int xPosition, int yPosition)

{
    int a = 2;
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    gotoxy(xPosition - 20, yPosition);
    cout << "Progress";
    gotoxy(xPosition, yPosition);
    cout << "Monday";
    gotoxy(xPosition + 20, yPosition);
    cout << "Tuesday";
    gotoxy(xPosition + 40, yPosition);
    cout << "Wednesday";
    gotoxy(xPosition + 60, yPosition);
    cout << "Thursday";
    gotoxy(xPosition + 80, yPosition);
    cout << "Friday";
    gotoxy(xPosition + 100, yPosition);
    cout << "Saturday";
    gotoxy(xPosition + 120, yPosition);
    cout << "Sunday";

    for (int i = 0; i <= countprogess - 1; i++)
    {
        SetConsoleTextAttribute(c, 6);
        gotoxy(xPosition - 20, yPosition + a);
        cout << "Week " << i + 1;
        gotoxy(xPosition, yPosition + a);
        cout << monday_progress[i].substr(0, 15);
        gotoxy(xPosition + 20, yPosition + a);
        cout << tuesday_progress[i].substr(0, 15);
        gotoxy(xPosition + 40, yPosition + a);
        cout << wednesday_progress[i].substr(0, 15);
        gotoxy(xPosition + 60, yPosition + a);
        cout << thursday_progress[i].substr(0, 15);
        gotoxy(xPosition + 80, yPosition + a);
        cout << friday_progress[i].substr(0, 15);
        gotoxy(xPosition + 100, yPosition + a);
        cout << saturday_progress[i].substr(0, 15);
        gotoxy(xPosition + 120, yPosition + a);
        cout << sunday_progress[i].substr(0, 15);
        SetConsoleTextAttribute(c, 11);
        a++;
    }

    getch();
}
// function for integer validation
int validation_int(int x, int y, int c, int d)
{
    HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
    string a;
    int b = 0;

    gotoxy(c, d);

    while (true)
    {

        gotoxy(c, d);
        getline(cin, a);
        gotoxy(c, d);

        if (enter(a) && space(a))
        {
            break;
        }
        else
        {
            gotoxy(c, d);

            cout << "                          ";

            gotoxy(c, d);
        }
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] < 48 || a[i] > 57) && space(a) && enter(a))
        {
            gotoxy(x, y);
            SetConsoleTextAttribute(g, 4);
            cout << "Enter a valid input..";
            SetConsoleTextAttribute(g, 11);
            gotoxy(x + 22, y);
            cout << "                                                    ";
            gotoxy(x + 23, y);
            cin.clear();
            cin.ignore(123, '\n');
            gotoxy(x + 23, y);

            while (true)

            {
                gotoxy(x + 23, y);

                getline(cin, a);

                gotoxy(x + 23, y);
                if (enter(a) && space(a))
                {
                    break;
                }
                else
                {
                    gotoxy(x + 23, y);

                    cout << "                          ";

                    gotoxy(x + 23, y);
                }
                i = -1;
            }
        }
    }
    gotoxy(x, y);
    cout << "                                                                                   ";
    gotoxy(c, d);
    cout << "                                                                                    ";
    gotoxy(c, d);
    cout << a;
    b = stoi(a);
    return b;
}
// function for float validation
float validation_float(int x, int y, int c, int d)
{
    HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
    string a;
    float b = 0;

    while (true)
    {
        gotoxy(c, d);
        getline(cin, a);
        gotoxy(c, d);

        if (enter(a) && space(a))
        {
            break;
        }
        else
        {
            gotoxy(c, d);

            cout << "                          ";

            gotoxy(c, d);
        }
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (((a[i] < 48 || a[i] > 57) && a[i] != 46) && space(a) && enter(a))
        {
            gotoxy(x, y);
            SetConsoleTextAttribute(g, 4);
            cout << "Enter a valid input..";
            SetConsoleTextAttribute(g, 11);
            gotoxy(x + 22, y);
            cout << "                                            ";
            gotoxy(x + 23, y);
            cin.clear();
            cin.ignore(123, '\n');
            gotoxy(x + 23, y);
            while (true)
            {
                gotoxy(x + 23, y);
                getline(cin, a);
                gotoxy(x + 23, y);
                if (enter(a) && space(a))
                {
                    break;
                }
                else
                {
                    gotoxy(x + 23, y);
                    cout << "                          ";
                    gotoxy(x + 23, y);
                }
            }
            i = -1;
        }
    }
    gotoxy(x, y);
    cout << "                                                                                   ";
    gotoxy(c, d);
    cout << "                                                                                    ";
    gotoxy(c, d);
    // if(a==".");
    // {
    // cout<<"HEHE";
    // getch();
    // }
    cout << a;
    b = stof(a);
    return b;
}
// function to seperate comma seperated values
string getField(string record, int field)
{
    int commaCount = 1;
    string item = "";
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }

    return item;
}
// function to assign data to the member arrays from the files
void assignValueMember(string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[])
{
    int idx = 0;
    fstream member;
    string fileName = "memberfile.txt";
    member.open(fileName, ios::in);
    string line = "";
    while (!(member.eof()))
    {
        line = "";
        getline(member, line);
        if ((!line.empty()) && integerCheck(getField(line, 2)) && floatCheck(getField(line, 3)) && floatCheck(getField(line, 4)))
        {
            name[idx] = getField(line, 1);

            age[idx] = stoi(getField(line, 2));

            height[idx] = stof(getField(line, 3));
            weight[idx] = stof(getField(line, 4));
            memberusername[idx] = getField(line, 5);
            memberPassword[idx] = getField(line, 6);

            idx++;
        }
    }
    member.close();
}
// function to update data of the member arrays and store data in the files
void updateValueMember(string name[], int age[], float height[], float weight[], string memberusername[], string memberPassword[])
{
    fstream member;
    string fileName = "memberfile.txt";
    member.open(fileName, ios::out);
    int size = 0;
    size = arraySize(name);
    for (int i = 0; i < size; i++)
    {
        member << name[i] << ",";
        member << age[i] << ",";
        member << height[i] << ",";
        member << weight[i] << ",";
        member << memberusername[i] << ",";
        member << memberPassword[i] << endl;
    }
    member.close();
}
// to check if the number from the file in integer or not
bool integerCheck(string check)
{

    for (int i = 0; check[i] != '\0'; i++)
    {
        if (!isdigit(check[i]))
        {
            return 0;
        }
    }
    return 1;
}
// to check if the number from the files is float or not
bool floatCheck(string check)
{
    int dotCount = 0;

    for (int i = 0; check[i] != '\0'; i++)
    {
        if (!isdigit(check[i]))
        {
            if (check[i] == '.' && dotCount == 0)
            {
                dotCount++;
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
// function to assign data to the login arrays from the files
void assignValueLogin(string usernameadmin[], string passwordadmin[], string cateory[])

{
    fstream login;
    int idx = 0;
    string fileName = "login.txt";
    string line = "";
    login.open(fileName, ios::in);
    while (!(login.eof()))
    {
        line = "";
        getline(login, line);
        if (!(line.empty()))
        {
            usernameadmin[idx] = getField(line, 1);
            passwordadmin[idx] = getField(line, 2);
            cateory[idx] = getField(line, 3);
            idx++;
        }
    }
}
// function to find the size of the arrays for the loop control 
// variables
int arraySize(string size[])
{
    int count = 0;

    while (size[count] != "")
    {
        count++;
    }
    return count;
}
// function to update data of the password in the files
void updatePasswordadmin(string usernameadmin[], string passwordadmin[], string category[])
{
    fstream login;
    string fileName = "login.txt";
    login.open(fileName, ios::out);
    int size = 0;
    size = arraySize(usernameadmin);
    for (int i = 0; i < size; i++)
    {
        login << usernameadmin[i] << ",";
        login << passwordadmin[i] << ",";
        login << category[i] << endl;
        if (i == size - 1)
        {
            break;
        }
    }
}
// function to assign data to the employee arrays from the files
void assignValueEmployee(string employeeName[], int employeeAge[], string working[], int employeeSalary[])
{
    int idx = 0;
    fstream employee;
    string fileName = "employee.txt";
    employee.open(fileName, ios::in);
    string line = "";
    while (!(employee.eof()))
    {
        line = "";
        getline(employee, line);
        if ((!line.empty()) && integerCheck(getField(line, 2)) && integerCheck(getField(line, 4)))
        {
            employeeName[idx] = getField(line, 1);

            employeeAge[idx] = stoi(getField(line, 2));

            working[idx] = getField(line, 3);
            employeeSalary[idx] = stoi(getField(line, 4));

            idx++;
        }
    }
    employee.close();
}
// function to update data of the employee arrays in the files
void updateValueEmployee(string employeeName[], int employeeAge[], string working[], int employeeSalary[])
{
    fstream employee;
    string fileName = "employee.txt";
    employee.open(fileName, ios::out);
    int size = 0;
    size = arraySize(employeeName);
    for (int i = 0; i < size; i++)
    {
        employee << employeeName[i] << ",";
        employee << employeeAge[i] << ",";
        employee << working[i] << ",";
        employee << employeeSalary[i] << endl;
    }
    employee.close();
}
// function to assign data to the diet arrays from the files
void assignValueDiet(string dietm[], string dieta[], string dietn[])

{
    int idx = 0;
    fstream diet;
    string dietFile = "diet.txt";
    diet.open(dietFile, ios::in);
    string line = "";
    while (!(diet.eof()))
    {
        line = "";
        getline(diet, line);
        if ((!line.empty()))
        {
            dietm[idx] = getField(line, 1);

            dieta[idx] = getField(line, 2);

            dietn[idx] = getField(line, 3);

            idx++;
        }
    }
    diet.close();
}
// to update the value of diet in the files
void updateValueDiet(string dietm[], string dieta[], string dietn[])
{
    fstream diet;
    string dietFile = "diet.txt";
    diet.open(dietFile, ios::out);
    int size = 0;
    size = arraySize(dietm);

    for (int i = 0; i < size; i++)
    {
        diet << dietm[i] << ",";
        diet << dieta[i] << ",";
        diet << dietn[i] << endl;
    }
    diet.close();
}
// function to assign data to the workout arrays from the files
void assignValueWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[])
{
    int idx = 0;
    fstream workout;
    string workoutFile = "workout.txt";
    workout.open(workoutFile, ios::in);
    string line = "";
    while (!(workout.eof()))
    {
        line = "";
        getline(workout, line);
        if ((!line.empty()))
        {
            monday1[idx] = getField(line, 1);

            tuesday1[idx] = getField(line, 2);

            wednesday1[idx] = getField(line, 3);
            thursday1[idx] = getField(line, 4);
            friday1[idx] = getField(line, 5);
            saturday1[idx] = getField(line, 6);
            sunday1[idx] = getField(line, 7);

            idx++;
        }
    }
    workout.close();
}
// to update the data of the workout in the files
void updateValueWorkout(string monday1[], string tuesday1[], string wednesday1[], string thursday1[], string friday1[], string saturday1[], string sunday1[])

{
    fstream workout;
    string workoutFile = "workout.txt";
    workout.open(workoutFile, ios::out);
    int size = 0;
    size = arraySize(monday1);

    for (int i = 0; i < size; i++)
    {
        workout << monday1[i] << ",";
        workout << tuesday1[i] << ",";
        workout << wednesday1[i] << ",";
        workout << thursday1[i] << ",";
        workout << friday1[i] << ",";
        workout << saturday1[i] << ",";
        workout << sunday1[i] << ",";
    }
    workout.close();
}
// to update the data of the workout in the files
void assignValueprogress(string monday_progress[], string tuesday_progress[], string wednesday_progress[], string thursday_progress[], string friday_progress[], string saturday_progress[], string sunday_progress[])
{
    int idx = 0;
    fstream workoutprogress;
    string workoutProgressFile = "workoutprogress.txt";
    workoutprogress.open(workoutProgressFile, ios::in);
    string line = "";
    while (!(workoutprogress.eof()))
    {
        line = "";
        getline(workoutprogress, line);
        if ((!line.empty()))
        {
            monday_progress[idx] = getField(line, 1);

            tuesday_progress[idx] = getField(line, 2);

            wednesday_progress[idx] = getField(line, 3);
            thursday_progress[idx] = getField(line, 4);
            friday_progress[idx] = getField(line, 5);
            saturday_progress[idx] = getField(line, 6);
            sunday_progress[idx] = getField(line, 7);

            idx++;
        }
    }
    workoutprogress.close();
}
// animation
void printPerson()
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(c, 6);
    gotoxy(0, 8);
    cout << "                                                                                          " << endl;
    Sleep(20);
    cout << "                                               ...   .::                                  " << endl;
    Sleep(20);
    cout << "                                          :=*%%%%%%%%%%*                                  " << endl;
    Sleep(20);
    cout << "                                        =#%%%%%%%%%%%%%#                                  " << endl;
    Sleep(20);
    cout << "                                      =#%%%%%%%%#%%%#%%*                                  " << endl;
    Sleep(20);
    cout << "                                     =%%%%%%%%%%:-#  -+                                    " << endl;
    Sleep(20);
    cout << "                                     =%%%%%%%%%%=*=.                                      " << endl;
    Sleep(20);
    cout << "                                     .%%**%%%%%#--+##+=                                   " << endl;
    Sleep(20);
    cout << "                                      +#.%*#%%%%. . -%#.                                  " << endl;
    Sleep(20);
    cout << "                                      .%:-+:%%%%%-   ##+                                  " << endl;
    Sleep(20);
    cout << "                                       *.:%=%%%%%%.  ==                                   " << endl;
    Sleep(20);
    cout << "                                       = -%#+#%%%%%#.-:                                   " << endl;
    Sleep(20);
    cout << "                                       = =%%###%%%%%:                                     " << endl;
    Sleep(20);
    cout << "                                     .** *%# :#%%%----.                                   " << endl;
    Sleep(20);
    cout << "                                  :=#%%%-%%%: ::=+  .                                     " << endl;
    Sleep(20);
    cout << "                               :+%%%*-=%%%%%#.  :# :.####*+-.                              " << endl;
    Sleep(20);
    cout << "                             .*%%%#:  +#****##-:-#+==%%%+.  :=-                            " << endl;
    Sleep(20);
    cout << "                           :=*%%%%=-+#%#+-.    :--*%*-+#%-    .=:                          " << endl;
    Sleep(20);
    cout << "                        -*#=+#%%%%-   :#%%#-    .- -%=  *%*     =-                         " << endl;
    Sleep(20);
    cout << "                      :#%%*%%%%*#=     *%%=      .= :%+ .%%=. :: #                         " << endl;
    Sleep(20);
    cout << "                     :%%%%%%%%%-#     =%%#        -  =%* .=-   -=#                         " << endl;
    Sleep(20);
    cout << "                     :%%%%%%%%%%#-: -*%%%*            %%*.      %-                         " << endl;
    Sleep(20);
    cout << "                    -.#%%%%%%%%%#+*%%%%%%%.:.        .*%%%+.   -%-                         " << endl;
    Sleep(20);
    cout << "                  :#%*=%%%%%%%%%%%%%%%%%%%#=-=:     =-#%%%%*=:=: =-                        " << endl;
    Sleep(20);
    cout << "                 :%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#-.:*%+*%+**--+%=  +-                       " << endl;
    Sleep(20);
    cout << "                .%%%%%%%%*#%%#%%%%%%%%%%%%%%%%%#+=-.   :=    .#+. .*                       " << endl;
    Sleep(20);
    cout << "                *%%%%%%%%-*%**- .%%%%%%%%%%%%%#***+=   +%: :-.%+.  *                       " << endl;
    Sleep(20);
    cout << "               .+%%%%%%%%%%#-+  :%%%%%%%%%%%%%%%%%%+::=#%*==++%%-  #.                      " << endl;
    Sleep(20);
    cout << "               = *%%%%%%%#%+++ :#%%%%%%%%%*:*%%%%%=     *  .+*%%%*#++.                     " << endl;
    Sleep(20);
    cout << "               * *%%%%%%%-*-%%+:%%%%%%%%%%%++#%%%%%+. .-%=.=-#+=*%%= =:                    " << endl;
    Sleep(20);
    cout << "              :+-%%%##%%%*-*%%-:=#%%%%%%%%%#: -##:    .=%=. :%%#*%%*  =:                   " << endl;
    Sleep(20);
    cout << "               -%%%%* -#%%#%+.  .:=*%%%%%%%%%= .#%*-.   *  ..%%%%%%%.  *.                  " << endl;
    Sleep(20);
    cout << "              :#*%%%%*..#=:       ..  -%%%%+++. .%*:..:##  + #%%%%%%*  :*                  " << endl;
    Sleep(20);
    cout << "              ::*%%%%%*.::            :%%%%*  :  =*     +  - =%%%%%%%=  #.                 " << endl;
    Sleep(20);
    cout << "                #%%%%%%:-+           -:%%%%%#:    #-          #%%%%%%.= +-                 " << endl;
    Sleep(20);
    cout << "               .%%%%%%%#.=.         .-*%%%%%%%=.  *#          .#%%%%%=.=-+                 " << endl;
    Sleep(20);
    cout << "               -%%%%%%%%#:.       .*%%%%%%%%%%%%%#%%#-.   :     +%%%%%:*:#                 " << endl;
    Sleep(20);
    cout << "               :%%%%+-#%%+       -%%%%%%%%%%%#+%%%%%%%%%#*#-     .+#%%%%==-                " << endl;
    Sleep(20);
    cout << "                #%%%%:.*+:      :%%%%%%%%%%%%%*-=#%%%%%%%%%%+      .#%%%# +                " << endl;
    Sleep(20);
    cout << "                -%%%%#. ::      *%%%%%%%%%%%%%%+-=#%%%%%%%%%%*       *%%%: -                " << endl;
    Sleep(20);
    SetConsoleTextAttribute(c, 11);
}
// slogan of my gym
void slogan()
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(c, 6);
    Sleep(200);
    gotoxy(90, 11);
    cout << " ________  ______  ________  __    __  ________   ______    ______  " << endl;
    gotoxy(90, 12);
    cout << "/        |/      |/        |/  \\  /  |/        | /      \\  /      \\ \n";
    gotoxy(90, 13);
    cout << "$$$$$$$$/$$$$$$/ $$$$$$$$/ $$  \\ $$ |$$$$$$$$/ /$$$$$$  |/$$$$$$  |\n";
    gotoxy(90, 14);
    cout << "$$ |__      $$ |     $$ |   $$$  \\$$ |$$ |__    $$ \\__$$/ $$ \\__$$/ \n";
    gotoxy(90, 15);
    cout << "$$    |     $$ |     $$ |   $$$$  $$ |$$    |   $$      \\ $$      \\ \n";
    gotoxy(90, 16);
    cout << "$$$$$/      $$ |     $$ |   $$ $$ $$ |$$$$$/     $$$$$$  | $$$$$$  |\n";
    gotoxy(90, 17);
    cout << "$$ |       _$$ |_    $$ |   $$ |$$$$ |$$ |_____ /  \\__$$ |/  \\__$$ |\n";
    gotoxy(90, 18);
    cout << "$$ |      / $$   |   $$ |   $$ | $$$ |$$       |$$    $$/ $$    $$/ \n";
    gotoxy(90, 19);
    cout << "$$/       $$$$$$/    $$/    $$/   $$/ $$$$$$$$/  $$$$$$/   $$$$$$/  \n";

    Sleep(200);
    SetConsoleTextAttribute(c, 9);
    gotoxy(110, 28);
    cout << " __         ______    ______   _______   ______  __    __   ______  \n";
    gotoxy(110, 29);
    cout << "/  |       /      \\  /      \\ /       \\ /      |/  \\  /  | /      \\ \n";
    gotoxy(110, 30);
    cout << "$$ |      /$$$$$$  |/$$$$$$  |$$$$$$$  |$$$$$$/ $$  \\ $$ |/$$$$$$  |\n";
    gotoxy(110, 31);
    cout << "$$ |      $$ |  $$ |$$ |__$$ |$$ |  $$ |  $$ |  $$$  \\$$ |$$ | _$$/ \n";
    gotoxy(110, 32);
    cout << "$$ |      $$ |  $$ |$$    $$ |$$ |  $$ |  $$ |  $$$$  $$ |$$ |/    |\n";
    gotoxy(110, 33);
    cout << "$$ |      $$ |  $$ |$$$$$$$$ |$$ |  $$ |  $$ |  $$ $$ $$ |$$ |$$$$ |\n";
    gotoxy(110, 34);
    cout << "$$ |_____ $$ \\__$$ |$$ |  $$ |$$ |__$$ | _$$ |_ $$ |$$$$ |$$ \\__$$ |\n";
    gotoxy(110, 35);
    cout << "$$       |$$    $$/ $$ |  $$ |$$    $$/ / $$   |$$ | $$$ |$$    $$/ \n";
    gotoxy(110, 36);
    cout << "$$$$$$$$/  $$$$$$/  $$/   $$/ $$$$$$$/  $$$$$$/ $$/   $$/  $$$$$$/  \n";

    SetConsoleTextAttribute(c, 11);
}
// to delete the registered employee
void removeEmployee(string employeeName[], int employeeAge[], string working[], int employeeSalary[], int &countEmployee, int xPosition, int yPosition)

{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    int employeeNumber;
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter the rollnumber of employee you want to remove: ";
    employeeNumber=validation_int(xPosition+70,yPosition+1,xPosition+70,yPosition);
    
    int employeeNumber1 = employeeNumber - 1;

    if (employeeNumber1 >= 0 && employeeNumber1 < countEmployee)
    {
        for (int i = employeeNumber1; i < countEmployee; i++)
        {

            employeeName[i] = employeeName[i + 1];
            employeeAge[i] = employeeAge[i + 1];
            working[i] = working[i + 1];
            employeeSalary[i] = employeeSalary[i + 1];
        }
        countEmployee--;
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        SetConsoleTextAttribute(c, 2);
        gotoxy(xPosition + 18, yPosition + 2);
        cout << "Employee removed successfully...";
        getch();
        SetConsoleTextAttribute(c, 11);
    }
    else
    {
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        SetConsoleTextAttribute(c, 4);
        gotoxy(xPosition + 18, yPosition + 2);
        cout << "Employee not found...";
        getch();
        SetConsoleTextAttribute(c, 11);
    }
    updateValueEmployee(employeeName, employeeAge, working, employeeSalary);
}
// to delete the registered member
void removeMember(string name[], int age[], float height[], float weight[], int xPosition, int yPosition, string memberUsername[], string memberPassword[], int &countMember)
{
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    system("Cls");
    header(xPosition, yPosition);
    lines(xPosition, yPosition);
    string username;
    gotoxy(xPosition + 15, yPosition);
    cout << "Enter the username of member you want to remove: ";
    
    while (true)
                {
                    gotoxy(xPosition + 70, yPosition );
                    getline(cin, username);
                    gotoxy(xPosition + 70, yPosition );
                    if (enter(username) && space(username))
                    {
                        break;
                    }
                    else
                    {
                        gotoxy(xPosition + 70, yPosition );
                        cout << "                          ";
                        gotoxy(xPosition + 70, yPosition );
                    }
                }
    int memberNumber = 0;
    int memberNumber1 = memberNumber - 1;
    for (int i = 0; i <= countMember; i++)
    {
        if (username == memberUsername[i])
        {

            memberNumber1 = i;

            break;
        }
    }

    if (memberNumber1 > -1)
    {
        for (int i = memberNumber1; i < countMember; i++)
        {
            name[i] = name[i + 1];
            age[i] = age[i + 1];
            height[i] = height[i + 1];
            weight[i] = weight[i + 1];
            memberUsername[i] = memberUsername[i + 1];
            memberPassword[i] = memberPassword[i + 1];
        }
        countMember--;
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        SetConsoleTextAttribute(c, 2);
        gotoxy(xPosition + 18, yPosition + 2);
        cout << "Member removed successfully...";
        getch();
        SetConsoleTextAttribute(c, 11);
    }
    else
    {
        system("Cls");
        header(xPosition, yPosition);
        lines(xPosition, yPosition);
        SetConsoleTextAttribute(c, 4);
        gotoxy(xPosition + 18, yPosition + 2);
        cout << "Member not found...";
        getch();
        SetConsoleTextAttribute(c, 11);
    }
    updateValueMember(name, age, height, weight, memberUsername, memberPassword);
}
// to assign the data of the broken machines in the files
void assignValueBroken(string broken[])
{
    int idx = 0;
    fstream brokenm;
    string brokenFile = "broken.txt";
    brokenm.open(brokenFile, ios::in);
    string line = "";
    while (!(brokenm.eof()))
    {
        line = "";
        getline(brokenm, line);

        if (!(line.empty()))
        {

            broken[idx] = line;
            idx++;
        }
    }

    brokenm.close();
}
// to assign the data of the awaiting machines to the files
void assignValueAwaiting(string awaiting[])
{
    int idx = 0;
    fstream awaitingm;
    string awaitingFile = "awaiting.txt";
    awaitingm.open(awaitingFile, ios::in);
    string line = "";
    while (!(awaitingm.eof()))
    {
        line = "";
        getline(awaitingm, line);
        if (!line.empty())
        {
            awaiting[idx] = line;
            idx++;
        }
    }

    awaitingm.close();
}
// to detect empty input
bool enter(string input)
{
    if (input.empty())
    {
        return false;
    }
    return true;
}
// to detect space input
bool space(string input)
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            return false;
        }
    }

    return true;
}
