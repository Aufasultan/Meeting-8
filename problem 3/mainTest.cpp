#include <iostream>
using namespace std;

struct student {
	long long nisn;
	string name;
	int value;
};

int main() {


	student students[7] = {{9950310962, "Ronaldo Valentino Uneputty", 80},
						{9952382180, "Ari Lutfianto", 65},
						{9960312699, "Handi Ramadhan", 90},
						{9963959682, "Rio Alfandra", 55},
						{9965653989, "Arief Budiman", 60},
						{9970272750, "Achmad Yaumil Fadjri R.", 60},
						{9970293945, "Alivia Rahma Pramesti", 70}};


	for(int i=0; i<7; i++)
	{
		if(students[i].value==60)
		{
			students[i].name = "Joko";
		}
	}

	student check[7] = {{9950310962, "Ronaldo Valentino Uneputty", 80},
						{9952382180, "Ari Lutfianto", 65},
						{9960312699, "Handi Ramadhan", 90},
						{9963959682, "Rio Alfandra", 55},
						{9965653989, "Joko", 60},
						{9970272750, "Joko", 60},
						{9970293945, "Alivia Rahma Pramesti", 70}};

    bool flag=0;
    for(int i=0; i<7; i++)
	{
		if(students[i].name!=check[i].name) flag=1;
	}

    if(flag) cout<<"UNSUCCESSFULL"<<endl;
	else cout<<"SUCCESSFULL"<<endl;
	
}