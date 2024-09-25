/**
 * Done by:
 * Student Name: Ñâÿñòèí Â³êòîğ³ÿ
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        int a = 7.4;
        int b = 19.7;
        int c = 60;
        int d = 60;

        // <ÓËÎ1> (<ÓËÎ2> (A<ÎÂ1>B) <ÁËÎ> (<ÓËÎ3> (C<ÎÂ2>D)))
        //  empty (  !    (a < b)    &&   (   !   (c == d)))
        bool res = (!(a < b) && (!(c == d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int e = 17;
        int f = 17;
        int j = 8.3;
        int h = 54.6;

        // <ÓËÎ1> (<ÓËÎ2> (A<ÎÂ1>B) <ÁËÎ> (<ÓËÎ3> (C<ÎÂ2>D)))
        //  empty (  !    (a < b)    &&   (   !   (c == d)))
        bool res = (!(e < f) && (!(j == h)));
        cout << "res: " << boolalpha << res << endl;

        {
            // ÷àñòèíà 2//
                   // ((A <ÁÎ1> <ÓÎ> B) <ÀÎ1> <ÑÎ> C) <ÎÂ>( D <ÀÎ2>( E <ÁÎ2> <ÁàçÎ> F)) //

            int i = 154;
            int g = 37;
            int k = 20;
            int l = 11;
            int m = 7;
            const char n = 'int';


            bool res = ((i |+ g) / k) <= (l - (m << sizeof(n)));
            cout << "res: " << boolalpha << res << endl;
            
            return 0;
        }
                   
    }
}
