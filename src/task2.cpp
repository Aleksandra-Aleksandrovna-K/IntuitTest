bool checkPrime(unsigned int value)
{
    int i;
    if (abs(value)<=3)
    {
        return true;
    }
    for (i = 2; i <= (sqrt(abs(value)))+1; i++)//проверяем остаток до корня из числа
    {
        if (value%i==0)
        {
            return false;
            break;
        }
        else
        {
            return true;
        }
    }
}
unsigned long long nPrime(unsigned n)
{
	int a=1;//счётчик найденных простых чисел
	int b=0;//переменная для запоминания текущего простого числа
	bool j;//переменная для запоминания результата проверки числа
	unsigned int i;//переменная для перебора чисел
	for (i = 1; a <=n; i++)
	{
		j=checkPrime(i);
		if (j)
		{
			b=i;
			a++;
		}
	}
	return b;
}
unsigned long long nextPrime(unsigned long long value)
{
	int a=0;//переменная для результата
	bool j;//переменная для запоминания результата проверки числа
	int b=0;//переменная для запоминания текущего простого числа
	int i;//переменная цикла
	for (i = value+1; a <= 1; i++)
	{
		j=checkPrime(i);
		if (j)
		{
			b=i;
			a=1;
			break;
		}
	}
	return b;
}