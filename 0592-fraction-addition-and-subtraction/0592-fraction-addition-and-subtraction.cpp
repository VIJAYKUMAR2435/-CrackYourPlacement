class Solution {
public:
    string fractionAddition(string expression) {
          long long result_numerator = 0, result_denominator = 1; // initialize the result as 0/1
        int index = 0;
        int sign = 1;
        
        while (index < expression.length()) {

            // handle the sign of the numerator
            if (expression[index] == '+') {
                sign = 1;
                index++;
            }
            if (expression[index] == '-') {
                sign = -1;
                index++;
            }

            long long numerator = 0, denominator = 0;

            // iterate through numerator
            while (index < expression.length() && isdigit(expression[index])) {
                numerator = numerator * 10 + (expression[index] - '0');
                index++;
            }
            numerator *= sign;

            index++; // skip '/'

            // iterate through denominator
            while (index < expression.length() && isdigit(expression[index])) {
                denominator = denominator * 10 + (expression[index] - '0');
                index++;
            }

            // update the result using the newly calculated fraction
            result_numerator = result_numerator * denominator + numerator * result_denominator;
            result_denominator *= denominator;

            // make irreducible after each operation
            int greatestCommonDivisor = gcd(abs(result_numerator), result_denominator);
            result_numerator /= greatestCommonDivisor;
            result_denominator /= greatestCommonDivisor;
        }

        return to_string(result_numerator) + "/" + to_string(result_denominator);
    }
};