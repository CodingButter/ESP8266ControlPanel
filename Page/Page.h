#pragma once
#include <Arduino.h>
#include "Header.h"
#include "Body.h"
#include "Footer.h"

class Page : public IPage
{
public:
    Page();
    virtual String _css() override;
    virtual String _body() override;
    virtual String _foot() override;
};