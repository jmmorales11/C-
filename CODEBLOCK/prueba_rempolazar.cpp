
#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

string Replace(string& str, const string& sub, const string& mod) {
    string tmp(str);
    tmp.replace(tmp.find(sub), mod.length(), mod);
    return tmp;
}

int main(){
    string input = "Order $_";
    string order = "#1190921";

    cout << input << endl;

    string output = Replace(input, "$_", order);

    cout << output << endl;

    return EXIT_SUCCESS;
}
