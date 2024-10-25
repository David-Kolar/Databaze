#include "Database.h"

Movie::Movie(const std::string &name, unsigned short year, const std::string &genre, unsigned short rating,
             const std::set<std::string> &actors): name_(name), year_(year), genre_(genre), rating_(rating), actors_(actors) {}

Movie::Movie(std::string &&name, unsigned short year, std::string &&genre, unsigned short rating,
             std::set<std::string> &&actors): name_(std::move(name)), year_(year), genre_(std::move(genre)), rating_(rating), actors_(std::move(actors)) {}

void Movie::print_json(std::ostream stream) const {

}