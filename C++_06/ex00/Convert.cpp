#include "Convert.hpp"

ScalarConverter::ScalarConverter(){
};

ScalarConverter::ScalarConverter(const ScalarConverter& other){
    (void)other;
};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    (void)other;
    return (*this);
};

ScalarConverter::~ScalarConverter(){
};

void isCharLiteral(const char *s)
{
    if (std::isalpha(s[0]))
    {
        std::cout << "char : " << s[0] << std::endl;
    }
    std::cout << "int : " << static_cast<int>(s[0]) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(s[0])<< 'f' << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(s[0]) << std::endl;
}

bool isIntLiteral(const char *s)
{
    int i = 0;

    if (s[0] == '-' || s[0] == '+')
        i++;
    if (!s[i])
        return (false);
    while (s[i])
    {
        if (!std::isdigit(s[i]))
            return (false);
        i++;
    }
    long num = std::strtol(s, NULL, 10); 
    //long strtol(const char *nptr, char **endptr, int base);
    //nptr: string to convert ,endptr: 1st found caractere , base: 10
    if (num < INT_MIN || num > INT_MAX)
    {
        std::cout << "out of range" << std::endl;
        return (false);
    }
    return (true);
}

void isInt(const char *s)
{
    int num = std::atoi(s);
    if (num < 32 || num > 126)
    {
        std::cout << "char : ";
        std::cout << "Non displayable" << std::endl;
    }
    if (num > 31 && num < 127)
    {
        std::cout << "char : ";
        std::cout << static_cast<char>(num) << std::endl;
    }
    if (num >= INT_MIN || num <= INT_MAX)
    {
        std::cout << "int : " << num << std::endl;
    }
    std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(num)<< 'f' << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(num) << std::endl;
}

int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == '.')
            break;
        i++;
    }
    return (i);
}

bool isFloatLiteral(const char *s)
{
    int i = 0;
    char *end;

    if (s[0] == '-' || s[0] == '+')
        i++;
    if (!s[i])
        return (false);
    if (ft_strlen(s) > 18)
    {
        std::cout << "1111111111111111 out of range" << std::endl;
        return (false);
    }
    std::strtol(&s[i], &end, 10);
    if (end[0] != '.' || end[1] == 'f')
    {
        std::cout << "inappropriate form" << std::endl;
        return (false);
    }
    int j = 0;
    while (end[++j])
    {
        if (!std::isdigit(end[j]))
        {
            if (end[j] == 'f' && end[j + 1] == '\0')
                return (true);
            std::cout << "inappropriate form" << std::endl;
            return (false);
        }
    }
    return (true);
}

void isFloat(const char *s)
{
    float value = strtof(s, NULL);
    if (value < 32 || value > 126)
    {
        std::cout << "char : ";
        std::cout << "Non displayable" << std::endl;
    }
    if (value > 31 && value < 127)
    {
        std::cout << "char : ";
        std::cout << static_cast<char>(value) << std::endl;
    }
    if (value >= INT_MIN || value <= INT_MAX)
    {
        std::cout << "int : " << static_cast<int>(value) << std::endl;
    }
    if (value >= FLT_MIN || value <= FLT_MAX)
    {
        std::cout << "float : " << std::fixed << std::setprecision(2) << value << 'f' << std::endl;    
    }
    std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(value) << std::endl;
}

bool isDoubleLiteral(const char *s)
{
    int i = 0;
    char *end;

    if (s[0] == '-' || s[0] == '+')
        i++;
    if (!s[i])
        return (false);
    if (ft_strlen(s) > 18)
    {
        std::cout << "this is in double scoop out of range" << std::endl;
        return (false);
    }
    std::strtol(&s[i], &end, 10);
    if (end[0] != '.')
    {
        std::cout << "inappropriate form" << std::endl;
        return (false);
    }
    int j = 0;
    while (end[++j])
    {
        if (!std::isdigit(end[j]))
        {
            std::cout << "inappropriate form" << std::endl;
            return (false);
        }
    }
    return (true);
}

void isDouble(const char *n)
{
    double value = strtod(n, NULL);
    if (value < 32 || value > 126)
    {
        std::cout << "char : ";
        std::cout << "Non displayable" << std::endl;
    }
    if (value > 31 && value < 127)
    {
        std::cout << "char : ";
        std::cout << static_cast<char>(value) << std::endl;
    }
    if (value >= INT_MIN || value <= INT_MAX)
    {
        std::cout << "int : " << static_cast<int>(value) << std::endl;
    }
    std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<float>(value) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(2) << value << 'f' << std::endl;    
}

void ScalarConverter::convert(const std::string s)
{
    const char *n = s.c_str();

    if (std::strlen(n) == 1 && !std::isdigit(n[0]))
        isCharLiteral(n);
    else if (isIntLiteral(n))
        isInt(n);
    else if (isDoubleLiteral(n))
        isDouble(n);
    else if (isFloatLiteral(n))
        isFloat(n);
    // else
    //     isSpecial(n);
}