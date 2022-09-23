class Solution:
    
    def generate_num_list(self, num:int):
        temp = num
        multiplier = 0
        res_list = []
        while temp:
            a = temp%10
            b = (10**multiplier)*a
            if b:
                res_list.append(b)
            multiplier+=1
            temp = temp//10;
        return res_list[::-1]
    
    def intToRoman(self, num: int) -> str:
        map_nums = {
            1 : "I",
            2 : "II",
            3 : "III",
            4 : "IV",
            5 : "V",
            6 : "VI",
            7 : "VII",
            8 : "VIII",
            9 : "IX",
            10 : "X",
            20 : "XX",
            30 : "XXX",
            40 : "XL",
            50 : "L",
            60 : "LX",
            70 : "LXX",
            80 : "LXXX",
            90 : "XC",
            100 : "C",
            200 : "CC",
            300 : "CCC",
            400 : "CD",
            500 : "D",
            600 : "DC",
            700 : "DCC",
            800 : "DCCC",
            900 : "CM",
            1000 : "M",
            2000 : "MM",
            3000 : "MMM"
        }
        res = ""
        num_list = self.generate_num_list(num)
        for i in num_list:
            res+=map_nums[i]
        return res