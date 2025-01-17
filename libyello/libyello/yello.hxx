#pragma once

#include <iosfwd>
#include <string>

#include <libyello/export.hxx>

namespace yello
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBYELLO_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
