#include <iostream>
using namespace std;



int main() {
    
    int amout_of_goods, shipped_goods, product_reservetion;
    
    cout << "Enter amount of goods: ";
    cin >> amout_of_goods;
    
    if (amout_of_goods<=0){
        cout << "Error" << endl;
        
    }else{
        cout << "Enter product reservetion: ";
        cin >> product_reservetion;
        
        if (product_reservetion <0){
            cout <<"Error"<< endl;
            
        }else if(product_reservetion> amout_of_goods){
            cout << "Error"<< endl;
            
        }else{
            
            while (amout_of_goods >= product_reservetion){
                cout << "Enter shipped goods: " ;
                cin >> shipped_goods;
                
                if(shipped_goods <0){
                    cout << "Error"<< endl;
                }else{
                    
                    if(amout_of_goods-shipped_goods<product_reservetion){
                        cout << "Storage is full"<< endl;
                        break;
                        
                    }else if (product_reservetion>=0 && product_reservetion < amout_of_goods){
                        
                        amout_of_goods = amout_of_goods - shipped_goods;
                        cout << "Amount of goods: " << amout_of_goods <<endl;
                    }
                }
            }
        }
    }
    

    return 0;
}


