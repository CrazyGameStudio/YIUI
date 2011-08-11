#include <boost/foreach.hpp>
#include "Base/Marcos.h"
#include "LogicTree/OrNode.h"

namespace Egametang {

bool OrNode::Run(LogicContex* contex)
{
	foreach(LogicNodeIf* node, nodes)
	{
		if (node->Run(contex))
		{
			return true;
		}
	}
	return false;
}

} // namespace Egametang

