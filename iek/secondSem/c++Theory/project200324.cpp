#ifdef __unix__
    #define LEITOURGIKO 1
#elif defined (WIN32) || (_WIN32)
    #define LEITOURGIKO 2
#endif

#include <iostream>

using namespace std;

void svise_othoni();
void theseOnoma(string buffer_onoma);
void theseOnoma();
string pareOnoma();

int fibonacci(int n);
void roi();

string onoma;


int main()
{
    svise_othoni();
    theseOnoma("Tzantzalis");
    theseOnoma("Mpampouras");

    cout<<pareOnoma();
    ///cout<<fibonacci(1);
    return 0;
}

void theseOnoma(string buffer_onoma)
{
        onoma = buffer_onoma;
}

string pareOnoma()
{
    return onoma;
}

int fibonacci(int n)
{
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

void theseOnoma()
{
        cout<<"Dwse onoma :"<<"\n";
        cin>>onoma;
}

void roi()
{
    if(LEITOURGIKO == 1)
    {
        cin.ignore(1,' ');
    }
    else if(LEITOURGIKO == 2)
    {
        cin.ignore(0);
    }
}


void svise_othoni()
{
    if (LEITOURGIKO == 1)
    {
        system("clear");
    }
    else if(LEITOURGIKO == 2)
    {
        system("cls");
    }

}
