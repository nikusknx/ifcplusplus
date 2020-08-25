/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTrackElementTypeEnum = ENUMERATION OF	(TRACKENDOFALIGNMENT	,BLOCKINGDEVICE	,VEHICLESTOP	,SLEEPER	,HALF_SET_OF_BLADES	,SPEEDREGULATOR	,DERAILER	,FROG	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTrackElementTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTrackElementTypeEnumEnum
	{
		ENUM_TRACKENDOFALIGNMENT,
		ENUM_BLOCKINGDEVICE,
		ENUM_VEHICLESTOP,
		ENUM_SLEEPER,
		ENUM_HALF_SET_OF_BLADES,
		ENUM_SPEEDREGULATOR,
		ENUM_DERAILER,
		ENUM_FROG,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTrackElementTypeEnum() = default;
	IfcTrackElementTypeEnum( IfcTrackElementTypeEnumEnum e ) { m_enum = e; }
	~IfcTrackElementTypeEnum() = default;
	virtual const char* className() const { return "IfcTrackElementTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTrackElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTrackElementTypeEnumEnum m_enum;
};
