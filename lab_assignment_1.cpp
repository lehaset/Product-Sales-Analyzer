#include <iostream>
#include <string>
#include <iomanip> // for formatting output
#define TAX_RATE 0.15

int main(){

    std::cout << "****************************$********************************\n";
    std::cout << "*                                                          *\n";
    std::cout << "*           Welcome to the Product Sales Analyzer!         *\n";
    std::cout << "*                                                          *\n";
    std::cout << "*  This program is your ultimate tool for managing sales   *\n";
    std::cout << "*  and inventory. Whether you're a small business owner    *\n";
    std::cout << "*  or a store manager, this program will help you:         *\n";
    std::cout << "*                                                          *\n";
    std::cout << "*  1. Calculate total sales and taxes.                     *\n";
    std::cout << "*  2. Track remaining inventory after sales.               *\n";
    std::cout << "*  3. Generate a professional receipt for each sale.       *\n";
    std::cout << "*                                                          *\n";
    std::cout << "*  Built with C++, a powerful compiled language, this      *\n";
    std::cout << "*  program ensures high performance and reliability.       *\n";
    std::cout << "*                                                          *\n";
    std::cout << "****************************$*******************************\n";
    const double tax_rate = 0.15;
    std::string product_name;
    double product_price;
    int item_sold;
    int initial_inventory;
    int product_category;

    std::cout<< "Enter the product name: ";
    std::getline(std::cin, product_name);

    std::cout<< "Enter the initial inventory quantity: ";
    std::cin >> initial_inventory;

    std::cout<< "Enter the product price: ";
    std::cin >> product_price;

    std::cout<< "Enter the number of items sold: ";
    std::cin >> item_sold;
    
    
    while (true){
        std::cout<< "Please enter the product category(1 to 5): ";
        std::cin>> product_category;

        if (product_category >= 1 && product_category<= 5){

            std::cout<< product_category <<'\n';
            break;
        } else {
            std::cout<< "Invalid product category! Please enter a number between 1 and 5" <<'\n';
        }


    }


    int new_inventory = initial_inventory - item_sold;
    double total_sales = item_sold * product_price;  
    double tax_amount = total_sales * tax_rate;
    double total_amount = total_sales + tax_amount;


    std::string inventory_status=(new_inventory < 10 )?  "Low Inventory" : "Sufficient";
    std::cout <<"inventory_status: " <<inventory_status <<'\n';
    
    

    auto sales_copy = total_sales; 
    decltype(initial_inventory) inventory_copy =  initial_inventory;

    switch(product_category) {
        case 1:
            std::cout << "Category 1: Electronics" <<'\n';
            break;
        case 2:
            std::cout << "Category 2: Groceries" <<'\n';
            break;
        case 3:
            std::cout << "Category 3: Clothing" <<'\n';
            break;
        case 4:
            std::cout << "Category 4: Stationery" <<'\n';
            break;
        case 5:
            std::cout << "Category 5: Miscellaneous" <<'\n';
            break;
        default:
            std::cout << "Invalid category! Please enter a number between 1 and 5." <<'\n';
        
            
    }

//simulate receipt printing
    std::cout <<'\n';
    std::cout << "=====================================\n";
    std::cout << "              RECEIPT                \n";
    std::cout << "=====================================\n";

    for (int i = 1 ; i <= item_sold; i++){

        std::cout<< "item sold = " << i <<" -> " <<product_price <<'\n';

        std::cout << "=====================================\n";

        
    }
    
    std::cout <<'\n';
    std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    std::cout << "          SALES SUMMARY              \n";
    std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";

    std::cout << "TAX RATE using #define : " <<TAX_RATE <<'\n';
    std::cout << "TAX RATE using const: " <<tax_rate <<'\n';

    std::cout << "The product name is: " << product_name <<'\n';
    std::cout << "The product category is: " << product_category << '\n';
    std::cout << "The product's initial inventory quantity is: " << initial_inventory <<'\n';
    std::cout << "The product price is: " << product_price <<'\n';
    std::cout << "The number od items sold is: " << item_sold <<'\n';

    std::cout << "New inventory = " << new_inventory <<'\n';
    std::cout << "The total sales amount is: " <<total_sales <<'\n';
    std::cout << "The product's inventory status is: " << inventory_status <<'\n';


    std::cout << "Copy of Total Sales Amount (auto): " << sales_copy << '\n';
    std::cout << "Copy of Initial Inventory (decltype): " << inventory_copy << '\n';
    std::cout << "Total tax amount is: " << tax_amount <<'\n';


    

    

    return 0;
}
