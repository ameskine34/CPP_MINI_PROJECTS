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
    return (true);
}

void isInt(const char *s)
{
    long num = std::strtol(s, NULL, 10); 
    if (num < INT_MIN || num > INT_MAX)
    {
        std::cout << "out of range" << std::endl;
        exit(0);
    }
    int num1 = std::atoi(s);
    if (num1 < 32 || num1 > 126)
    {
        std::cout << "char : ";
        std::cout << "Non displayable" << std::endl;
    }
    if (num1 > 31 && num1 < 127)
    {
        std::cout << "char : ";
        std::cout << static_cast<char>(num1) << std::endl;
    }
    std::cout << "int : " << num1 << std::endl;
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
    std::strtol(&s[i], &end, 10);
    if (end[0] != '.' || end[1] == 'f')
        return (false);
    int j = 0;
    while (end[++j])
    {
        if (!std::isdigit(end[j]))
        {
            if (end[j] == 'f' && end[j + 1] == '\0')
                return (true);
            return (false);
        }
    }
    return (true);
}

void isFloat(const char *s)
{
    if (ft_strlen(s) > 18)
    {
        std::cout << "out of range" << std::endl;
        exit(0);
    }
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
    std::cout << "int : " << static_cast<int>(value) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(2) << value << 'f' << std::endl;
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
    std::strtol(&s[i], &end, 10);
    if (end[0] != '.')
        return (false);
    int j = 0;
    while (end[++j])
    {
        if (!std::isdigit(end[j]))
            return (false);
    }
    return (true);
}

void isDouble(const char *n)
{
    if (ft_strlen(n) > 18)
    {
        std::cout << "out of range" << std::endl;
        exit(0);
    }
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
    std::cout << "int : " << static_cast<int>(value) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(2) << value << 'f' << std::endl;    
    std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<float>(value) << std::endl;
}

bool isSpecial(const std::string s)
{
    const char *n = s.c_str();
    if (s == "nan" || s == "nanf" ||
        s == "inf" || s == "inff" ||
        s == "+inf" || s == "+inff" ||
        s == "-inf" || s == "-inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int  : impossible" << std::endl;
        if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf")
        {
            std::cout << "float  : " << static_cast<float>(strtod(n, NULL)) << 'f' << std::endl;
            std::cout << "double : " << strtod(n, NULL) << std::endl;
        }
        else
        {
            std::cout << "float  : " << strtof(n, NULL) << 'f' << std::endl;
            std::cout << "double : " << static_cast<double>(strtof(n, NULL)) << std::endl;
        }
        return (true);
    }
    return (false);
}

void ScalarConverter::convert(const std::string s)
{
    const char *n = s.c_str();

    if (isSpecial(s))
        return ;
    else if (strlen(n) == 1 && !std::isdigit(n[0]))
        isCharLiteral(n);
    else if (isIntLiteral(n))
        isInt(n);
    else if (isFloatLiteral(n))
        isFloat(n);
    else if (isDoubleLiteral(n))
        isDouble(n);
    else 
        std::cout << "inappropriate form" << std::endl;
}