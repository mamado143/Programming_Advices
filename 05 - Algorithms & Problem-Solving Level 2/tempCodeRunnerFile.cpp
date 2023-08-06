int frequency_digits(int digits, int number)
{
    int frequency = 0;
    int last_digit = 0;
    
    while (number > 0)
    {
        last_digit = number % 10;
        number /= 10;
        if (last_digit == digits)
        {
            frequency++;
        }
    }
        return frequency;
}