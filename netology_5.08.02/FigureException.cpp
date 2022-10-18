#include "FigureException.h"


FigureException::FigureException(const std::string& what) : std::domain_error(what)
{

}