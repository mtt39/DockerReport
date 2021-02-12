/*
	yaml_parser.hpp

	Declaration file for YAML parsing functions
*/

#ifndef INCLUDED_YAML_PARSER_HPP
#define INCLUDED_YAML_PARSER_HPP

#include <string>

// YAML parsing is at a key
bool isKey(std::string::const_iterator pc, bool invalue);

#endif
