

// part 1//
int main ()
{
const char CONST1 = 'i';
char chVar1;
chVar1 = '}';
char chVar2 = '2';
const char CONST2 = 0x7e;//f
char chVar3;
chVar3 = 0x4f;//h
char chVar4 = 0x19;//+




//part 2// 
    //Опису змінних типів int, float, unsigned short.
int nA;
float fltB;
unsigned short wC;

//Ініціювання змінних, що описанні в п.1 даного завдання

nA = -6306;
fltB = 5.1e-1;
wC = 126;

//Опису змінних типів double, int, char.

double dblD;
int nE;
char chF;

//Ініціювання змінних

//за допомогою неявного приведення типів

dblD = nA;
nE = fltB;
chF = wC;

//за допомогою явного приведення

dblD = (double)nA;
nE = (int)fltB;
chF = (char)wC;

//з обходом суворої типізації

double * pdblD;

void *pV;
pV = &nA;
pdblD = (double*)pV;
dblD = *pdblD;

int * pnE;
pV = &fltB;
pnE = (int*)pV;
nE = *pnE;

char * pchF;
pV = &wC;
pchF = (char*)pV;
chF = *pchF;

return 0;

}