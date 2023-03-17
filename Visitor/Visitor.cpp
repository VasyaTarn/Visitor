#include <iostream>
#include "Application.h"

int main()
{
    Application* client = new Application;
    array<const Shape*, 3> shapes = { new Rectangle, new Circle, new Dot };
    XMLExportVisitor* xml = new XMLExportVisitor;
    
    client->clientCode(shapes, xml);

    for (const Shape* shp : shapes)
    {
        delete shp;
    }

    delete xml;

    return 0;
}


