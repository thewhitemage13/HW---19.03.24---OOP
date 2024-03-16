#include <iostream>
using namespace std;

class Pen {
private:
    string color;
    double thickness;
    string type;
public:

    void Draw(string cl, double tk, string tp) {
        SetColor(cl);
        SetThickness(tk);
        SetType(tp);
    }

    void SetColor(string color) {
        this->color = color;
    }

    string GetColor() {
        return color;
    }

    void SetThickness(double thickness) {
        this->thickness = thickness;
    }

    double GetThickness() {
        return thickness;
    }

    void SetType(string type) {
        this->type;
    }

    string GetType() {
        return type;
    }
};

class Brush {
private:
    string color;
public:
    void Fill(string cl)
    {
        SetColor(cl);
    }

    void SetColor(string color) {
        this->color = color;
    }

    string GetColor() {
        return color;
    }

};

class SolidBrush : public Brush {

};

class GradientBrush : public Brush {
private:
    string* colors = nullptr;
public:
    ~GradientBrush() {
        delete[]colors;
    }
};

class HatchBrush : public Brush {
private:
    string color_two;
    string type_of_pattern;
public:

    void SetColorTwo(string color_two) {
        this->color_two = color_two;
    }

    string GetColorTwo(){
        return color_two;
    }

    void SetTypeOfPattern(string type_of_pattern) {
        this->type_of_pattern = type_of_pattern;
    }

    string GetTypeOfPattern() {
        return type_of_pattern;
    }
};


class GradientBrush : public Brush {
private:
    string path_to_image;
};

class LinerGradientBrush : public GradientBrush {

};

class RadialGradientBrush : public GradientBrush {

};

class Geometry {
private:
    Pen* pen;
    Brush* brush;
};

class Rectangle : public Geometry {

};

class Ellips : public Geometry {

};

class Polyline : public Geometry {

};

class Font {
private:
    int font_size;
    string font_family;
    int fatness;
    string italics;
    string font_color;
    string emphasis;
public:

    void SetFontSize(int font_size){
        this->font_size = font_size;
    }

    int GetFontSize(){
        return font_size;
    }

    void SetFontFamily(string font_family) {
        this->font_family = font_family;
    }

    string GetFontFamily(){
        return font_family;
    }

    void SetFatness(int fatness) {
        this->fatness = fatness;
    }

    int GetFetness() {
        return fatness;
    }

    void SetItalics(string italics) {
        this->italics = italics;
    }

    string GetItalics() {
        return italics;
    }

    void SetFontColor(string font_color) {
        this->font_color = font_color;
    }

    string GetFontColor() {
        return font_color;
    }

    void SetEmphasis(string emphasis) {
        this->emphasis = emphasis;
    }

    string GetEmphasis() {
        return emphasis;
    }
};

int main()
{
    Pen p;
    p.Draw("blue", 12.5, "dsdd");
    LinerGradientBrush lgb;
    lgb.Fill("sdsdsdsd");
}