#include <iostream>
#include <fstream>

int main() {
    std::ifstream statement;
    statement.open("C:\\Users\\Malip\\source\\repos\\Reading_Statement\\Statement.txt");
    std::string fio;
    int total_amount = 0, max_amount = -1;
    while (!statement.eof()){
        int money;
        std::string first_name, last_name, data;
        statement >> first_name >> last_name >> money >> data;
        total_amount += money;
        if (max_amount < money) {
            max_amount = money;
            fio = first_name + " " + last_name;
        }
    }
    std::cout << "Total amount: " << total_amount << std::endl;
    std::cout << "Max amount: " << fio << " " << max_amount << std::endl;
    statement.close();

}