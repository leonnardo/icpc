#include <cstdio>

int main(int argc, char const *argv[])
{
    int a, b, count, carry;
    scanf("%d %d", &a, &b);
    while (a != 0 || b != 0) {
        count = 0;
        if (b > a) {
            carry = a;
            a = b;
            a = carry;

        }
        carry = 0;
        while (b != 0) {
            if (a%10 + b%10 + carry > 9) {
                carry = 1;
                count++;
            }
            if (carry && a%10 + b%10 + carry <= 9)
                carry = 0;

            a /= 10;
            b /= 10;
        }
        if (carry) {
            while (a != 0 && carry) {
                if (a%10 + carry > 9) {
                    count++;
                    a /= 10;
                }
                else
                    carry = 0;
            }
        }

        if (count == 0)
            printf("No carry operation.\n");
        else if (count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
        scanf("%d %d", &a, &b);
    }
    return 0;
}