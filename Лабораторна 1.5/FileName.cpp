/**
 * Done by:
 * Student Name: ������� ³�����
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

        // <���1> (<���2> (A<��1>B) <���> (<���3> (C<��2>D)))
        //  empty (  !    (a < b)    &&   (   !   (c == d)))
        bool res = (!(a < b) && (!(c == d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int e = 17;
        int f = 17;
        int j = 8.3;
        int h = 54.6;

        // <���1> (<���2> (A<��1>B) <���> (<���3> (C<��2>D)))
        //  empty (  !    (a < b)    &&   (   !   (c == d)))
        bool res = (!(e < f) && (!(j == h)));
        cout << "res: " << boolalpha << res << endl;

        {
            // ������� 2//
                   // ((A <��1> <��> B) <��1> <��> C) <��>( D <��2>( E <��2> <����> F)) //

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
