#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include <set>
#include <ostream>
class Movie {
private:
    // jmena oznacujici privatni atributy/metody s _ na konci
    const std::string& name_;
    unsigned short year_;
    const std::string& genre_;
    unsigned short rating_;
    const std::set<std::string>& actors_;
public:
    Movie(const std::string& name, unsigned short year, const std::string& genre, unsigned short rating, const std::set<std::string>& actors);
    Movie(std::string &&name, unsigned short year, std::string &&genre, unsigned short rating, std::set<std::string> &&actors);
    const std::string& name() const;
    unsigned short year();
    const std::string& genre() const;
    unsigned short rating();
    const std::set<std::string>& actors() const;
    void print_json(std::ostream stream) const;

};
inline const std::string& Movie::name() const{
    return name_;
}
inline unsigned short Movie::year() {
    return year_;
}

inline const std::string& Movie::genre() const{
    return genre_;
}

inline unsigned short Movie::rating() {
    return rating_;
}

inline const std::set<std::string>& Movie::actors() const{
    return actors_;
}
#endif
