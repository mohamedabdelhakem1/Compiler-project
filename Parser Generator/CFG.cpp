#include <bits/stdc++.h>
#include "ProductionRule.cpp"
#include "../lexical analyzer generator/LexicalGeneratorBuilder.cpp"
using namespace std;
class CFG
{
private:
    /// add helper functions here
    LexicalGeneratorBuilder *lexBuilder;
    unordered_set<string> terminls;
    unordered_map<string, vector<ProductionRule *>> nonTerminals;
    vector<ProductionRule *> productionRules;
    unordered_map<string, vector<string>> firstSets;
    unordered_map<string, vector<string>> FollowSets;
    unordered_map<string, unordered_map<string, ProductionRule>> ll1Table;
    vector<string> sententialLines;

public:
    CFG::CFG(LexicalGeneratorBuilder *_lex)
    {
    }
    /// set  DS of terminals and nonterminals and production rules
    void parseGrammerFile(string grammerFile)
    {
    }
    void computeFirstSets()
    {
    }
    void computeFollowSets()
    {
    }
    void GenerateParseTable()
    {
    }
    void parseInput()
    {
    }
    void eliminateLeftRecursion()
    {
    }
    void eliminateLeftFactor()
    {
    }
};
