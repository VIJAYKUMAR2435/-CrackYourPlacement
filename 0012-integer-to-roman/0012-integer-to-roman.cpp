class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hund[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thsds[]={"","M","MM","MMM"};
        return thsds[num/1000]+hund[(num%1000)/100]+tens[(num%100)/10]+ones[(num%10)/1];


    }
};