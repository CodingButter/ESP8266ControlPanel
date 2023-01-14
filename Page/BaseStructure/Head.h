#pragma once
#include <Arduino.h>
class Head
{
    String *js = {};
    String *css = {};
    String pageName = "";
    operator String()
    {
        String head = this->WrapperStart();
        for (int i = 0; i < sizeof(css); i++)
        {
            head += "<style>" + css[i] + "</style>";
        }
        for (int i = 0; i < sizeof(js); i++)
        {
            head += "<script>" + js[i] + "</script>";
        }
        head += "</head>";
        return head;
    }

private:
    String WrapperStart()
    {
        String head = "";
        head += "<!DOCTYPE html>";
        head += "<html>";
        head += "<head>";
        head += "<title>" + pageName + "</title>";
        head += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
    }
};