
struct Vector2d
{
    double x, y;
    Vector2d &operator+=(Vector2d const &v)
    {
        x += v.x;
        y += v.y;
        return *this;
    }
    Vector2d &operator-=(Vector2d const &v)
    {
        x -= v.x;
        y -= v.y;
        return *this;
    }
    Vector2d &operator*=(float f)
    {
        x = x * f;
        y = y * f;
        return *this;
    }
    Vector2d &operator/=(float f)
    {
        x = x / f;
        y = y / f;
        return *this;
    }
};
Vector2d operator+(Vector2d const &a, Vector2d const &b)
{
    return Vector2d{a.x + b.x, a.y + b.y};
}

Vector2d operator*(Vector2d const &a, float b)
{
    return Vector2d{a.x * b, a.y * b};
}

Vector2d operator*(float b, Vector2d const &a)
{
    return Vector2d{a.x * b, a.y * b};
}

Vector2d operator/(Vector2d const &a, float b)
{
    return Vector2d{a.x / b, a.y / b};
}

double length(Vector2d const &v)
{
    float vx = v.x;
    float vy = v.y;
    return sqrt(pow(vx, 2) + pow(vy, 2));
}

Vector2d normalize(Vector2d const &v)
{
    float vx = v.x;
    float vy = v.y;
    float l = length(v);
    return Vector2d{vx / l, vy / l};
}

double dot(Vector2d const &v, Vector2d const &u)

{
    return v.x * u.x + v.y * u.y;
}

double sqlength(Vector2d const &v)
{
    return v.x * v.x + v.y * v.y;
}

std::ostream &operator<<(std::ostream &o, Vector2d const &v)
{
    o << v.x << "   " << v.y;
    return o;
}

std::istream& operator>>( std::istream& i, Vector2d& v)
{
    i>>v.x;
    i>>v.y;
    return i;
}