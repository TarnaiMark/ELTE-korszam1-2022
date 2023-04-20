
class Vector2d
{
    public:
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
    Vector2d operator+( Vector2d const &b)
    {
        return Vector2d{x + b.x, y + b.y};
    }
    Vector2d operator*( float b)
    {
    return Vector2d{x * b, x * b};
    }
    Vector2d operator-( Vector2d const &b)
    {
        return Vector2d{x - b.x, y - b.y};
    }
    Vector2d operator/( float b)
    {
        return Vector2d{x / b, y / b};
    }
    double length()
    {
     
     return sqrt(pow(x, 2) + pow(y, 2));
    }
   Vector2d normalize()
    {
    
        return Vector2d{x / length(), y / length()};
    }
    double dot(Vector2d const& u)
    {
        return x * u.x + y * u.y;
    }
    double sqlength()
    {
    return x * x + y * y;
    }
};




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