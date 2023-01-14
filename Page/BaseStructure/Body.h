#include <Arduino.h>
#include <Footer.h>
#include <Element.h>
#include <Div.h>
class Body : public Element
{
public:
    Body(String pageName, String contents, Footer footer) : Element("body", Div(contents + footer, (Attribute[1]){Attribute{"class", "container"}}),
                                                                    (Attribute[1]){Attribute{"data-attribute", pageName}}) {}
};