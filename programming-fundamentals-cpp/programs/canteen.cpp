 #include <iostream>
 using namespace std;
 int main()
  {    
    int choice;

    cout<<" dish.no 1";
       cout<<"samosa.Rs.50"<<endl;
    cout<< "dish.no. 2";
       cout<<"sandwitch.Rs.100"<<endl;
    cout<<" dish.no. 3";
       cout<<"biryanai.Rs.150"<<endl;
    cout<<" dish.no. 4";
       cout<<"pasta.Rs.250"<<endl;
    cout<<" dish.no. 5";
       cout<<"pizza.Rs.1000"<<endl;

       cin >> choice;
    switch(choice){

    case 1:
         cout<<"selected dish.no 1 =>> samosa.Rs.50"<<endl;
         break;
    case 2:
         cout<<"selected dish.no 2 =>> sandwitch.Rs.100"<<endl;
         break;
    case 3:
         cout<<"selected dish.no 3 =>> biryani.Rs.150"<<endl;
         break;
    case 4:
         cout<<"selected dish.no 4 =>> pasta.Rs.250"<<endl;
         break;
    case 5:
         cout<<"selected dish.no 5 =>> pizza.Rs.1000"<<endl;
         break;
    default:
        cout<<"invalid entery";
        
       }
     return 0;         
                
  }