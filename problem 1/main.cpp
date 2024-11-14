#include <iostream>
using namespace std;

struct student {
   long long nisn;
   string name;
   int value;
};

int main() {
   student students[7] = {
      {9960312699, "Handi Ramadhan", 90},
      {9963959682, "Rio Alfandra", 55},
      {9950310962, "Ronaldo Valentino Uneputty", 80},
      {9970272750, "Achmad Yaumil Fadjri R.", 60},
      {9970293945, "Alivia Rahma Pramesti", 70},
      {9952382180, "Ari Lutfianto", 65},
      {9965653989, "Arief Budiman", 60}
   };

int studentsSize = sizeof(students)/sizeof(students[0]);
for (int i = 1; i < studentsSize; i++) {
 
   int j=i-1;
   long long temp = students[i].nisn;
   string temp2 = students[i].name;
   int temp3 = students[i].value;
  
   while (students[j].nisn<temp&&j>=0){
      students[j+1].nisn = students[j].nisn;
      students[j+1].name = students[j].name;
      students[j+1].value = students[j].value;
      j--;
   }

   students[j+1].nisn = temp;
   students[j+1].name = temp2;
   students[j+1].value = temp3;
}

cout<<"NISN Insertion Sort"<<endl;
for (int i = 0; i < studentsSize; i++){
   cout<<students[i].nisn<<" "<<students[i].name<<" "<<students[i].value<<endl; 
}
cout<<endl;

for (int i = 0; i < studentsSize; i++){
   long long min = students[i].nisn;
   string min2 = students[i].name;
   int min3 = students[i].value;
   int indMin = i;

   for(int j = i + 1; j < studentsSize; j++){
      
      if(students[j].nisn < min){
         min = students[j].nisn;
         min2 = students[j].name;
         min3 = students[j].value;
         indMin = j;
      }
   }

   long long tmp = students[i].nisn;
   string tmp2 = students[i].name;
   int tmp3 = students[i].value;
   students[i].nisn = min;
   students[i].name = min2;
   students[i].value = min3;

   students[indMin].nisn = tmp;
   students[indMin].name = tmp2;
   students[indMin].value = tmp3;
}
cout<<"NISN Selection Sort"<<endl;
for (int i = 0; i < studentsSize; i++){
   cout<<students[i].nisn<<" "<<students[i].name<<" "<<students[i].value<<endl; 
}
cout<<endl;

for (int i = 0; i < studentsSize - 1; i++){
   
   for (int j = 0; j > studentsSize - 1; j++ ){

      if (students[j].nisn<students[j+1].nisn ){
         long long temp = students[i].nisn;
         string temp2 = students[i].name;
         int temp3 = students[i].value;

         students[j].nisn = students[j+1].nisn;
         students[j].name = students[j+1].name;
         students[j].value = students[j+1].value;
         students[j+1].nisn = temp;
         students[j+1].name = temp2;
         students[j+1].value = temp3;  
      }
   }
}
cout<<"NISN Bubble Sort"<<endl;
for (int i = 0; i < studentsSize; i++){
   cout<<students[i].nisn<<" "<<students[i].name<<" "<<students[i].value<<endl;
}
cout<<endl;
cout<<endl;

//Value Sorting
for (int i = 1; i < studentsSize; i++){
   
   int j = i-1;
   long long temp = students[i].nisn;
   string temp2 = students[i].name;
   int temp3 = students[i].value;

   while(students[j].value < temp3&&j>=0){
      
      students[j+1].nisn = students[j].nisn;
      students[j+1].name = students[j].name;
      students[j+1].value = students[j].value;
      j--;
   }    
   students[j+1].nisn = temp;
   students[j+1].name = temp2;
   students[j+1].value = temp3;
}

cout<<"Value Insertion Sort"<<endl;
for (int i = 0; i < studentsSize; i++){
   cout<<students[i].nisn<<" "<<students[i].name<<" "<<students[i].value<<endl;
}
cout<<endl;

for (int i = 0; i < studentsSize; i++){
   
   long long min = students[i].nisn;
   string min2 = students[i].name;
   int min3 = students[i].value;
   int indMin = i;

   for (int j = i + 1; j < studentsSize; j++){
      
      if (students[j].value < min){
         min = students[j].nisn;
         min2 = students[j].name;
         min3 = students[j].value;
         indMin = j;
      }
   }

   long long tmp = students[i].nisn;
   string tmp2 = students[i].name;
   int tmp3 = students[i].value;
   students[i].nisn = min;
   students[i].name = min2;
   students[i].value = min3;

   students[indMin].nisn = tmp;
   students[indMin].name = tmp2;
   students[indMin].value = tmp3;
   }
   cout<<"Value Selection Sort"<<endl;
   for (int i = 0; i < studentsSize; i++){
   cout<<students[i].nisn<<" "<<students[i].name<<" "<<students[i].value<<endl;
   }
   cout<<endl;
   
   for (int i = 0; i < studentsSize - 1; i++){
   
      for (int j = 0; j > studentsSize - 1; j++ ){
            
         if(students[j].value < students[j+1].value){

            long long temp = students[i].nisn;
            string temp2 = students[i].name;
            int temp3 = students[i].value;
            
            students[j].nisn = students[j+1].nisn;
            students[j].name = students[j+1].name;
            students[j].value = students[j+1].value;

            students[j+1].nisn = temp;
            students[j+1].name = temp2;
            students[j+1].value = temp3;
         }
      }
   }      
   cout<<"Value Bubble Sort"<<endl;
   for (int i = 0; i < studentsSize; i++){
      cout<<students[i].nisn<<" "<<students[i].name<<" "<<students[i].value<<endl;
   }
   return 0;
}

