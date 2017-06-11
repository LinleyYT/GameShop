#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

double Priceing(double sum);
static double RPG(double price, int choice);
static double FPS(double price, int choice);
static double Cars(double price, int choice);
static double Anime(double price, int choice);
static double Kids(double price, int choice);

int main()
{
    double finalPrice = 0;
    cout << "Nice to meet you. Please look around our shop. And take your time."<< endl;
    cout << "Here are genres and the exit(leading toward the final step of paying)." << endl;
    cout << "Enter the wanted number and then enter \n\n";
     //vlizane v function za ceni i genre
     finalPrice = Priceing(finalPrice);
    for(;;){
        cout << finalPrice<< "$";
    cout << "Do you want to continue shopping. Yes/No \n";
    string choise;
    cin >> choise;
    transform(choise.begin(), choise.end(), choise.begin(), ::toupper);
    if (choise == "NO")
        break;
    else if(choise == "YES")
        finalPrice = Priceing(finalPrice);
    }
    if(finalPrice >= 100){finalPrice*=0.85;}
    else if(finalPrice >= 75){finalPrice*=0.90;}
    else if(finalPrice >= 50){finalPrice*=0.95;}
    cout <<"Check Out: "<< round(finalPrice*100)/100 <<"$";
}
double Priceing(double sum){
    int a,gameChoice;
    cout << "Genres: 1)RPG 2)FPS 3)Cars 4)Anime 5)Kids 6)EXIT \n\n\n";
    cin >> a; /* pri izbirane na cifra se vliza v jelaniq metod. Ako ne vleze v nikoj ot ifovete
    to togava avtomatichno izvikva otnovo izvikva funkciqta "Priceing()"*/
        if(a == 1)
    	sum += RPG(sum,gameChoice);
    else if(a==2)
    	sum += FPS(sum,gameChoice);
    else if(a==3)
    	sum += Cars(sum,gameChoice);
    else if(a==4)
    	sum += Anime(sum,gameChoice);
    else if(a==5){
    	sum += Kids(sum,gameChoice);
        }
    else if(a==6){
    	return sum;
        }
        else{
    cout << "\nWrong Input! Plese enter your choice again!\n";
    return Priceing(sum);}
    return Priceing(sum);

}
static double RPG(double price, int choice) //shte obqsnqvam samo po tozi kod
{
    string decision;
    double priceOnGame = 0;
    cout << "RPG Games: 1)Black Desert 2)Borderlands 2 \nChose\n";
    cin >> choice;
    if(choice == 1){
            cout <<"Black Desert is a RPG which is somehow new. Price 9.99$. Whould you like to buy it Yes/No \n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=9.99;
            }
            else if(decision == "NO"){
                    cout<<"\nGo back to: 1)Genres or 2)PRG\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){price = RPG(price, choice);}}
            else{cout << "\nAre you kidding me. You've got two choices not million!!!\n";}
    }
    else if(choice == 2){
                        cout <<"Borderlands 2 is a RPG which is strange game. Price 19.99$. Whould you like to buy it Yes/No\n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=19.99;
            }
            else if(decision == "NO"){
                    cout << "Go back to: 1)Genres or 2)PRG";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){price = RPG(price, choice);}
            }
            else{cout << "Are you kidding me. You've got two choices not million!!!";}
    }
    return price += priceOnGame;
}
static double FPS(double price, int choice){
    string decision;
    double priceOnGame = 0;
    cout << "FPS Games: 1)CS:GO 2)Borderlands 2 \nChose\n";
    cin >> choice;
    if(choice == 1){
            cout <<"CS:GO is money bucket. Much suka blad. Price 12.99$. Whould you like to buy it Yes/No \n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=12.99;
            }
            else if(decision == "NO"){
                    cout<<"\nGo back to: 1)Genres or 2)FPS\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){FPS(price, choice);}}
            else{cout << "\nAre you kidding me. You've got two choices not million!!!\n";}
    }
    else if(choice == 2){
                        cout <<"Borderlands 2 is a RPG/FPS which is strange game. Price 19.99$. Whould you like to buy it Yes/No\n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=19.99;
            }
            else if(decision == "NO"){
                    cout << "\nGo back to: 1)Genres or 2)FPS\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){FPS(price, choice);}}
            else{cout << "Are you kidding me. You've got two choices not million!!!\n";}

    }
    return price += priceOnGame;
    }
static double Cars(double price, int choice){
    string decision;
    double priceOnGame = 0;
    cout << "Cars Games: 1)NeedForSpeed 2)Track Mania \nChose\n";
    cin >> choice;
    if(choice == 1){
            cout <<"Need for Speed you need to be the fastest to win. Price 34.99$. Whould you like to buy it Yes/No \n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=34.99;
            }
            else if(decision == "NO"){
                    cout<<"\nGo back to: 1)Genres or 2)Cars\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){Cars(price, choice);}}
            else{cout << "/nAre you kidding me. You've got two choices not million!!!\n";}
    }
    else if(choice == 2){
                        cout <<"Track Mania don't ever think that I don.t know you will like it. Price 5.99$. Whould you like to buy it Yes/No\n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=5.99;
            }
            else if(decision == "NO"){
                    cout << "\nGo back to: 1)Genres or 2)Cars\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){Cars(price, choice);}}
            else{cout << "Are you kidding me. You've got two choices not million!!!\n";}

    }
    return price += priceOnGame;
    }
static double Anime(double price, int choice){
    string decision;
    double priceOnGame = 0;
    cout << "Anime Games: 1)Akiba's Trip 2)Neko Para \nChose\n";
    cin >> choice;
    if(choice == 1){
            cout <<"Akiba's Trip... Just strip every evil being. Price 20.99$. Whould you like to buy it Yes/No \n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=20.99;
            }
            else if(decision == "NO"){
                    cout<<"\nGo back to: 1)Genres or 2)Anime\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){Anime(price, choice);}}
            else{cout << "/nAre you kidding me. You've got two choices not million!!!\n";}
    }
    else if(choice == 2){
                        cout <<"Neko Para is a strange game. Price 19.99$. Whould you like to buy it Yes/No\n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=19.99;
            }
            else if(decision == "NO"){
                    cout << "\nGo back to: 1)Genres or 2)Anime\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){Anime(price, choice);}}
            else{cout << "Are you kidding me. You've got two choices not million!!!\n";}

    }
    return price += priceOnGame;
    }
static double Kids(double price, int choice){
    string decision;
    double priceOnGame = 0;
    cout << "Kids Games: 1)Boku NO Pico 2)Neko Para 2 \nChose\n";
    cin >> choice;
    if(choice == 1){
            cout <<"Boku NO Pico... NO for never... ever even think about it. Price 20.99$. Whould you like to buy it Yes/No \n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=20.99;
            }
            else if(decision == "NO"){
                    cout<<"\nGo back to: 1)Genres or 2)Kids\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){Kids(price, choice);}}
            else{cout << "\nAre you kidding me. You've got two choices not million!!!\n";}
    }
    else if(choice == 2){
                        cout <<"Neko Para 2. Yas it's for kids :) Believe  me . Price 19.99$. Whould you like to buy it Yes/No\n";
           cin >> decision;
           transform(decision.begin(), decision.end(), decision.begin(), ::toupper);
            if(decision == "YES"){
                priceOnGame=19.99;
            }
            else if(decision == "NO"){
                    cout << "\nGo back to: 1)Genres or 2)Kids\n";
                cin >> choice;
            if(choice == 1){return price;}

            else if(choice == 2){Kids(price, choice);}}
            else{cout << "Are you kidding me. You've got two choices not million!!!\n";}

    }
    return price += priceOnGame;
    }

