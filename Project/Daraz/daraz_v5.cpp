#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;


////////////////////////////ARRAYS Declaration//////////////////////
char op;

int num_seller = 0;
const int SELLER_COUNT=10;

string seller_name[SELLER_COUNT];
string seller_phone_num[SELLER_COUNT]={""};
string seller_buisness[SELLER_COUNT];
string seller_password[SELLER_COUNT];

int num_products=0;
const int PRODUCT_COUNT=20;
string products[PRODUCT_COUNT];
int prices[PRODUCT_COUNT]={0};

int num_cust=0,num_product1=0;
const int CUST_COUNT = 10;
const int USER_COUNT = 5 ;
string user_nameA[CUST_COUNT];
string user_passwordA[CUST_COUNT];

string buy_productA[USER_COUNT];
int buy_product_price[USER_COUNT]={0};

/////////////////FUNCTIONS////////////////////////
void header()
{
    system("cls");
    cout << "**************************************************************************************" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "*              *****          ***       *****         ***       ***********          *" << endl;
    cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
    cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
    cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
    cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "**************************************************************************************" << endl;
    cout << endl;
    cout << endl;
}
char main_menu() 
{
    cout << "////////////////////////////////////< Main Menu >/////////////////////////////////////" << endl;
    cout << "Login as : " << endl;
    cout << "1) Admin" << endl;
    cout << "2) Seller" << endl;
    cout << "3) User" << endl;
    cout << endl;
    cout << "Press 4 to Exit" << endl;
    cin >> op;
    return op;
}
string parse(string row, int column)
{

    int dollarCount = 1;
    string item;
    int index = 0;
    while (true)
    {
        char ch = row[index];
        if (ch == '\0')
            return item;
        if (ch == '$')
        {
            dollarCount++;
        }
        else if (dollarCount == column)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
}
char admin_menu()
{
    cout << "////////////////////////////////////< Admin Menu >/////////////////////////////////////" << endl<<endl;
    cout << "Welcome Admin" << endl;
    cout << "Today is a busy day We have to do with a lot of work today " << endl;
    cout << " 1) Add seller" << endl;
    cout << " 2) View record" << endl;
    cout << " 3) View History" << endl;
    cout << " 4) Delete seller" << endl;
    cout << " 5) Update Password" << endl;
    cout << " 6) Exit" << endl;
    cout << "  " << endl;
    cout << "Enter your option......" << endl;
    cin >> op;
    return op;
}
void add_seller_to_array(string name,string ph,string buisness,string pass)
{
    seller_name[num_seller]=name;
    seller_phone_num[num_seller]=ph;
    seller_buisness[num_seller]=buisness;
    seller_password[num_seller]=pass;
    num_seller = num_seller+1;
}
void add_seller()
{
    for(int x = num_seller; x < SELLER_COUNT ; x++)
    {
        int exit=0;
        header();
        string name,buisness,pass,phone;
        cout << "Admin Menu > Add Seller" << endl;
        cout << "Enter seller's information ....." << endl<< endl;
        cin.ignore();
        cout << "Enters seller name : ";
        getline(cin,name);
        cout << "Enters seller phone number : " ;
        getline(cin,phone);
        cout << "Enters seller buisness : ";
        getline(cin,buisness);
        cout << "Create password : ";
        getline(cin,pass);
        cout<< endl;
        add_seller_to_array(name,phone,buisness,pass);
        cout << "Sellers id is created " << endl;
        cout<<endl;
        cout<<"Press 1 to exit";
        cin >> exit;
        if(exit == 1 )
        {
            break;
        }
    }
    
}
bool check_product()
{
    bool yt=0;
    for (int x = 0; x < num_products; x++)
    {
        if (prices[x] > 0)
        {
            yt = 1;
        }
    }
    return yt;
}
bool check_seller()
{
    bool yt=0;
    for (int x = 0; x < num_seller; x++)
    {
        if (seller_phone_num[x] != " ")
        {
            yt = 1;
        }
    }
    return yt;
}
int check_name(string buyp)
{
    int yt = -1;
    for (int x = 0; x < num_products; x++)
    {
        if (products[x] == buyp)
        {
            yt = x;
        }
    }
    return yt;
}
void load_seller_data_to_array()
{
    fstream show;
    show.open("seller.txt" , ios::in);
    while(!show.eof())
    {
        string name,phone,buisness,pass,str;
        getline(show,str);
        name = parse(str,1);
        phone =parse(str,2);
        buisness = parse(str,3);
        pass =parse(str,4);
        if(pass != "") add_seller_to_array(name,phone,buisness,pass);
    }
    show.close();
}
void show_seller_data()
{
    for (int x = 0; x < num_seller; x++)
    {
        if(seller_phone_num[x] != "")
        {
            cout.setf(ios::left);
            cout.width(30);
            cout << seller_name[x];
            cout.width(30);
            cout<< seller_phone_num[x];
            cout.width(30);
            cout<< seller_buisness[x];
            cout.width(30);
            cout<<  seller_password[x] << endl;
        }
    }
}
void clear_screen()
{
    cout << "Enter any key to continue....";
    getch();
    system("cls");
}
int seller_menu()
{
    cout << "////////////////////////////////////< Seller Menu >/////////////////////////////////////" << endl<<endl;
    cout << " Welcome Seller" << endl;
    cout << " Today we have to do  some tasks" << endl;
    cout << " 1) Add a product to your list  " << endl;
    cout << " 2) View items you sale  " << endl;
    cout << " 3) Sort by price  " << endl;
    cout << " 4) Delete an item  " << endl;
    cout << " 5) Update price of an item  " << endl;
    cout << " 6) Exit" << endl;
    cout<< endl;
    cout << "Enter your option......";
    cin >> op;
    return op;
}
void add_product_to_array(string product,int price)
{
    products[num_products] = product;
    prices[num_products] = price;
    num_products++;
}
void add_product()
{
    int exit =0;
    for(int x = num_products  ; x < PRODUCT_COUNT ; x++)
    {
        system("cls");
        header();
        string product;
        int price;
        cout << "Sellers Menu > Add product >" << endl << endl;
        cin.ignore();
        cout << "Enter the name of product : ";
        getline(cin,product);
        cout << "Enter the price of product : ";
        cin >> price;
        add_product_to_array(product,price);
        cout << "Product entered Successfuly" << endl <<endl;
        cout<<"Press 1 to exit";
        cin >> exit;
        if(exit == 1 )
        {
            system("cls");
            break;
        }
    }
}
void load_products_to_array()
{
    fstream productf;
    string str;
    int countlines=0;
    productf.open("product.txt" , ios::in);
    while(!productf.eof())
    {
        string product, prc;
        int price=0;
        getline(productf,str);
        if(str=="")
        {
            break;
        }
        product=parse(str,1);
        prc= parse(str,2);
        price=stoi(prc);
        add_product_to_array(product,price);
    }
    productf.close();
}
void show_products()
{
    bool yt = check_product();
    if (yt == 1)
    {
        cout.setf(ios::left);
        cout.width(30);
        cout << "Products";
        cout.width(30);
        cout<<"Prices" << endl;
        for (int x = 0; x < num_products; x++)
        {
            if (prices[x] > 0)
            {
                cout.setf(ios::left);
                cout.width(30);
                cout << products[x];
                cout.width(30);
                cout << prices[x] << endl;
            }
        }
    }
    else
    {
        cout << "No Products to Display." << endl;
    }
    clear_screen();
}
void sorting()  
{
    bool yt = check_product();
    if (yt == 1)
    {
        for (int x = 0 ; x < num_products; x++)
        {
            for (int m = x+1 ; m < num_products; m++)
            {
                if(prices[m] > prices[x])
                {
                    swap(products[x], products[m]);
                    swap(prices[x], prices[m]);
                }
            }
        }
        show_products();
    }
    else
    {
        cout << "You have entered no products" << endl;
        cout << "Go to option 1 to add some products" << endl;
        clear_screen();
    }
}
void delete_product()
{
    string delete_product;
    int index=-1;
    bool yt = check_product();
    if (yt == 1 )
    {
        cin.ignore();
        cout << "Enter the name of product you want to delete : ";
        getline(cin,delete_product);
        for (int x = 0; x < num_products; x++)
        {
            if (delete_product == products[x])
            {
                index = x;
            }
        }
        if(index == -1)
        {
            cout<<"There is no such product."<<endl;
        }
        else
        {
            cout << products[index] << " has been deleted." << endl;
            products[index] = " ";
            prices[index] = 0;
        }
    }
    else
    {
        cout << "You have not entered any record." << endl;
    }
    clear_screen();
}
void update_seller()
{
    cout << "Sellers Menu > Update product >" << endl << endl;
    bool yt = check_product();
    if (yt == 1)
    {
        string update_product;
        int index = -1;
        bool yt = check_product();
        if (yt == 1)
        {
            cin.ignore();
            cout << "Enter the name of product you want to update : ";
            getline(cin,update_product);
            for (int x = 0; x < num_products; x++)
            {
                if (update_product == products[x])
                {
                    index = x;
                }
            }
            if (index == -1)
            {
                cout << "There is no such Product." << endl;
            }
            else
            {
                cout << "Enter the update name of product : ";
                cin >> products[index];
                cout << "Enter the updated the price of " << products[index] << " : ";
                cin >> prices[index];
                cout << products[index] << " has been updated Its current price is " << prices[index] << "." << endl;
            }
        }
        else
        {
            cout << "You have not entered any record." << endl;
        }
    }
    clear_screen();
}
char customer_menu()
{
    cout << "////////////////////////////////////< Customer Menu >/////////////////////////////////////" << endl
         << endl;
    cout << "1) View Items" << endl;
    cout << "2) View cart" << endl;
    cout << "3) Payment" << endl;
    cout << "4) Exit" << endl;
    cout << endl;
    cout << "Enter your option...." << endl;
    cin >> op;
    return op;
}
void add_cust_to_array(string name, string pass)
{
    user_nameA[num_cust] = name;
    user_passwordA[num_cust] = pass;
    num_cust++;
}
void create_account_customer()
{
    string name, pass;
    cin.ignore();
    cout << "Enter your name : ";
    getline(cin,name);
    cout << "Create your Password : ";
    getline(cin,pass);
    cout << "Welcome " << user_nameA[num_cust] << endl;
    add_cust_to_array(name, pass);
    cout << "Your account has been created Successfully." << endl;
}
void show_products_cust()
{
    bool yt = check_product();
    if (yt == 1)
    {
        string buy_products;
        int count=1;
        if (num_product1 < 5)
        {
            while (num_product1 < 5 || buy_products == "e")
            {
                header();
                cout.setf(ios::left);
                cout.width(30);
                
                cout << "Products";
                cout.width(30);
                cout<<"Prices" << endl;
                for (int x = 0; x < num_products; x++)
                {
                    if (prices[x] != 0)
                    {
                        cout.setf(ios::left);
                        cout.width(30);
                        cout << products[x];
                        cout.width(30);
                        cout << prices[x] << endl;
                    }
                }
                cin.ignore();
                cout << "Which product you want to buy(Press e to exit) : ";
                getline(cin, buy_products);
                int yt = check_name(buy_products);
                if (yt != -1)
                {
                    buy_productA[num_product1] = buy_products;
                    buy_product_price[num_product1] = prices[yt];
                    num_product1++;
                    cout <<buy_products<<" has been successfully added to the cart."<<endl;
                    clear_screen();
                    break;
                }
                else
                {
                    cout << "There is no such product." << endl;
                    cout << "Please enter again." << endl;
                }
                clear_screen();
            }
        }
        else
        {
            cout <<"You have reached your limit"<<endl;
            clear_screen();
        }
    }
    else
    {
        cout << "No Products to Display." << endl;
        clear_screen();
    }
    
}
void store_seller_data_to_file()
{
    fstream str;
    int x=0;
    str.open("seller.txt", ios::out);
    while(x < num_seller)
    {
        if(seller_phone_num[x] != "")
        {
            str << endl;
            str << seller_name[x] << "$";
            str << seller_phone_num[x] << "$";
            str << seller_buisness[x] << "$";
            str << seller_password[x];
        }
        x++;
    }
    str.close();
}
void store_products_to_file()
{
    fstream store;
    int x=0;
    store.open("product.txt",ios::out);
    while(x < num_products)
    {
        if(prices[x] > 0)
        {
            store << products[x] << "$";
            store << prices[x];
            store << endl;
        }
        x++;
    }
    store.close();
}
void load_customer_data()
{
    fstream file;
    string name,pass,str;
    file.open("cust.txt" ,ios::in);
    while(!file.eof())
    {
        getline(file,str);
        name=parse(str,1);
        pass=parse(str,2);
        add_cust_to_array(name , pass);
    }
    file.close();
}
void store_cust_data()
{
    fstream file;
    file.open("cust.txt" , ios::out);
    int x=0;
    while(x < num_cust)
    {
        if(user_nameA[x] != "")
        {
            file << user_nameA[x] << "$" << user_passwordA[x] << endl;
        }
        x++;
    }
    file.close();
}

/////////////////////////////////////////   End    of     Function  /////////////////////////////////

/////////////////////////////////////////       MAIN    ///////////////////////////////////////
main()
{
    load_seller_data_to_array();
    load_products_to_array();
    load_customer_data();
    string delete_seller;
    char main_menu_option;
    string admin_pass = "1234";
    string pass;
    while (main_menu_option != '4')
    {
        header();
        main_menu_option = main_menu();
        if (main_menu_option == '1')    //////////////////////  Admin Loop  /////////////////////
        {
            header();
            cout << "Enter Pasword to continue to the Admin Menu........."<<endl<<endl;
            cin.ignore();
            cout << "Enter password : ";
            getline(cin,pass);
            system("cls");
            if (pass == admin_pass)
            {
                char admin_option = '9';
                string delete_seller;
                while (admin_option != '6')
                {
                    header();
                    admin_option = admin_menu();
                    header();
                    if (admin_option == '1')
                    {
                        add_seller();
                    }
                    else if (admin_option == '2')
                    {
                        cout << "Admin Menu > View Seller > " << endl<< endl;
                        if (check_seller())
                        {
                            cout.setf(ios::left);
                            cout.width(30);
                            cout << "Name";
                            cout.width(30);
                            cout<<"Phone Number";
                            cout.width(30);
                            cout<<"Buisness";
                            cout.width(30);
                            cout<<"Password"<< endl;
                            show_seller_data();
                        }
                        else
                        {
                            cout << "You have not entered any data yet...." << endl;
                        }
                        clear_screen();
                    }
                    else if (admin_option == '3')
                    {
                        cout << "Admin Menu > History > " << endl<< endl;
                        cout << "Ali just sold 2 bags to user179. " << endl;
                        cout << "Ahmad updated his stock. " << endl;
                        cout << "Ali updated his account." << endl;
                        for (int x = 0; x < num_seller; x++)
                        {
                            if (seller_phone_num[x] != "")
                            {
                                cout << "You just added " << seller_name[x] << " to " << seller_buisness[x] << " Buisness list." << endl;
                            }
                        }
                        clear_screen();
                    }
                    else if (admin_option == '4')
                    {
                        cout << "Admin Menu > Delete Seller >" << endl<< endl;
                        cout << "Enter Password : " << endl;
                        cin >> pass;
                        if (pass == admin_pass)
                        {
                            int index = -1;
                            cin.ignore();
                            cout << "Enter the name of Seller you want to delete : ";
                            getline(cin,delete_seller);
                            for(int x = 0 ; x <= num_seller ; x++)
                            {
                                if(delete_seller == seller_name[x])
                                {
                                    index = x ;
                                    break;
                                }
                            }
                            if(index != -1 )
                            {
                                cout << seller_name[index] << " has been deleted from " << seller_buisness[index] << " buisness list." << endl;
                                seller_name[index] = "";
                                seller_buisness[index] = "";
                                seller_password[index] = "";
                                seller_phone_num[index] = "";
                            }
                            else
                            {
                                cout << "There is no Seller named as " << delete_seller << endl;
                            }
                        }
                        else
                        {
                            cout << "You have Entered the wrong Password" << endl;
                        }
                        clear_screen();
                    }
                    else if (admin_option == '5')
                    {
                        cout << "Admin Menu > Update Password >" << endl << endl;
                        cout << "Enter your Old Password : "<<endl;
                        cin >> pass;
                        if(pass == admin_pass)
                        {
                            string confirm_pass,pass1;
                            string cancel_pass;
                            while (cancel_pass != "c" )
                            {
                                header();
                                cout << "Admin Menu > Update Password >" << endl << endl;
                                cin.ignore();
                                cout << "Enter your new Password : ";
                                getline(cin,pass1);
                                cout << "Renter your new Password : " ;
                                getline(cin,confirm_pass);
                                if (pass1 == confirm_pass)
                                {
                                    if (admin_pass == pass1 || admin_pass == confirm_pass)
                                    {
                                        cout << "New Password can not be the old password." << endl;
                                        cout << "Please enter again..........(Press C to cancel)" << endl;
                                        cin >> cancel_pass;
                                    }
                                    else
                                    {
                                        admin_pass = pass1;
                                        cout << "Your Password has been changed." << endl;
                                        break;
                                    }
                                }
                                else
                                {
                                    cout << "Password does not match." << endl;
                                    cout << "Please enter again..........(Press C to cancel)" << endl;
                                    cin >> cancel_pass;
                                }
                            }
                        }
                        else
                        {
                            cout << "You have Entered the wrong Password." << endl;
                        }
                        clear_screen();
                    }
                    else if (admin_option == '6')
                    {
                        cout << "Thanks for using our Program.." << endl;
                        cout << "We are happy to serve you" << endl;
                        clear_screen();
                    }
                    else
                    {
                        cout<<"You have entered the wrong input"<<endl;
                        cout<<endl;
                    }
                }
            }
            else
            {
                cout << "You have Entered the wrong Password" << endl;
                clear_screen();
            }
        }
        else if(main_menu_option == '2')    //////////////////  Seller Loop ///////////////////////
        {
            string pass="0",name;
            int index = -1;
            char seller_option = '9';
            header();
            cin.ignore();
            cout <<"Enter your name : ";
            getline(cin,name);
            cout<<"Enter your Password : ";
            getline(cin,pass);
            for(int x = 0 ; x < num_seller; x++)
            {
                if(pass == seller_password[x] && name == seller_name[x])
                {
                    index = x ;
                }
            }
            if(index != -1)
            {
                cout << "Hello " << seller_name[index]<<" ." << endl;
                cout << "Hope you are fine." << endl;
                cout << "Lets get back to work.............." << endl<<endl;
                clear_screen();
                while (seller_option != '6')
                {
                    header();
                    seller_option = seller_menu();
                    header();
                    if (seller_option == '1')
                    {
                        add_product();
                    }
                    else if(seller_option == '2')
                    {
                        cout << "Sellers Menu > View Products >" << endl << endl;
                        show_products();
                    }
                    else if(seller_option == '3')
                    {
                        cout << "Sellers Menu > Sorted product >" << endl << endl;
                        sorting();
                    }
                    else if(seller_option == '4')
                    {
                        delete_product();
                    }
                    else if(seller_option == '5')
                    {
                        update_seller();
                    }
                    else if(seller_option == '6')
                    {
                        cout << "Thanks for using our Program.." << endl;
                        cout << "We are happy to serve you" << endl;
                        clear_screen();
                    }
                    else
                    {
                        cout <<"You have entered the wrong input"<<endl;
                    }
                }
            }
            else
            {
                cout << "You have entered the wrong Password" << endl;
                clear_screen();
            }
        }
        else if(main_menu_option == '3')
        {
            char customer_option ='9';
            char exit=' ';
            char option;
            
                while (exit != 'e')
                {
                    header();
                    string user_name,user_password;
                    cout << endl;
                    cout << "1) Create new account" << endl;
                    cout << "2) Login (If you already have an account)" << endl;
                    cout << " Press e to exit"<<endl <<endl;
                    cin  >> exit;
                    if (exit == '1')
                    {
                        create_account_customer();
                        clear_screen();
                    }
                    else if (exit == '2')
                    {
                        string user_name, user_password;
                        int index = -1;
                        cin.ignore();
                        cout << "Enter your name : ";
                        getline(cin,user_name);
                        cout << "Enter your Password : ";
                        getline(cin,user_password);
                        for ( int x = 0; x < num_cust; x++ )
                        {
                            if (user_name == user_nameA[x] && user_password == user_passwordA[x])
                            {
                                index = x;
                            }
                        }
                        if (index != -1)
                        {
                            while(customer_option != '4')
                            {
                                header();
                                customer_option = customer_menu();
                                header();
                                if(customer_option == '1')
                                {
                                    cout << "Customer Menu > View Products >" << endl<<endl;
                                    show_products_cust();
                                }
                                else if (customer_option == '2')
                                {
                                    cout << "Customer Menu > Cart >" << endl<<endl;
                                    bool yt = check_product;
                                    if (yt == 1)
                                    {
                                        cout.setf(ios::left);
                                        cout.width(30);
                                        cout << "Products";
                                        cout.width(30);
                                        cout<<"Prices" << endl;
                                        for (int x = 0; x < num_product1; x++)
                                        {
                                            cout.setf(ios::left);
                                            cout.width(30);
                                            cout << buy_productA[x];
                                            cout.width(30);
                                            cout << buy_product_price[x] << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "No Products to Display." << endl; 
                                    }
                                    clear_screen();
                                }
                                else if (customer_option == '3')
                                {
                                    cout << "Customer Menu > Payment > " << endl<<endl;
                                    int op1;
                                    cout << "Select the payment method : " << endl;
                                    cout << "1) Debit Card " << endl;
                                    cout << "2) Cash On Dilivered " << endl;
                                    cin >> op1;
                                    if (op1 == 1)
                                    {
                                        int tr;
                                        string credit_card_num;
                                        while (true)
                                        {
                                            header();
                                            cin.ignore();
                                            cout << "Please enter your credit card number : ";
                                            getline(cin,credit_card_num);
                                            cout << "Please enter correct Card number ";
                                            cout << "Press (1) to exit" << endl;
                                            cin >> tr;
                                            if (tr == 1)
                                            {
                                                break;
                                            }
                                        }
                                    }   
                                    else if (op1 == 2)
                                    {
                                        header();
                                        string location;
                                        string addrress;
                                        cout << "On which Adrress you want to recieve parcel" << endl;
                                        cout << "1) Home Adrress" << endl;
                                        cout << "2) Office Adrress" << endl;
                                        cin.ignore();
                                        getline(cin,location);
                                        cout << "Please Enter your Addrress..." << endl;
                                        cin.ignore();
                                        getline(cin,addrress);
                                        cout << "Your order has been placed.You will recieve parcel in 3 to 5 working days." << endl;
                                        cout << "You have to pay cash on delivery." << endl;
                                    }
                                    else
                                    {
                                        cout <<"You have entered the wrong input"<<endl;
                                    }
                                    clear_screen();
                                }
                                else if (customer_option == '4')
                                {
                                    cout << "Thanks for using our Program.." << endl;
                                    cout << "We are happy to serve you" << endl;
                                    exit = 'e';
                                    clear_screen();
                                }
                                else
                                {
                                    cout << "You have entered the wrong input" << endl;
                                }
                            }
                        }
                        else
                        {
                            cout << "Sorry it seems like you do not have any account..." << endl;
                            cout << "Try to connect later...." << endl;
                        }
                        clear_screen();
                    }
                    else
                    {
                        header();
                        cout <<"You have entered the Wrong input."<<endl;
                        clear_screen();
                    }
                    system("cls");
                }
        }
        else if(main_menu_option == '4')
        {
            store_seller_data_to_file();
            store_products_to_file();
            store_cust_data();
            cout << "Thanks for using our Program.." << endl;
            cout << "We are happy to serve you" << endl;
            clear_screen();
        }
        else
        {
            header();
            cout <<"You have entered the Wrong input."<<endl;
            clear_screen();
        }
    }
}