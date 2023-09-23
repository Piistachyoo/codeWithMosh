#ifndef WIDGET_H
#define WIDGET_H

class Widget {
  public:
    void enable();
    void disable();
    bool isEnabled() const;

  private:
    bool enabled;
};

#endif // WIDGET_H