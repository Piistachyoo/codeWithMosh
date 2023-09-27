#ifndef ACCOUNTLOCKED_H_
#define ACCOUNTLOCKED_H_

#include <stdexcept>

class AccountLocked : public std::exception {
  public:
    const char *what() const noexcept override {
        return "Your account is locked! Contact the admin.";
    }
};

#endif // ACCOUNTLOCKED_H_
