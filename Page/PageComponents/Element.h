#pragma once
#include <Arduino.h>
#include "Attribute.h"
#include <stdlib.h>

class Element
{
public:
    Element(String tag, String contents, Attribute *attributes, Attribute *specialAttributes)
    {
        this->_tag = tag;
        for (int i = 0; i < sizeof(specialAttributes); i++)
        {
            bool found = false;
            Attribute a = specialAttributes[i];
            for (int j = 0; j < sizeof(attributes); j++)
            {
                Attribute b = attributes[j];
                if (a == b)
                {
                    attributes[i].value += " " + b.value;

                    this->_atts.push_back(attributes[i]);
                    found = true;
                }
            }
            if (!found)
            {
                this->_atts.push_back(a);
            }
        }
        this->_contents = contents;
    }
    Element(String tag, String contents, Attribute *attributes) : Element(tag, contents, attributes, {}){};
    Element(String tag, String contents) : Element(tag, contents, {}, {}){};
    Element(String tag) : Element(tag, "", {}, {}){};
    operator String()
    {
        String s = "<" + this->_tag;
        for (int i = 0; i < sizeof(this->_atts); i++)
        {
            Attribute a = this->_atts[i];
            s += " " + a.name + "=\"" + a.value + "\"";
        }

        s += ">" + this->_contents + "</" + this->_tag + ">";
        return s;
    }

private:
    String _tag;
    std::vector<Attribute> _atts;
    String _contents;
};