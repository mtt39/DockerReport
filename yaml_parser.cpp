/*
	yaml_parser.cpp

	Implementation file for YAML parsing functions
*/

#include "yaml_parser.hpp"

// YAML parsing is at a key
bool isKey(std::string::const_iterator pc, bool invalue){

	return !invalue && isalpha(*pc);
}
