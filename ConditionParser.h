//
// Created by oded on 12/20/18.
//

#ifndef FLIGHT_SIMULATOR_CONDITIONPARSER_H
#define FLIGHT_SIMULATOR_CONDITIONPARSER_H


#include "Commands.h"
#include "Parser.h"

class ConditionParser : public Commands {

protected:
    vector<Commands> commands;
    Parser *parser;
    Expression *left;
    Expression *right;
    string condition;

public:
    ConditionParser(Parser *parser, mapCommand *mapTable, symbolTable *varTable) : Commands(mapTable, varTable) {
        ConditionParser::parser = parser;
        left = nullptr;
        right = nullptr;
    }
    bool isCondition(string str);
    void setExpressions(string& data);

    virtual int execute(string str);

};


#endif //FLIGHT_SIMULATOR_CONDITIONPARSER_H