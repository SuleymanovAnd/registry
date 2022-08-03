#include <iostream>
#include <map>

int main() {
    std::map <std::string,std::string> registry;
    std::map<std::string,std::string> :: iterator it;
    int n = 0;
    while (registry.size () < 10) {
        std::cout << "<-";
        std::string temp;
        std::cin >> temp;

        if (temp == "Next" ) {
            if(n == 0){
               std::cout << "no visitors!\n";
            }else {
            std::cout << it  -> first << std::endl;
           if(it!=registry.end()) {registry.erase(it);it = registry.begin();n--;}
            }
        } else {
            registry.insert(std::make_pair(temp,temp));
            it = registry.begin () ;
           n++;
        }
    }
}
