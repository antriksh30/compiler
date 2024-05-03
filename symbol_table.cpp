#include <bits/stdc++.h> 
using namespace std; 
unordered_map<string, string> m; 
void display() 
{ 
 for (auto ite : m) 
 { 
     cout << ite.first << " is present at " << ite.second << endl; 
 } 
} 
int main() 
{ 
 int n; 
 do 
 { 
     printf("\nSYMBOL TABLE IMPLEMENTATION\n"); 
     printf("1. INSERT\n"); 
     printf("2. DISPLAY\n"); 
     printf("3. DELETE\n"); 
     printf("4. SEARCH\n"); 
     printf("5. MODIFY\n"); 
     printf("6. END\n"); 
     printf("Enter your option : "); 
     cin >> n; 
     switch (n) 
     { 
     case 1: 
     { 
         string x, y; 
         cout << "Enter the label and address: "; 
         cin >> x >> y; 
         if (m.find(x) != m.end()) 
         { 
             cout << "Label already present!" << endl; 
         } 
         else 
         { 
             m[x] = y; 
             cout << "Label added successfully!" << endl; 
         } 
         // display(); 
         break; 
     } 
     case 2: 
     { 
         display(); 
         break; 
     } 
     case 3: 
     { 
         string x; 
         cout << "Enter the label: "; 
         cin >> x; 
         if (m.find(x) == m.end()) 
         { 
             cout << "Label not present in symbol table!" << endl; 
         } 
         else 
         { 
             m.erase(x); 
             cout << "Label deleted successfully!" << endl; 
         } 
         // display(); 
         break; 
     } 
     case 4: 
     { 
         printf("Enter the label to be searched : "); 
         string x; 
         cin >> x; 
         if (m.find(x) != m.end()) 
         { 
             cout << "The label is already in the symbol Table at address: " << m[x] << endl; 
         } 
         else 
         { 
             cout << "The label is not found in the symbol table" << endl; 
         } 
         break; 
     } 
     case 5: 
     { 
         string x; 
         cout << "Enter the label: "; 
         cin >> x; 
         cout << "Enter the new address of the label: "; 
         string y; 
         cin >> y; 
         if (m.find(x) == m.end()) 
         { 
             cout << "Label not present" << endl; 
         } 
         else 
         { 
             m[x] = y; 
             cout << "Address updated successfully!" << endl; 
         } 
         // display(); 
         break; 
     } 
     default: 
     { 
         break; 
     } 
     } 
 
 } while (n < 6); 
 return 0; 
}