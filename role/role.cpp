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
	cout<<"�W�l:"<<role.name<<endl; 
	cout<<"����:"<<role.level<<endl;
	cout<<"��q:"<<role.hp<<endl;
	cout<<"�����O:"<<role.ap<<endl;
	cout<<"���m�O:"<<role.dp<<endl;
	cout<<"�]�O:"<<role.sp<<endl;
};
void text_role(){
	char name[]=" �i�� ";
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
