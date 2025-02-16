#include<stdio.h>
#include<stdlib.h>
struct Address{
    char city[20];
    char road[50];
    char hname[30];
    int zip;
};
struct appe{
    int weight;
    int height;
};
struct Customer{
    char name[50];
    struct Address addr;
    int age;
    struct appe ap;
    
};
void spaces(int count){
    for(int i=0; i < count; ++i){
        printf(" ");
    }
    
}


void menu(){
    
    
    
    
    
}


void regi(){
    struct Customer newc;
    printf("Name : ");
    scanf("%s",newc.name);
    printf("Age : ");
    scanf("%d",&newc.age);
    printf("city : ");
    scanf("%s",newc.addr.city);
    printf("Road : ");
    scanf("%s",newc.addr.road);
    printf("House name : ");
    scanf("%s",newc.addr.hname);
    printf("Zipcode : ");
    scanf("%d",newc.addr.zip);
    printf("Height(m) : ");
    scanf("%d",newc.ap.height);
    printf("Weight(kg) : ");
    scanf("%d",newc.ap.weight);
    
    printf("Registration successful!\n");
    float bmi = newc.ap.weight/((newc.ap.height)^2);
    printf("Your bmi is %.3lf",bmi);
    if(bmi <= 18.4){
        printf("Underweight.\n");
    }else if(bmi <=24.9){
        printf("Normal.\n");
    }
    else if(bmi <=39.9){
        printf("Overweight.\n");
    }
    else {
        printf("Obese.\n");
    }
    
}
 


void registered(){
    int reg;
    char name[50];
    
    printf("Are you already registered? ");
    scanf("%d",&reg);
    
    if(reg == 1){
        printf("Enter your Name : ");
        scanf("%s",name);
        
        FILE *file = fopen("gym.txt","r+");
        if(file == NULL){
            printf("Error!\n");
        }
        while (fscanf(file, "%s ", name) != EOF) {
        printf("Welcome %s", name);
        }

        fclose(file);
        
        menu();
        
    }
    else if(reg == 0){
        regi();
    }
    else{
        printf("Invaild Number!");
    }
}


int main(){
    spaces(30);
    printf("Weelcome to FitGym\n");
    
    registered();
    
    
    
    return 0;
}
