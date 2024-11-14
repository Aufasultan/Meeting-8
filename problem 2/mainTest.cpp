#include <iostream>
using namespace std;

struct student{
    long long nisn;
    string name;
    int value;
};

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    student students[7] = {{9950310962, "Ronaldo Valentino Uneputty", 80},
						{9952382180, "Ari Lutfianto", 65},
						{9960312699, "Handi Ramadhan", 90},
						{9963959682, "Rio Alfandra", 55},
						{9965653989, "Arief Budiman", 60},
						{9970272750, "Achmad Yaumil Fadjri R.", 60},
						{9970293945, "Alivia Rahma Pramesti", 70}
    };

    int l = 0;
    int r = 6;
    bool found = 0;
    int ans = 0;

    int pos=0;
	while(!found&&l<=r)
	{
		int mid=(l+r)/2;
		if(students[mid].nisn>9950310962)
		{
			r = mid-1;
		} else if(students[mid].nisn<9950310962)
		{
			l = mid+1;
		} else {
			found=1;
            pos=mid+1;
			ans = students[mid].value;
		}
	}

    int realPosition=1;
    int realValue=80;

    if(pos==realPosition&&ans==realValue) cout<<"SUCCESSFUL"<<endl;
    else cout<<"UNSUCCESSFUL"<<endl;
}