//
//  RGB.hpp
//  VI-RT
//
//  Created by Luis Paulo Santos on 30/01/2023.
//

#ifndef RGB_hpp
#define RGB_hpp

class RGB {
public:
    float R, G, B;
    RGB ():R(0.),G(0.),B(0.) {}
    RGB (float r, float g, float b):R(r),G(g),B(b) {}
    RGB (float *rgb):R(rgb[0]),G(rgb[1]),B(rgb[2]) {}
    ~RGB () {}
    RGB& operator+=(const RGB& rhs){
        this->R += rhs.R;
        this->G += rhs.G;
        this->B += rhs.B;
        return *this;
    }
    RGB operator+(RGB const& obj)
    {
        RGB res;
        res.R = R + obj.R;
        res.G = G + obj.G;
        res.B = B + obj.B;
        return res;
    }
    RGB operator*(RGB const& obj)
    {
        RGB res;
        res.R = R * obj.R;
        res.G = G * obj.G;
        res.B = B * obj.B;
        return res;
    }
    RGB operator*(const float& scale) const {
        return RGB(R * scale, G * scale, B * scale);
    }
    RGB operator/(RGB const& obj)
    {
        RGB res;
        res.R = R / obj.R;
        res.G = G / obj.G;
        res.B = B / obj.B;
        return res;
    }
    float Y() {
        return (R*0.2126 + G*0.7152 + B*0.0722 );
    }
    bool isZero () {
        return ((R==0.) && (G==0.) && (B==0.));
    }
};

#endif /* RGB_hpp */
