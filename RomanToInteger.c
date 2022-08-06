int romanToInt(char * s){
    int sum = 0;
    int next_to_add = 0;
    while (1)
    {
        int i = 0;
        char current = *(s + i);
        switch (current)
        {   
            case '\0':
            {
                sum += next_to_add;
                return sum;
            }
            case 'I':
            {
                sum += next_to_add;
                next_to_add = 1;
            }
            case 'V':
            {
                if(next_to_add == 1)
                {
                    sum += 4;
                    next_to_add = 0;
                }
                else
                {
                    sum += next_to_add;
                    next_to_add = 5;
                }
            }
            case 'X':
            {
                if(next_to_add == 1)
                {
                    sum += 9;
                    next_to_add = 0;
                }
                else
                {   
                    sum += next_to_add;
                    next_to_add = 10;
                }
            }
            case 'L':
            {
                if(next_to_add == 10)
                {
                    sum += 40;
                    next_to_add = 0;
                }
                else
                {
                    sum += next_to_add;
                    next_to_add = 50;
                }
            }
            case 'C':
            {
                if(next_to_add == 10)
                {
                    sum += 90;
                    next_to_add = 0;
                }
                else
                {   
                    sum += next_to_add;
                    next_to_add = 100;
                }
            }
            case 'D':
            {
                if(next_to_add == 100)
                {
                    sum += 400;
                    next_to_add = 0;
                }
                else
                {
                    sum += next_to_add;
                    next_to_add = 500;
                }
            }
            case 'M':
            {
                if(next_to_add == 100)
                {
                    sum += 900;
                    next_to_add = 0;
                }
                else
                {
                    sum += next_to_add;
                    next_to_add = 1000;
                }
            }
        i++;
        }
    }
}