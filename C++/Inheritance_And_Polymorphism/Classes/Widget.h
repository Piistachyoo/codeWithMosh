#ifndef WIDGET_H
#define WIDGET_H

// Abstract class (Have unimplemented virtual method)
// Can't be used as an object
class Widget {
  public:
    virtual void draw() const = 0; // pure virtual method
    void enable();
    void disable();
    bool isEnabled() const;

    virtual ~Widget() = default;

  private:
    bool enabled;

  protected:
    int width;
};

#endif // WIDGET_H