#include <stdio.h>

// Function to convert length units
void convertLength(double value, char unit) {
    double mm, cm, m, km, in, ft, yd, mi;

//case 1=m; 2=mm; 3=cm; 4=km; 5=in; 6=ft; 7=yd; 8=mi
    switch (unit) {
        case '1':
            mm = value;
            cm = value / 10;
            m = value / 1000;
            km = value / 1000000;
            in = value * 0.03937;
            ft = value * 0.003281;
            yd = value * 0.001094;
            mi = value / 1609344;
            break;
        case '2':
            mm = value * 10;
            cm = value;
            m = value / 100;
            km = value / 100000;
            in = value * 0.3937;
            ft = value * 0.03281;
            yd = value * 0.01094;
            mi = value / 160934;
            break;
        case '3':
            mm = value * 1000;
            cm = value * 100;
            m = value;
            km = value / 1000;
            in = value * 39.37;
            ft = value * 3.281;
            yd = value * 1.094;
            mi = value / 1609;
            break;
        case '4':
            mm = value * 1000000;
            cm = value * 100000;
            m = value * 1000;
            km = value;
            in = value * 39370.1;
            ft = value * 3280.84;
            yd = value * 1093.61;
            mi = value / 1.609;
            break;
        case '5':
            mm = value * 25.4;
            cm = value * 2.54;
            m = value * 0.0254;
            km = value * 0.0000254;
            in = value;
            ft = value * 0.08333;
            yd = value * 0.02778;
            mi = value / 63360;
            break;
        case '6':
            mm = value * 304.8;
            cm = value * 30.48;
            m = value * 0.3048;
            km = value * 0.0003048;
            in = value * 12;
            ft = value;
            yd = value * 0.3333;
            mi = value / 5280;
            break;
        case '7':
            mm = value * 914.4;
            cm = value * 91.44;
            m = value * 0.9144;
            km = value * 0.0009144;
            in = value * 36;
            ft = value * 3;
            yd = value;
            mi = value / 1760;
            break;
        case '8':
            mm = value * 1609344;
            cm = value * 160934;
            m = value * 1609.34;
            km = value * 1.60934;
            in = value * 63360;
            ft = value * 5280;
            yd = value * 1760;
            mi = value;
            break;
        default:
            printf("Invalid unit for length conversion!\n");
            return;
    }

    printf("\nLength Conversion:\n");
    printf("%.4g mm\n", mm);
    printf("%.4g cm\n", cm);
    printf("%.4g m\n", m);
    printf("%.4g km\n", km);
    printf("%.4g in\n", in);
    printf("%.4g ft\n", ft);
    printf("%.4g yd\n", yd);
    printf("%.4g mi\n", mi);
}

// Function to convert mass units
void convertMass(double value, char unit) {
    double mg, g, kg, oz, lb, ton;

//case 1=mg; 2=g; 3=kg; 4=oz; 5=lb; 6=t
    switch (unit) {
        case '1':
            mg = value;
            g = value * 0.001;
            kg = value * 0.000001;
            oz = value * 0.000035274;
            lb = value * 0.0000022046;
            ton = value * 0.000000001;
            break;
        case '2':
            mg = value * 1000;
            g = value;
            kg = value * 0.001;
            oz = value * 0.035274;
            lb = value * 0.00220462;
            ton = value * 0.0000011023;
            break;
        case '3':
            mg = value * 1000000;
            g = value * 1000;
            kg = value;
            oz = value * 35.274;
            lb = value * 2.20462;
            ton = value * 0.00110231;
            break;
        case '4':
            mg = value * 28349.5;
            g = value * 28.3495;
            kg = value * 0.0283495;
            oz = value;
            lb = value * 0.0625;
            ton = value * 0.00003125;
            break;
        case '5':
            mg = value * 453592;
            g = value * 453.592;
            kg = value * 0.453592;
            oz = value * 16;
            lb = value;
            ton = value * 0.0005;
            break;
        case '6':
            mg = value * 907184740;
            g = value * 907184;
            kg = value * 907.185;
            oz = value * 32000;
            lb = value * 2000;
            ton = value;
            break;
        default:
            printf("Invalid unit for mass conversion!\n");
            return;
    }

    printf("\nMass Conversion:\n");
    printf("%.4g mg\n", mg);
    printf("%.4g g\n", g);
    printf("%.4g kg\n", kg);
    printf("%.4g oz\n", oz);
    printf("%.4g pound\n", lb);
    printf("%.4g ton\n", ton);
}

// Function to convert temperature units
void convertTemperature(double value, char unit) {
    double celsius, fahrenheit;

    switch (unit) {
        case '1':
            celsius = value;
            fahrenheit = (value * 9 / 5) + 32;
            break;
        case '2':
            celsius = (value - 32) * 5 / 9;
            fahrenheit = value;
            break;
        default:
            printf("Invalid unit for temperature conversion!\n");
            return;
    }

    printf("Temperature Conversion:\n");
    printf("%.4g C\n", celsius);
    printf("%.4g F\n", fahrenheit);
}

// Function to convert volume units
void convertVolume(double value, char unit) {
    double ml, liter, fl_oz, cup, pt, qt, gal;

//case 1=mL; 2=L; 3=floz; 4=c; 5=pt; 6=qt; 7=gal
    switch (unit) {
        case '1':
            ml = value;
            liter = value * 0.001;
            fl_oz = value * 0.033814;
            cup = value * 0.00416667;
            pt = value * 0.00211338;
            qt = value * 0.00105669;
            gal = value * 0.000264172;
            break;
        case '2':
            ml = value * 1000;
            liter = value;
            fl_oz = value * 33.814;
            cup = value * 4.16667;
            pt = value * 2.11338;
            qt = value * 1.05669;
            gal = value * 0.264172;
            break;
        case '3':
            ml = value * 29.5735;
            liter = value * 0.0295735;
            fl_oz = value;
            cup = value * 0.123223;
            pt = value * 0.0625;
            qt = value * 0.03125;
            gal = value * 0.0078125;
            break;
        case '4':
            ml = value * 240;
            liter = value * 0.24;
            fl_oz = value * 8.11537;
            cup = value;
            pt = value * 0.50721;
            qt = value * 0.253605;
            gal = value * 0.0634013;
            break;
        case '5':
            ml = value * 473.176;
            liter = value * 0.473176;
            fl_oz = value * 16;
            cup = value * 1.97157;
            pt = value;
            qt = value * 0.5;
            gal = value * 0.125;
            break;
        case '6':
            ml = value * 946.353;
            liter = value * 0.946353;
            fl_oz = value * 32;
            cup = value * 3.94314;
            pt = value * 1.89271;
            qt = value;
            gal = value * 0.25;
            break;
        case '7':
            ml = value * 3785.41;
            liter = value * 3.78541;
            fl_oz = value * 128;
            cup = value * 15.7725;
            pt = value * 7.56588;
            qt = value * 3.78541;
            gal = value;
            break;
        default:
            printf("Invalid unit for volume conversion!\n");
            return;
    }

    printf("\nVolume Conversion:\n");
    printf("%.4g mL\n", ml);
    printf("%.4g L\n", liter);
    printf("%.4g fl.oz\n", fl_oz);
    printf("%.4g cup\n", cup);
    printf("%.4g pt\n", pt);
    printf("%.4g qt\n", qt);
    printf("%.4g gal\n", gal);
}

int main() {
    int conversionType;
    char unitType;
    double value;

    printf("Welcome to the Unit Converter!\n");
    printf("Which type of conversion would you like to perform?\n");
    printf("1. Length\n");
    printf("2. Mass\n");
    printf("3. Temperature\n");
    printf("4. Volume\n");
    printf("Enter your choice (1-4): ");
    scanf(" %d", &conversionType);

    switch (conversionType) {
        case 1:
            printf("\nLength Units:\n");
            printf("1. mm\n");
            printf("2. cm\n");
            printf("3. m\n");
            printf("4. km\n");
            printf("5. in\n");
            printf("6. ft\n");
            printf("7. yd\n");
            printf("8. mi\n");
            printf("Enter the unit to convert from (1-8): ");
            scanf(" %c", &unitType);
            printf("\nEnter the value to convert: ");
            scanf("%lf", &value);
            convertLength(value, unitType);
            break;
        case 2:
            printf("\nMass Units:\n");
            printf("1. mg\n");
            printf("2. g\n");
            printf("3. kg\n");
            printf("4. oz\n");
            printf("5. lb\n");
            printf("6. ton\n");
            printf("\nEnter the unit to convert from (1-6): ");
            scanf(" %c", &unitType);
            printf("\nEnter the value to convert: ");
            scanf("%lf", &value);
            convertMass(value, unitType);
            break;
        case 3:
            printf("\nTemperature Units:\n");
            printf("1. Celsius\n");
            printf("2. Fahrenheit\n");
            printf("\nEnter the unit to convert from (1-2): ");
            scanf(" %c", &unitType);
            printf("\nEnter the value to convert: ");
            scanf("%lf", &value);
            convertTemperature(value, unitType);
            break;
        case 4:
            printf("\nVolume Units:\n");
            printf("1. ml\n");
            printf("2. liter\n");
            printf("3. fluid ounce\n");
            printf("4. cup\n");
            printf("5. pint\n");
            printf("6. quart\n");
            printf("7. gallon\n");
            printf("\nEnter the unit to convert from (1-7): ");
            scanf(" %c", &unitType);
            printf("\nEnter the value to convert: ");
            scanf("%lf", &value);
            convertVolume(value, unitType);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
