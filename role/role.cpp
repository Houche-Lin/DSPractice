# include<iostream>

using namespace std;

struct Role {
	char *name;
	int hp;
	int level;
	int ap;
	int dp;
	int sp;	
};
void dump_role(Role& role){
	cout<<"名子:"<<role.name<<endl; 
	cout<<"等級:"<<role.level<<endl;
	cout<<"血量:"<<role.hp<<endl;
	cout<<"攻擊力:"<<role.ap<<endl;
	cout<<"防禦力:"<<role.dp<<endl;
	cout<<"魔力:"<<role.sp<<endl;
};
void text_role(){
	char name[]=" 勇者 ";
	struct Role role;
	role.name = name;
	role.level=100;
	role.hp=878;
	role.dp=66;
	role.ap=999;
	role.sp=150;
	dump_role(role);
}
int main()
{	
	text_role();
	return 0;
} 
