#include<iostream>
using namespace std;
int countRec(int choc, int wrap)
{
    if(choc<wrap)
        return 0;
    int newchoc = choc/wrap;
    return newchoc+countRec(newchoc+choc%wrap,wrap);
} 
int countMax(int money, int price, int wrapper)
{
    int choco = money/price;
    return choco + countRec(choco,wrapper);
}
int main()
{
    int money = 15;
    int price = 1;
    int wrapper = 3;
    cout<<countMax(money,price,wrapper);
    return 0;
}