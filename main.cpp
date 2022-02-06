float floatMod(float money, float mod) {
    float remainder = money;

    if (mod < 0)
        mod *= -1;

    while (remainder >= mod)
        remainder -= mod;

    return remainder;
}

void cashBreakdown(float money) {
    if (floatMod(money, 1) == 0) {
        std::cout << money << " = " << money << " dollars" << std::endl;
        return;
    }
    else {
        int dollars, quarters, dimes, nickels, pennies;
        float remainder;

        dollars = money - floatMod(money, 1);
        remainder = money - dollars;
        remainder = round(remainder * 100) / 100;
        std::cout << dollars << " dollar(s), ";

        quarters = (remainder - floatMod(remainder, .25)) / .25;
        remainder -= quarters * .25;
        remainder = round(remainder * 100) / 100;
        std::cout << quarters << " quarter(s), ";

        dimes = (remainder - floatMod(remainder, .1)) / .1;
        remainder -= dimes * .1;
        remainder = round(remainder * 100) / 100;
        std::cout << dimes << " dime(s), ";

        nickels = (remainder - floatMod(remainder, .05)) / .05;
        remainder -= nickels * .05;
        remainder = round(remainder * 100) / 100;
        std::cout << nickels << " nickel(s), ";

        pennies = (remainder - floatMod(remainder, .01)) / .01;
        remainder -= pennies * .01;
        remainder = round(remainder * 100) / 100;
        std::cout << pennies << " penny(-ies).";
    }

    return;
}

int main() {
        float money;
        money = round(money * 100) / 100;

        std::cout << "Amount: ";
        std::cin >> money;
        std::cin.sync();
        std::cout << std::endl;

        cashBreakdown(money
        
        return 0;
}
