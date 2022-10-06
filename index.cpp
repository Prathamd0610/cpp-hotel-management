#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

class manage
{
    protected:
        int veg_soup,chicken,maggie,pasta,pizza; // quantity vaeriables 
        int cost_veg_soup,cost_chicken,cost_maggie,cost_pasta,cost_pizza;  // cost variables.

    public:
    manage()
    {
        veg_soup=0;
        chicken=0;
        maggie=0;
        pasta=0;
        pizza=0;
         
        cost_veg_soup=0;
        cost_chicken=0;
        cost_maggie=0;
        cost_pasta=0;
        cost_pizza=0;
    }
        void line()
        {
            cout <<endl<<"\t\t\t**************************************************************\n\n";
        }
        void max_quantity()
        {
            
            line();
            //input all quantity of items available:
            cout<<"Enter number of quantity available of each product:"<<endl;
            cout<<"1.Vegetable soup :";
            cin>>veg_soup;
            cout<<"2. Chicken :";
            cin>>chicken;
            cout<<"3. Maggie :";
            cin>>maggie;
            cout<<"4. Pasta :";
            cin>>pasta; 
            cout<<"5. Pizza :";
            cin>>pizza; 
            line();

            // print all quantity of items :
            cout<<"\t\t\t\t\t**Quantity available **"<<endl;
            cout<<"1.Vegetable soup :";
            cout<<veg_soup;
            cout<<endl<<"2. Chicken :";
            cout<<chicken;
            cout<<endl<<"3. Maggie :";
            cout<<maggie;
            cout<<endl<<"4. Pasta :";
            cout<<pasta; 
            cout<<endl<<"5. Pizza :";
            cout<<pizza<<endl; 
            line();
        }
        void cost ()
        {
            //input price of all items :
            cout<<"Enter price of each product:"<<endl;
            cout<<"1.Vegetable soup :";
            cin>>cost_veg_soup;
            cout<<"2. Chicken :";
            cin>>cost_chicken;
            cout<<"3. Maggie :";
            cin>>cost_maggie;
            cout<<"4. Pasta :";
            cin>>cost_pasta; 
            cout<<"5. Pizza :";
            cin>>cost_pizza; 
            line();

                // print price of all items :
            cout<<"\t\t\t\t\t**Price of products **"<<endl;
            cout<<"1.Vegetable soup :";
            cout<<cost_veg_soup;
            cout<<endl<<"2. Chicken :";
            cout<<cost_chicken;
            cout<<endl<<"3. Maggie :";
            cout<<cost_maggie;
            cout<<endl<<"4. Pasta :";
            cout<<cost_pasta; 
            cout<<endl<<"5. Pizza :";
            cout<<cost_pizza<<endl; 
            line();
        }
        void check()
        {
            // print all quantity of items :
            cout<<"\t\t\t\t\t**Quantity available **"<<endl;
            cout<<"1.Vegetable soup :";
            cout<<veg_soup;
            cout<<endl<<"2. Chicken :";
            cout<<chicken;
            cout<<endl<<"3. Maggie :";
            cout<<maggie;
            cout<<endl<<"4. Pasta :";
            cout<<pasta; 
            cout<<endl<<"5. Pizza :";
            cout<<pizza<<endl; 
            line();
        }
};
class authenticate
{
    private:
        int manager;
        int username =9999;
        int flag;
        int i,a,b;
        int pwd_check;
    public:
        void line()
        {
            cout <<endl<<"\t\t\t**************************************************************\n\n";
        }

        void password()
        {
            for (i=1;i<=3;i++)
            {
                line();
                cout<<"Enter password for manager :";
                cin>>pwd_check;

                if(pwd_check == username)
                {
                    cout<<endl<<"\t\t\t\t\t*PASSWORD IS CORRECT*";
                    break;
                }        
                else 
                {
                    if(i==3)
                    {
                        cout<<endl<<"*INCORRECT PASSWORD*";
                        cout<<endl<<"*ONLY "<<3-i<<" CHANCES LEFT*";
                        exit(2);
                    }
                    else{
                        cout<<endl<<"*INCORRECT PASSWORD*";
                        cout<<endl<<"*ONLY "<<3-i<<" CHANCES LEFT*";
                    }

                }
            }
        }
};
class add :protected virtual manage
{
    protected :
        int add_veg_soup;
        int add_chicken;
        int add_maggie;
        int add_pasta;
        int add_pizza;
    
    public:
        void add_quantity()
        {
            //input all quantity of items available:
            cout<<"Enter number of quantity to add :"<<endl;
            cout<<"1.Vegetable soup :";
            cin>>add_veg_soup;
            cout<<"2. Chicken :";
            cin>>add_chicken;
            cout<<"3. Maggie :";
            cin>>add_maggie;
            cout<<"4. Pasta :";
            cin>>add_pasta; 
            cout<<"5. Pizza :";
            cin>>add_pizza; 
            add::line();

            // adding the quantities to available one..
            veg_soup=veg_soup+add_veg_soup;
            chicken=chicken+add_chicken;
            maggie=maggie+add_maggie;
            pasta=pasta+add_pasta;
            pizza=pizza+add_pizza;

            // print all quantity of items :
            cout<<"\t\t\t\t\t**Quantity available after addition **"<<endl;
            cout<<"1.Vegetable soup :";
            cout<<veg_soup;
            cout<<endl<<"2. Chicken :";
            cout<<chicken;
            cout<<endl<<"3. Maggie :";
            cout<<maggie;
            cout<<endl<<"4. Pasta :";
            cout<<pasta; 
            cout<<endl<<"5. Pizza :";
            cout<<pizza<<endl; 
            add::line();
        }
        void line()
        {
            cout <<endl<<"\t\t\t**************************************************************\n\n";
        }
};

class customer :protected virtual authenticate, protected virtual add , protected virtual manage
{
    protected:
        int total_price,wish;
        int order_veg_soup,order_chicken,order_maggie,order_pasta,order_pizza;
        int price_veg_soup,price_chicken,price_maggie,price_pasta,price_pizza;
        char flag;
    
    public:
        customer()
        {
            order_veg_soup=0;
            order_chicken=0;
            order_maggie=0;
            order_pasta=0;
            order_pizza=0;
            price_veg_soup=0;
            price_chicken=0;
            price_maggie=0;
            price_pasta=0;
            price_pizza=0;
            total_price,wish=0;
        }
        void order()
        {
            while(1)
            {
                menu:
                cout<<endl<<"MENU FOR TODAY IS :\n"<<endl;
                cout<<"\t **ITEMS**\t\t **AVAILIBILITY**"<<endl;
                cout<<"1.Vegetable soup :\t\t\t"<<manage::veg_soup<<endl;
                cout<<"2. Chicken :\t\t\t\t"<<manage::chicken<<endl;
                cout<<"3. Maggie :\t\t\t\t"<<manage::maggie<<endl;
                cout<<"4. Pasta :\t\t\t\t"<<manage::pasta<<endl; 
                cout<<"5. Pizza :\t\t\t\t"<<manage::pizza<<endl;
                cout<<"ENTER THE ITEM YOU WANT TO BUY :" ;
                cin>>wish;  
                switch(wish)
                {
                    case 1:
                        cout<<"ENTER THE QUANTITY OF VEGETABLE SOUP :";
                        cin>>order_veg_soup;
                        if(order_veg_soup>manage::veg_soup)
                        {
                            order_veg_soup=0;
                            goto menu;
                        }
                        manage::veg_soup=manage::veg_soup-order_veg_soup;
                        break;
                    case 2:
                        cout<<"ENTER THE QUANTITY OF CHICKEN :";
                        cin>>order_chicken;
                        if(order_chicken>manage::chicken)
                        {
                            cout<<"QUANTITY EXCEED THE STOCK ..."<<endl;
                            order_chicken=0;
                            goto menu;
                        }
                        manage::chicken=manage::chicken-order_chicken;
                        break;
                    case 3:
                        cout<<"ENTER THE QUANTITY OF MAGGIE :";
                        cin>>order_maggie;
                        if(order_maggie>manage::maggie)
                        {
                            cout<<"QUANTITY EXCEED THE STOCK ..."<<endl;
                            order_maggie=0;
                            goto menu;
                        }
                        manage::maggie=manage::maggie-order_maggie;
                        break;
                    case 4:
                        cout<<"ENTER THE QUANTITY OF PASTA :";
                        cin>>order_pasta;
                        if(order_pasta>manage::pasta)
                        {
                            cout<<"QUANTITY EXCEED THE STOCK ..."<<endl;
                            order_pasta=0;
                            goto menu;
                        }
                        manage::pasta=manage::pasta-order_pasta;
                        break;
                    case 5:
                        cout<<"ENTER THE QUANTITY OF PIZZA :";
                        cin>>order_pizza;
                        if(order_pizza>manage::pizza)
                        {
                            cout<<"QUANTITY EXCEED THE STOCK ..."<<endl;
                            order_pizza=0;
                            goto menu;
                        }
                        manage::pizza=manage::pizza-order_pizza;
                        break;
                    default:
                        cout<<"** ENTER THE ABOVE SPECIFIED ITEM ONLY**"<<endl;
                        break;
                    /*
                        manage::veg_soup=manage::veg_soup-order_veg_soup;
                        manage::chicken=manage::chicken-order_chicken;
                        manage::maggie=manage::maggie-order_maggie;
                        manage::pasta=manage::pasta-order_pasta;
                        manage::pizza=manage::pizza-order_pizza;
                    */
                } 
                cout<<"WISH TO ADD MORE ITEMS TO CART ?? (Y/N)";
                cin>>flag;
                if(flag=='N' || flag=='n')
                {
                    price();
                    break;
                }
                if(flag=='Y' || flag == 'y')
                {
                    goto menu;
                }
                else{
                    goto menu;
                }
            }
            
        }
        void price()
            {
                price_veg_soup=(order_veg_soup)*(manage::cost_veg_soup);
                price_chicken=(order_chicken)*(manage::cost_chicken);
                price_maggie=(order_maggie)*(manage::cost_maggie);
                price_pasta=(order_pasta)*(manage::cost_pasta);
                price_pizza=(order_pizza)*(manage::cost_pizza);
                total_price=price_veg_soup+price_chicken+price_maggie+price_pasta+price_pizza;
                cout<<"\n \t\t\t\t\t **YOUR BILL **"<<endl;
                cout<<"\nVEGETABLE-SOUP :Rs"<<price_veg_soup;
                cout<<"\nCHICKEN :Rs"<<price_chicken;
                cout<<"\nMAGGIE :Rs"<<price_maggie;
                cout<<"\nPASTA :Rs"<<price_pasta;
                cout<<"\nPIZZA :Rs"<<price_pizza;
                cout<<""<<endl<<"TOTAL PRICE TO PAY : "<<price_veg_soup<<" + "<<price_chicken<<" + "<<price_maggie<<" + "<<price_pasta<<" + "<<price_pizza<<" = "<<total_price<<endl;
                manage::line();
            }
};
class merge: protected virtual authenticate, protected virtual add, protected virtual customer , protected virtual manage
{
    private:
        int choice,choose;
    public:
        void start()
        {
            authenticate::password();
            manage::max_quantity(),cost();
        }
        void order()
        {
            while(1)
            {
                cout<<"LOG-IN AS ??"<<endl<<"1. MANAGER"<<endl<<"2.CUSTOMER\n"<<"3.EXIT"<<endl;
                cout<<"ENTER YOUR CHOICE :";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                        cout<<"SELECT ANY ONE OPTION :\n"<<"1. Check available stock \n"<<"2. Add more quantity \n"<<"ENTER YOUR CHOICE :";
                        cin>>choose;
                        switch(choose)
                        {
                            case 1:
                                line();
                                manage::check();
                                line();
                                break;

                            case 2:
                                add::add_quantity();
                                line();
                                break;

                            default:
                                cout<<"ENTER VALID OPTION...";
                                break;
                        }
                        break;

                    case 2:
                        customer::order();
                        break;
                        line();

                    case 3:
                        exit(5);

                    default:
                        cout<<" ENTER VALID OPTION ..."<<endl;
                        break;
                }
            }
        }
        void restart()
        {
            cout<<"\n\n\n \t\t\t\t\t** PRESS ANY KEY TO RE-LOGIN **"<<endl;
            getch();
        }
        void line()
        {
            cout <<endl<<"\t\t\t**************************************************************\n\n";
        }
};
int main()
{
    merge i, *bptr;
    i.start();
    i.order();
    i.restart();
}