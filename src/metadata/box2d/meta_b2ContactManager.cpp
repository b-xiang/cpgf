#include "Box2D/Box2D.h"
#include "Box2D/Dynamics/b2ContactManager.h"

#include "cpgf/metadata/box2d/meta_b2ContactManager.h"

#include "cpgf/gmetapolicy.h"
#include "cpgf/goutmain.h"

using namespace cpgf;

namespace {

G_AUTO_RUN_BEFORE_MAIN()
{
    {
    GDefineMetaClass<void> _ns = GDefineMetaClass<void>::define("box2d");
    GDefineMetaClass<b2ContactManager> _d = GDefineMetaClass<b2ContactManager>::declare("b2ContactManager");
    _ns._class(_d);
    buildMetaClass_B2ContactManager(0, _d, NULL, GMetaPolicyCopyAllConstReference());
    }
    

}

} // unnamed namespace
