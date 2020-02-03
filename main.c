#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void createaccount(int id,char accountsnumber[20][10],char passwords[20][10],int balances[20]){
	printf("Enter your account number\n");
	scanf("%s",accountsnumber[id]);
	printf("Enter your password\n");
	scanf("%s",passwords[id]);
	printf("your account created!\n");
	printf("your account id is : %s \n and your password is :%s\n",accountsnumber[id],passwords[id]);
	balances[id]=0;
	return;
}

void transfermoney(int id,char accountsnumber[20][10],char passwords[20][10],int balances[20]){
	int flag=0,flag2=0,flag3=0,flag4=0;
	int i,j;
	char accid[10];
	char desaccid[10];
	char password[10];
	int amount=0;
	while(flag==0){
		printf("Enter your account number:\n");
		scanf("%s",accid);
		for(i=0;i<id;i++){
			if(strcmp(accid,accountsnumber[i])==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("there is not such a account!\n");
		}
	}
	while(flag2==0){
		printf("Enter your password:\n");
		scanf("%s",password);
		if(strcmp(password,passwords[i])==0){
			flag2=1;
		}
		if(flag2==1){
			break;
		}
		printf("wrong pasword!\n");
	}
	while(flag3==0){
		printf("Enter your destination account number:\n");
		scanf("%s",desaccid);
		for(j=0;j<id;j++){
			if(strcmp(desaccid,accountsnumber[j])==0){
				flag3=1;
				break;
			}
		}
		if(flag3==0){
			printf("there is not such a account!\n");
		}
	}
	while(flag4==0){
		printf("Enter the amount u want to transfer:\n");
		scanf("%d",&amount);
		if(amount>balances[i]){
			printf("not enough money!\n");
		}
		else{
			flag4=1;
		}
	}
	balances[i]-=amount;
	balances[j]+=amount;
	printf("Done!\n");
	return;
}
void getmoney(int id,char accountsnumber[20][10],char passwords[20][10],int balances[20]){
	int flag=0,flag2=0,flag3=0;
	int i;
	char accid[10];
	char password[10];
	int amount=0;
	while(flag==0){
		printf("Enter your account number:\n");
		scanf("%s",accid);
		for(i=0;i<id;i++){
			if(strcmp(accid,accountsnumber[i])==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("there is not such a account!\n");
		}
	}
	while(flag2==0){
		printf("Enter your password:\n");
		scanf("%s",password);
		if(strcmp(password,passwords[i])==0){
			flag2=1;
		}
		if(flag2==1){
			break;
		}
		printf("Wrong password!\n");
	}
	while(flag3==0){
		printf("Enter the amount:\n");
		scanf("%d",&amount);
		if(amount>balances[i]){
			printf("not enough money!!\n");
		}
		else{
			flag3
			=1;
		}
	}
	balances[i]-=amount;
	printf("Done!\n");
	return;
}

void changepassword(int id,char accountsnumber[20][10],char passwords[20][10],int balances[20]){
	int flag=0,flag2=0;
	int i;
	char accid[10];
	char password[10];
	int amount=0;
	while(flag==0){
		printf("Enter your account number:\n");
		scanf("%s",accid);
		for(i=0;i<id;i++){
			if(strcmp(accid,accountsnumber[i])==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("there is not such a account!\n");
		}
	}
	while(flag2==0){
		printf("Enter your password:\n");
		scanf("%s",password);
		if(strcmp(password,passwords[i])==0){
			flag2=1;
		}
		if(flag2==1){
			break;
		}
		printf("wrong password!\n");
	}
	printf("Enter new password:\n");
	scanf("%s",password);
	strcpy(passwords[i],password);
	printf("Done!\n");
}

void balancecheck(int id,char accountsnumber[20][10],char passwords[20][10],int balances[20]){
	int flag=0,flag2=0;
	int i;
	char accid[10];
	char password[10];
	int amount=0;
	while(flag==0){
		printf("Enter your account number:\n");
		scanf("%s",accid);
		for(i=0;i<id;i++){
			if(strcmp(accid,accountsnumber[i])==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("there is not such a account!\n");
		}
	}
	while(flag2==0){
		printf("Enter your password:\n");
		scanf("%s",password);
		if(strcmp(password,passwords[i])==0){
			flag2=1;
		}
		if(flag2==1){
			break;
		}
		printf("wrong password!\n");
	}
	printf("your balance is : %d\n",balances[i]);
}

void addbalance(int id,char accountsnumber[20][10],char passwords[20][10],int balances[20]){
	int flag=0,flag2=0;
	int i;
	char accid[10];
	char password[10];
	int amount=0;
	while(flag==0){
		printf("Enter your account number:\n");
		scanf("%s",accid);
		for(i=0;i<id;i++){
			if(strcmp(accid,accountsnumber[i])==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("there is not such a account!\n");
		}
	}
	while(flag2==0){
		printf("Enter your password:\n");
		scanf("%s",password);
		if(strcmp(password,passwords[i])==0){
			flag2=1;
		}
		if(flag2==1){
			break;
		}
		printf("wrong password!\n");
	}
	
	printf("Enter the amount:\n");
	scanf("%d",&amount);
	balances[i]+=amount;
	printf("Done!\n");
	return;
}


void showmenu(){
	printf("1) Create Account\n");
	printf("2) Transfer \n");
	printf("3) Getmoney\n");
	printf("4) Change Password\n");
	printf("5) Balance\n");
	printf("6) Addbalance\n");
	printf("7) Exit\n");
}


int main(int argc, char *argv[]) {
	printf("Hi\n");
	printf("Choose one of the options below to continue!\n");
	int answer;
	int exitflag=0;
	char accountsnumber[20][10];
	char passwords[20][10];
	int balances[20];
	int id=0;
	while(1){
		showmenu();
		scanf("%d",&answer);
		switch(answer){
			
			case 1:
				createaccount(id,accountsnumber,passwords,balances);
				id++;
				break;
			case 2:
				transfermoney(id,accountsnumber,passwords,balances);break;
			case 3:
				getmoney(id,accountsnumber,passwords,balances);break;
			case 4:
				changepassword(id,accountsnumber,passwords,balances);break;
			case 5:
				balancecheck(id,accountsnumber,passwords,balances);break;
			case 6:
				addbalance(id,accountsnumber,passwords,balances);break;
			case 7:
				exitflag=1;break;
			
			default:
				printf("Wrong number! try again\n");break;
		}
		if(exitflag==1){
			break;
		}
	}
	return 0;
}
