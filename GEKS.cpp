#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

void banner();
void user_interface();
void home();
void admin_interface(int lipstick_stock, int Blush_stock, int Concealer_stock, int Foundation_stock, int Eyeliner_stock, int Eyeshadow_stock, int Facewash_stock, int BeautySoap_stock, int Moisturizer_stock, int Serum_stock, int Toner_stock);
int shop_Items(int product_Choice);
void Makeup_products(int lipstick_stock, int Blush_stock, int Concealer_stock, int Foundation_stock, int Eyeliner_stock, int Eyeshadow_stock);
void Skincare_product(int Facewash_stock, int BeautySoap_stock, int Moisturizer_stock, int Serum_stock, int Toner_stock);
void Payment(int index, double total_ammount, double Sub_total[99], int product_ammount[99], string Product_name[99]);

int main(){
    int index = 0, total, payment_option, delivery_choice, human_Choice, Acc_num, product_Choice, Makeup_name, Skincare_name, Admin_choice, Admin;
    int product_ammount[99], lipstick_stock = 50, Blush_stock = 50, Concealer_stock = 50, Foundation_stock = 50, Eyeliner_stock = 50, Eyeshadow_stock = 50, Facewash_stock = 50, BeautySoap_stock = 50, Moisturizer_stock = 50, Serum_stock = 50, Toner_stock = 50, lipstick_ammount, Blush_ammount, Concealer_ammount, Foundation_ammount, Eyeliner_ammount, Eyeshadow_ammount, Facewash_ammount, BeautySoap_ammount, Moisturizer_ammount, Serum_ammount, Toner_ammount;
    double Sub_total[99], total_ammount = 0.00, lipstick = 350.25, Blush = 380.25, Concealer = 250.25, Foundation = 599.99, Eyeliner = 250.25, Eyeshadow = 260.25, Facewash = 250.25, BeautySoap = 280.25, Moisturizer = 250.25, Serum = 599.99, Toner = 250.25;
    string Product_name[99], Acc_name, Acc_email, Acc_address;
    char again, choice;

    /*Home interfce*/
    home:
    system("CLS");
    home();
    cout <<"\tEnter the corresponding number of your choice: ";
    cin >> human_Choice;
    system("CLS");
    /*admin and user option*/
    switch(human_Choice){   
    case 1:
    /*admin option*/
        system("CLS");
        admin:
        do{
        system("CLS");
        admin_interface(lipstick_stock, Blush_stock, Concealer_stock, Foundation_stock, Eyeliner_stock, Eyeshadow_stock, Facewash_stock, BeautySoap_stock, Moisturizer_stock, Serum_stock, Toner_stock);
        cout <<"\tEnter the product id of items you want to resupply: ";
        cin >> Admin;
        switch (Admin){
        case 1:
            cout <<"\tHow many lipstick you want to supply: ";
            cin >> Admin_choice;
            lipstick_stock += Admin_choice;
            break;
        case 2:
            cout <<"\tHow many Blush you want to supply: ";
            cin >> Admin_choice;
            Blush_stock += Admin_choice;
            break;
        case 3:
            cout <<"\tHow many Concealer you want to supply: ";
            cin >> Admin_choice;
            Concealer_stock += Admin_choice;
            break;
        case 4:
            cout <<"\tHow many Foundation you want to supply: ";
            cin >> Admin_choice;
            Foundation_stock += Admin_choice;
            break;
        case 5:
            cout <<"\tHow many Eyeliner you want to supply: ";
            cin >> Admin_choice;
            Eyeliner_stock += Admin_choice;
            break;
        case 6:
            cout <<"\tHow many EyeShadow you want to supply: ";
            cin >> Admin_choice;
            Eyeshadow_stock += Admin_choice;
            break;
        case 7:
            cout <<"\tHow many Facewash you want to supply: ";
            cin >> Admin_choice;
            Facewash_stock += Admin_choice;
            break;
        case 8:
            cout <<"\tHow many Beauty Soap you want to supply: ";
            cin >> Admin_choice;
            BeautySoap_stock += Admin_choice;
            break;
        case 9:
            cout <<"\tHow many Moisturizer you want to supply: ";
            cin >> Admin_choice;
            Moisturizer_stock += Admin_choice;
            break;
        case 10:
            cout <<"\tHow many Serum you want to supply: ";
            cin >> Admin_choice;
            Serum_stock += Admin_choice;
            break;
        case 11:
            cout <<"\tHow many Toner you want to supply: ";
            cin >> Admin_choice;
            Toner_stock += Admin_choice;
            break;
        case 12:
            goto home;
            break;
        default:
            cout <<"\tEnter valid choice" <<endl;
            goto admin;
            break;
        }
        }while(Admin != 12);
        break;
    case 2:
    /*User option*/
        user:
        system("CLS");
        user_interface();
        cout <<"\tEnter the corresponding number of your choice: ";
        cin >> human_Choice;
        break;
    default:
        cout <<"\tInvalid Choice" <<endl;
        goto home;
    }
    system("CLS");
    /*For Beauty products selection*/
    switch (human_Choice){
    case 1:
        product_Choice = shop_Items(product_Choice);
        break;
    case 2:
        return 0;
        break;
    default:
        cout <<"\tEnter valid number" <<endl;
        goto user;
    }
    system("CLS");
    /*For product type choice selection*/
    switch (product_Choice){
    case 1:
        Makeup:
        system("CLS");
        do{
            Makeup_products(lipstick_stock, Blush_stock, Concealer_stock, Foundation_stock, Eyeliner_stock, Eyeshadow_stock); 
            cout <<"\tEnter the product id you want to purchase: ";
            cin >> Makeup_name;
            switch (Makeup_name){
                case 1:
                    cout <<"\tEnter the quantity of : ";
                    cin >> lipstick_ammount;
                    if(lipstick_stock != 0){
                    product_ammount[index] = lipstick_ammount;
                    Product_name[index] = "Lipstick";
                    Sub_total[index] = lipstick;
                    total = lipstick * lipstick_ammount;
                    total_ammount += total;
                    lipstick_stock -= lipstick_ammount;
                    ++index;
                    } 
                    else{
                        cout <<"\tout of stock" <<endl;
                    }
                    break;
                case 2:
                    cout <<"\tEnter the quantity of : ";
                    cin >> Blush_ammount;
                    if(Blush_stock != 0){
                    product_ammount[index] = Blush_ammount;
                    Product_name[index] = "Blush\t";
                    Sub_total[index] = Blush;
                    total = Blush * Blush_ammount;
                    total_ammount += total;
                    Blush_stock -= Blush_ammount;
                    ++index;
                    } 
                    else{
                        cout <<"\tout of stock" <<endl;
                    }
                    break;
                case 3:
                    cout <<"\tEnter the quantity of : ";
                    cin >> Concealer_ammount;
                    if(Concealer_stock != 0){
                    product_ammount[index] = Concealer_ammount;
                    Product_name[index] = "Concealer";
                    Sub_total[index] = Concealer;
                    total = Concealer * Concealer_ammount;
                    total_ammount += total;
                    Concealer_stock -= Concealer_ammount;
                    ++index;
                    } 
                    else{
                        cout <<"\tout of stock" <<endl;
                    }
                    break;
                case 4:
                    cout <<"\tEnter the quantity of : ";
                    cin >> Foundation_ammount;
                    if(Foundation_stock != 0){
                    product_ammount[index] = Foundation_ammount;
                    Product_name[index] = "Foundation";
                    Sub_total[index] = Foundation;
                    total = Foundation * Foundation_ammount;
                    total_ammount += total;
                    Foundation_stock -= Foundation_ammount;
                    ++index;
                    } 
                    else{
                        cout <<"\tout of stock" <<endl;
                    }
                    break;
                case 5:
                    cout <<"\tEnter the quantity of : ";
                    cin >> Eyeliner_ammount;
                    if(Eyeliner_stock != 0){
                    product_ammount[index] = Eyeliner_ammount;
                    Product_name[index] = "Eyeliner";
                    Sub_total[index] = Eyeliner;
                    total = Eyeliner * Eyeliner_ammount;
                    total_ammount += total;
                    Eyeliner_stock -= Eyeliner_ammount;
                    ++index;
                    } 
                    else{
                        cout <<"\tout of stock" <<endl;
                    }
                    break;
                case 6:
                    cout <<"\tEnter the quantity of : ";
                    cin >> Eyeshadow_ammount;
                    if(Eyeshadow_stock != 0){
                    product_ammount[index] = Eyeshadow_ammount;
                    Product_name[index] = "Eyeshadow";
                    Sub_total[index] = Eyeshadow;
                    total = Eyeshadow * Eyeshadow_ammount;
                    total_ammount += total;
                    Eyeshadow_stock -= Eyeshadow_ammount;
                    ++index;
                    } 
                    else{
                        cout <<"\tout of stock" <<endl;
                    }
                    break;
                case 7:
                    goto skincare;
                    break;
                default:
                    cout <<"Invalid number" <<endl;
                    break;
            }
            cout <<"\tWould like to add more items?(Y/N)(y/n): ";
            cin >> again;
            system("CLS");
        }while(again == 'Y' || again == 'y');
        break;
    case 2:
        skincare:
        system("CLS");
        do{
            Skincare_product(Facewash_stock, BeautySoap_stock, Moisturizer_stock, Serum_stock, Toner_stock);
            cout <<"\tEnter the product id you want to purchase: ";
            cin >> Skincare_name;
            switch (Skincare_name){
            case 1:
                cout <<"\tEnter the quantity of : ";
                cin >> Facewash_ammount;
                if(Facewash_stock != 0){
                product_ammount[index] = Facewash_ammount;
                Product_name[index] = "Facewash";
                Sub_total[index] = Facewash;
                total = Facewash * Facewash_ammount;
                total_ammount += total;
                Facewash_stock -= Facewash_ammount;
                ++index;
                } 
                else{
                    cout <<"\tout of stock" <<endl;
                }
                break;
            case 2:
                cout <<"\tEnter the quantity of : ";
                cin >> BeautySoap_ammount;
                if(BeautySoap_stock != 0){
                product_ammount[index] = BeautySoap_ammount;
                Product_name[index] = "Beauty Soap";
                Sub_total[index] = BeautySoap;
                total = BeautySoap * BeautySoap_ammount;
                total_ammount += total;
                BeautySoap_stock -= BeautySoap_ammount;
                ++index;
                } 
                else{
                    cout <<"\tout of stock" <<endl;
                }
                break;
            case 3:
                cout <<"\tEnter the quantity of : ";
                cin >> Moisturizer_ammount;
                if(Moisturizer_stock != 0){
                product_ammount[index] = Moisturizer_ammount;
                Product_name[index] = "Moisturizer";
                Sub_total[index] = Moisturizer;
                total = Moisturizer * Moisturizer_ammount;
                total_ammount += total;
                Moisturizer_stock -= Moisturizer_ammount;
                ++index;
                } 
                else{
                    cout <<"\tout of stock" <<endl;
                }
                break;
            case 4:
                cout <<"\tEnter the quantity of : ";
                cin >> Serum_ammount;
                if(Serum_stock != 0){
                product_ammount[index] = Serum_ammount;
                Product_name[index] = "Serum\t";
                Sub_total[index] = Serum;
                total = Serum * Serum_ammount;
                total_ammount += total;
                Serum_stock -= Serum_ammount;
                ++index;
                } 
                else{
                    cout <<"\tout of stock" <<endl;
                }
                break;
            case 5:
                cout <<"\tEnter the quantity of : ";
                cin >> Toner_ammount;
                if(Toner_stock != 0){
                product_ammount[index] = Toner_ammount;
                Product_name[index] = "Toner\t";
                Sub_total[index] = Toner;
                total = Toner * Toner_ammount;
                total_ammount += total;
                Toner_stock -= Toner_ammount;
                ++index;
                } 
                else{
                    cout <<"\tout of stock" <<endl;
                }
                break;
            case 6:
                goto Makeup;
            default:
                cout <<"Invalid number" <<endl;
                break;
            }
            cout <<"\tWould like to add more items?(Y/N)(y/n): ";
            cin >> again;
            system("CLS");
        } while (again == 'Y' || again == 'y');
        break;
    default:
        cout <<"Enter valid number" <<endl;
    }
    /*For Contact Information of user*/
    system("CLS");
    while (choice != 'y' && choice != 'Y'){
    Payment(index, total_ammount, Sub_total, product_ammount, Product_name);
    cout <<"\t\t\tPress (Y/y) to rroceed to check out: ";
    cin >> choice;
    system("CLS");
    if(choice == 'Y' || choice == 'y'){
    		banner();
    		cout <<"\t\t\t                          Contact Information" <<endl;
    		cout <<"\t\t\tName: ";
    		cin >> Acc_name;
    		cout <<"\t\t\tContact Number: ";
    		cin >> Acc_num;
    		cout <<"\t\t\tEmail Address: ";
    		cin >> Acc_email;
    		cout <<"\t\t\tComplete Address: ";
    		cin >> Acc_address;
	}
    else{
        cout <<"\t\tinvalid choice" <<endl;
    }
    }
    system("CLS");
    /*Payment option of the user*/
    system("CLS");
    while (delivery_choice != 1 && delivery_choice != 2 && delivery_choice != 3){
    banner();
    cout <<"\t\t\t                                  Billing option" <<endl;
    cout <<"\t\t\t[1] - Cash on Delivery" <<endl;
    cout <<"\t\t\t[2] - G-CASH" <<endl;
    cout <<"\t\t\t[3] - Credit card / Debit card" <<endl;
    cout <<"\t\t\tChose your payment option: ";
    cin >> delivery_choice;
    system("CLS");
    switch (delivery_choice){
    case 2:
        banner();
        cout <<"\t\t\tEnter you G-cash number: ";
        cin >> payment_option;
        break;
    case 3:
        banner();
        cout <<"\t\t\tEnter you Credit card / Debit card number: ";
        cin >> payment_option;
        break;
    default:
        cout <<"\t\t\tInvalid choice" <<endl;
        break;
    }
    }
    /*Delivery interface*/
    system("CLS");
    banner();
    switch (delivery_choice){
    case 1:
        cout <<"\t\t\tYour order has been placed" <<endl;
        Payment(index, total_ammount, Sub_total, product_ammount, Product_name);
        cout <<"\t\t\tName: " <<Acc_name <<endl;
        cout <<"\t\t\tContact Number: " <<Acc_num <<endl;
        cout <<"\t\t\tEmail Address: " <<Acc_email <<endl;
        cout <<"\t\t\tAddress: " <<Acc_address <<endl;
        cout <<"\t\t\tPayment option: Cash on delivery" <<endl;
        cout <<"\t\t\tOrder Successful" <<endl;
        cout <<"\t\t\tEstimated delivery date 3 to 5days" <<endl;
        cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
        break;
    case 2:
        cout <<"\t\t\tYour order has been placed" <<endl;
        Payment(index, total_ammount, Sub_total, product_ammount, Product_name);
        cout <<"\t\t\tName: " <<Acc_name <<endl;
        cout <<"\t\t\tContact Number: " <<Acc_num <<endl;
        cout <<"\t\t\tEmail Address: " <<Acc_email <<endl;
        cout <<"\t\t\tAddress: " <<Acc_address <<endl;
        cout <<"\t\t\tPayment option: G - cash" <<endl;
        cout <<"\t\t\tnumber: " <<payment_option <<endl;
        cout <<"\t\t\tOrder Successful" <<endl;
        cout <<"\t\t\tEstimated delivery date 3 to 5days" <<endl;
        cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
        break;
    case 3:
        cout <<"\t\t\tYour order has been placed" <<endl;
        Payment(index, total_ammount, Sub_total, product_ammount, Product_name);
        cout <<"\t\t\tName: " <<Acc_name <<endl;
        cout <<"\t\t\tContact Number: " <<Acc_num <<endl;
        cout <<"\t\t\tEmail Address: " <<Acc_email <<endl;
        cout <<"\t\t\tAddress: " <<Acc_address <<endl;
        cout <<"\t\t\tPayment option: Credit card / Debit card" <<endl;
        cout <<"\t\t\tnumber: " <<payment_option <<endl;
        cout <<"\t\t\tOrder Successful" <<endl;
        cout <<"\t\t\tEstimated delivery date 3 to 5days" <<endl;
        cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
        break;
    default:
        cout <<"\t\terror" <<endl;
        break;
    }
    
    return 0;
}
int shop_Items(int product_Choice){
    cout <<"\t=====================================================================" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t|                           GEKS Beauty Co.                         |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t=====================================================================" <<endl;
    cout <<"\t|  Choose your desire beauty products                               |" <<endl;
    cout <<"\t|  [1] - Make up                                                    |" <<endl;
    cout <<"\t|  [2] - Skincare                                                   |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t=====================================================================" <<endl;
    cout <<"\tEnter the corresponding number of your choice: ";
    cin >> product_Choice;

    return product_Choice;
}
void Makeup_products(int lipstick_stock, int Blush_stock, int Concealer_stock, int Foundation_stock, int Eyeliner_stock, int Eyeshadow_stock){
    cout <<"\t+============================================================================+" <<endl;
    cout <<"\t| Stock  Product Name             Make up products               Price       |" <<endl;
    cout <<"\t+============================================================================+" <<endl;
    cout <<"\t|  " <<lipstick_stock <<"   [1]Lipstick\t\t\t\t\t\t350.25Php    |" <<endl;
    cout <<"\t|  " <<Blush_stock    <<"   [2]Blush\t\t\t\t\t\t380.25Php    |" <<endl;
    cout <<"\t|  " <<Concealer_stock<<"   [3]Concealer\t\t\t\t\t\t250.25Php    |" <<endl;
    cout <<"\t|  " <<Foundation_stock <<"   [4]Foundation\t\t\t\t\t\t599.99Php    |" <<endl;
    cout <<"\t|  " <<Eyeliner_stock <<"   [5]Eyeliner\t\t\t\t\t\t250.25Php    |" <<endl;
    cout <<"\t|  " <<Eyeshadow_stock <<"   [6]Eyeshadow\t\t\t\t\t\t260.25Php    |" <<endl;
    cout <<"\t|  \t[7]Go to Skincare products\t\t\t\t\t     |" <<endl;
    cout <<"\t+============================================================================+" <<endl;
}
void Skincare_product(int Facewash_stock, int BeautySoap_stock, int Moisturizer_stock, int Serum_stock, int Toner_stock){
    cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t| Stock  Product Name             Skincare products                Price    |" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t|  " <<Facewash_stock <<"   [1]Facewash\t                                          350.25Php |" <<endl;
    cout <<"\t|  " <<BeautySoap_stock<<"   [2]Beauty Soap\t                                          380.25Php |" <<endl;
    cout <<"\t|  " <<Moisturizer_stock<<"   [3]Moisturizer\t                                          250.25Php |" <<endl;
    cout <<"\t|  " <<Serum_stock<<"   [4]Serum\t                                          599.99Php |" <<endl;
    cout <<"\t|  " <<Toner_stock<<"   [5]Toner\t                                          250.25Php |" <<endl;
    cout <<"\t|  \t[6]Go to Make up products\t\t                            |" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
}
void Payment(int index, double total_ammount, double Sub_total[99], int product_ammount[99], string Product_name[99]){
    cout <<"\t\t\tGEKS Beauty co." <<endl;
    cout <<"\t\t\tORDER #0001 FOR CUSTOMER" <<endl;
    cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
    cout <<"\t\t\tQTY\tITEM\t\t\t\tPRICE" <<endl;
    cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
    for (int i = 0; i < index; i++)
    {
        cout <<"\t\t\t" <<product_ammount[i] <<"\t" <<Product_name[i] <<"\t\t\t" <<Sub_total[i] <<"Php" <<endl;
    }
    cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
    cout <<"\t\t\tTOTAL: " <<setprecision(2) <<fixed <<total_ammount  <<"Php" <<endl <<endl;
    cout <<"\t\t\t---------------------------------------------------------------------" <<endl;
}
void banner(){
	cout <<"\t\t\t=====================================================================" <<endl;
    cout <<"\t\t\t|                                                                   |" <<endl;
    cout <<"\t\t\t|                           GEKS Beauty Co.                         |" <<endl;
    cout <<"\t\t\t|                                                                   |" <<endl;
    cout <<"\t\t\t=====================================================================" <<endl;
}
void user_interface(){
    cout <<"\t=====================================================================" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t|                           GEKS Beauty Co.                         |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t=====================================================================" <<endl;
    cout <<"\t|  Welcome to GEKS Beauty co., Where we offer high quality,         |" <<endl;
    cout <<"\t|  proven and tested by PDA beauty products                         |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t|  [1] - Buy                                                        |" <<endl;
    cout <<"\t|  [2] - Exit shop                                                  |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t=====================================================================" <<endl;
}
void home(){
    cout <<"\t=====================================================================" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t|                           GEKS Beauty Co.                         |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t=====================================================================" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t|  [1] - Admin                                                      |" <<endl;
    cout <<"\t|  [2] - User                                                       |" <<endl;
    cout <<"\t|                                                                   |" <<endl;
    cout <<"\t=====================================================================" <<endl;
}
void admin_interface(int lipstick_stock, int Blush_stock, int Concealer_stock, int Foundation_stock, int Eyeliner_stock, int Eyeshadow_stock, int Facewash_stock, int BeautySoap_stock, int Moisturizer_stock, int Serum_stock, int Toner_stock){
     cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t| Stock  Product Name             Make up products               Price      |" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t|  " <<lipstick_stock <<"   [1]Lipstick\t\t\t\t\t\t350.25Php   |" <<endl;
    cout <<"\t|  " <<Blush_stock    <<"   [2]Blush\t\t\t\t\t\t380.25Php   |" <<endl;
    cout <<"\t|  " <<Concealer_stock<<"   [3]Concealer\t\t\t\t\t\t250.25Php   |" <<endl;
    cout <<"\t|  " <<Foundation_stock <<"   [4]Foundation\t\t\t\t\t\t599.99Php   |" <<endl;
    cout <<"\t|  " <<Eyeliner_stock <<"   [5]Eyeliner\t\t\t\t\t\t250.25Php   |" <<endl;
    cout <<"\t|  " <<Eyeshadow_stock <<"   [6]Eyeshadow\t\t\t\t\t\t260.25Php   |" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t| Stock  Product Name             Skincare products                Price    |" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
    cout <<"\t|  " <<Facewash_stock <<"   [7]Facewash\t                                          350.25Php |" <<endl;
    cout <<"\t|  " <<BeautySoap_stock<<"   [8]Beauty Soap\t                                          380.25Php |" <<endl;
    cout <<"\t|  " <<Moisturizer_stock<<"   [9]Moisturizer\t                                          250.25Php |" <<endl;
    cout <<"\t|  " <<Serum_stock<<"   [10]Serum\t                                          599.99Php |" <<endl;
    cout <<"\t|  " <<Toner_stock<<"   [11]Toner\t                                          250.25Php |" <<endl;
    cout <<"\t|  \t[12]Go to Home\t                                                    |" <<endl;
    cout <<"\t+===========================================================================+" <<endl;
}