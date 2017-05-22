#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <iostream>

int main(){
    
    int chances, acertos, tam, i, r, g, final, esp, pontos;
    unsigned char p[50], s[50], t[2], dica[50];
    setbuf(stdin,NULL);
	system("color F0");   
    setlocale(LC_ALL, "Portuguese");
    puts("\t#######\t\t Jogo da Forca !!\t\t#######\n\n");
    puts("\t(¬.¬)\t   Bem-Vindo ao Jogo !!   (^o^)/\n\n");
    puts("\t\tInsira uma palavra:\n");
    printf("\t\t\t~>");
    scanf("%[^\n]s", p);
    setbuf(stdin,NULL);
    puts("\n\t\tInsira uma dica:\n");
    printf("\t\t\t~>");
    scanf("%[^\n]s", dica);
    setbuf(stdin,NULL);
    
    chances =10;
    acertos = 0;
    tam = 0;
    i = 0;
    r = 1;
    final = 0;
    esp = 0;
    pontos = 0;
    
    for(;r!=2;++i){
        if(p[i] == ' '){
            s[i] = ' ';
            tam++;
            esp++;
        }
        else if(p[i] != '\0'){
            tam++;
            s[i] = '_';
        }
        else{
            r++;
        }
    }

    system("cls");
    pontos = tam - esp;
    
    for(;final!=1;){
        g = tam;
        system("cls");
        printf("\t#######\t\t Jogo da Forca !!\t\t#######\n\n");
        switch (chances){
            case 1:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|/|%c\n", 92);
                printf("\t\t\t| |\n");
                printf("\t\t\t|/|%c\n", 92);
                printf("\t\t\t|| |\n\n\n");
                break;
            case 2:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|/|%c\n", 92);
                printf("\t\t\t| |\n");       
                printf("\t\t\t|/ %c\n", 92);
                printf("\t\t\t|| |\n\n\n");
                break;
            case 3:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|/|%c\n", 92);
                printf("\t\t\t| |\n");
                printf("\t\t\t|/ %c\n", 92);
                printf("\t\t\t|\n\n\n");
                break;
           case 4:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|/|%c\n", 92);
                printf("\t\t\t| |\n");               
                printf("\t\t\t|/\n");
                printf("\t\t\t|\n\n\n");
                break;
            case 5:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|/|%c\n", 92);
                printf("\t\t\t| |\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n\n\n");
                break;
           case 6:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|/|\n");
                printf("\t\t\t| |\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n\n\n");
                break;    
            case 7:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t| |\n");
                printf("\t\t\t| |\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n\n\n");
                break;
           case 8:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t| |\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n\n\n");
                break;            
            case 9:
                printf("\t\t\t____\n");
                printf("\t\t\t| O\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n\n\n");
                break;
           case 10:
                printf("\t\t\t____\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n");
                printf("\t\t\t|\n\n\n");
                break;    
        }

        printf("\t\t\tpalavra - > %s\n\n", s);
        printf("\t\tVoce acertou %d!\n\n\t\tA dica e %s\n\t\tvoce tem %d chances !\n\n\t\tInsira uma letra: ~> ", acertos, dica, chances);
        scanf("%s", &t);
        r = 1;
        

        for(i=0;r!=2;i++){            
            if (t[0] == p[i]){
                if(s[i] == t[0]){
                    chances--;
                    printf("\tvoce ja digitou essa letra ! \nErrou !\nVoce ainda tem %d chances !\n", chances);
                    r++;                  
                    }
                
                else{
                s[i] = t[0];
                for(i++;i<g;i++){
                    if(t[0] == p[i]){
                       s[i] = t[0];
                       acertos++;
                    }
                    
                }
                system("cls");
                acertos++;
                ++r;
                }
            }
        else if(i == tam){
                ++r;
                chances--;
                system("cls");                
                printf("\nErrou !\n");
            }
        }
        if(chances == 0){
            system("cls");
            printf("\t 	/(;-_-)   so chora fracasado 	(º-º)\n");
            printf("\t\tA palravra e %s\n", p);
            final = 1;
            system("pause");
        }
        if(acertos == pontos){
            printf("\t\t(~-.-)~ huau voce venceu !! <(-.-)>\n");
            printf("\t\t\t A palavra era: %s\n\n", s);
            final = 1;
            system("pause");
        }
    }
}
