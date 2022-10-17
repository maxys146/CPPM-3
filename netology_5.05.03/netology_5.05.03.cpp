// netology_5.05.03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure
{
protected:
    int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
    int sides_count;
    std::string name;
    virtual bool check()
    {
        if (sides_count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
public:
    Figure()
    {
        name = "Фигура";
        sides_count = 0;
    }
    virtual void print_info()
    {
        std::cout << get_name() << ": " << "\n";
        if (this->check())
        {
            std::cout << "Правильно\n";
        }
        else
        {
            std::cout << "Неправильно\n";
        }
        std::cout << "Количество сторон: " << get_sides_count() << "\n";
        if (sides_count == 0)
        {
            std::cout << std::endl;
        }
    }
    int get_sides_count()
    {
        return sides_count;
    }
    std::string get_name()
    {
        return name;
    }
    int get_side_a()
    {
        return a;
    }
    int get_side_b()
    {
        return b;
    }
    int get_side_c()
    {
        return c;
    }
    int get_side_d()
    {
        return d;
    }
    int get_angle_A()
    {
        return A;
    }
    int get_angle_B()
    {
        return B;
    }
    int get_angle_C()
    {
        return C;
    }
    int get_angle_D()
    {
        return D;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
        sides_count = 3;
    }
    Triangle(int a, int b, int c, int A, int B, int C)
    {
        name = "Треугольник";
        sides_count = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_info() override
    {
        Figure::print_info();
        std::cout << "Стороны:"
            << " a=" << get_side_a()
            << " b=" << get_side_b()
            << " c=" << get_side_c()
            << "\n";
        std::cout << "Углы:"
            << " A=" << get_angle_A()
            << " B=" << get_angle_B()
            << " C=" << get_angle_C()
            << "\n";
        std::cout << std::endl;
    }
    bool check() override
    {
        if ((A + B + C) == 180 && sides_count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class RectangularTriangle : public Triangle
{
public:
    RectangularTriangle(int a, int b, int c, int A, int B)
    {
        name = "Прямоугольный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = 90;
    }
    bool check() override
    {
        if (Triangle::check() && C == 90 && sides_count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class UninhabitedTriangle : public Triangle
{
public:
    UninhabitedTriangle(int a, int b, int A, int B)
    {
        name = "Равнобедренный треугольник";
        this->a = this->c = a;
        this->b = b;
        this->A = this->C = A;
        this->B = B;
    }
    bool check() override
    {
        if (Triangle::check() && a == c && A == C && sides_count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int a)
    {
        name = "Равносторонний треугольник";
        this->a = this->b = this->c = a;
        this->A = this->B = this->C = 60;
    }
    bool check() override
    {
        if (Triangle::check() && a == b && b == c && A == B && B == C && C == 60 && sides_count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        sides_count = 4;
    }
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        name = "Четырехугольник";
        sides_count = 4;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_info() override
    {
        Figure::print_info();
        std::cout << "Стороны:"
            << " a=" << get_side_a()
            << " b=" << get_side_b()
            << " c=" << get_side_c()
            << " d=" << get_side_d()
            << "\n";
        std::cout << "Углы:"
            << " A=" << get_angle_A()
            << " B=" << get_angle_B()
            << " C=" << get_angle_C()
            << " D=" << get_angle_D()
            << "\n";
        std::cout << std::endl;
    }
    bool check() override
    {
        if ((A + B + C + D) == 360 && sides_count == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle()
    {
    }
    Rectangle(int a, int b)
    {
        name = "Прямоугольник";
        this->a = this->c = a;
        this->b = this->d = b;
        this->A = this->B = this->C = this->D = 90;
    }
    bool check() override
    {
        if (Quadrangle::check() && a == c && b == d && A == B && B == C && C == D && D == 90 && sides_count == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Square : public Rectangle
{
public:
    Square(int a)
    {
        name = "Квадрат";
        this->a = this->c = this->b = this->d = a;
        this->A = this->B = this->C = this->D = 90;
    }
    bool check() override
    {
        if (Quadrangle::check() && a == b && b == c && c == d && A == B && B == C && C == D && D == 90 && sides_count == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Parallelogamm : public Rectangle
{
public:
    Parallelogamm(int a, int b, int A, int B)
    {
        name = "Параллелограмм";
        this->a = this->c = a;
        this->b = this->d = b;
        this->A = this->C = A;
        this->B = this->D = B;
    }
    bool check() override
    {
        if (Quadrangle::check() && a == c && b == d && A == C && B == D && sides_count == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Rumb : public Rectangle
{
public:
    Rumb(int a, int A, int B)
    {
        name = "Ромб";
        this->a = this->c = this->b = this->d = a;
        this->A = this->C = A;
        this->B = this->D = B;
    }
    bool check() override
    {
        if (Quadrangle::check() && a == b && b == c && c == d && A == C && B == D && sides_count == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void print_info(Figure figure)
{
    std::cout << figure.get_name() << ": " << "\n";
    figure.print_info();
    std::cout << "Количество сторон: " << figure.get_sides_count() << "\n";
    if (figure.get_sides_count() > 0)
    {
        std::cout << "Стороны:"
            << " a=" << figure.get_side_a()
            << " b=" << figure.get_side_b()
            << " c=" << figure.get_side_c();
        if (figure.get_sides_count() == 4)
        {
            std::cout << " d=" << figure.get_side_d();
        }
        std::cout << "\n";
        std::cout << "Углы:"
            << " A=" << figure.get_angle_A()
            << " B=" << figure.get_angle_B()
            << " C=" << figure.get_angle_C();
        if (figure.get_sides_count() == 4)
        {
            std::cout << " D=" << figure.get_angle_D();
        }
        std::cout << "\n\n";
    }

}

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure figure;
    figure.print_info();

    Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
    triangle->print_info();
    delete triangle;
    Figure* bad_triangle_rec = new RectangularTriangle(10, 20, 30, 50, 60);
    bad_triangle_rec->print_info();
    delete bad_triangle_rec;
    Figure* triangle_rec = new RectangularTriangle(10, 20, 30, 50, 40);
    triangle_rec->print_info();
    delete triangle_rec;
    Figure* triangle_uni = new UninhabitedTriangle(10, 20, 50, 60);
    triangle_uni->print_info();
    delete triangle_uni;
    Figure* triangle_ecu = new EquilateralTriangle(30);
    triangle_ecu->print_info();
    delete triangle_ecu;

    Figure* quadrangle = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    quadrangle->print_info();
    delete quadrangle;
    Figure* rectangle = new Rectangle(10, 20);
    rectangle->print_info();
    delete rectangle;
    Figure* square = new Square(20);
    square->print_info();
    delete square;
    Figure* parallelogamm = new Parallelogamm(20, 30, 30, 40);
    parallelogamm->print_info();
    delete parallelogamm;
    Figure* rumb = new Rumb(30, 30, 40);
    rumb->print_info();
    delete rumb;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
