/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcEarthworksFillTypeEnum.h"

// TYPE IfcEarthworksFillTypeEnum = ENUMERATION OF	(BACKFILL	,COUNTERWEIGHT	,SUBGRADE	,EMBANKMENT	,TRANSITIONSECTION	,SUBGRADEBED	,SLOPEFILL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcEarthworksFillTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcEarthworksFillTypeEnum> copy_self( new IfcEarthworksFillTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcEarthworksFillTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEARTHWORKSFILLTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BACKFILL:	stream << ".BACKFILL."; break;
		case ENUM_COUNTERWEIGHT:	stream << ".COUNTERWEIGHT."; break;
		case ENUM_SUBGRADE:	stream << ".SUBGRADE."; break;
		case ENUM_EMBANKMENT:	stream << ".EMBANKMENT."; break;
		case ENUM_TRANSITIONSECTION:	stream << ".TRANSITIONSECTION."; break;
		case ENUM_SUBGRADEBED:	stream << ".SUBGRADEBED."; break;
		case ENUM_SLOPEFILL:	stream << ".SLOPEFILL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcEarthworksFillTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BACKFILL:	return L"BACKFILL";
		case ENUM_COUNTERWEIGHT:	return L"COUNTERWEIGHT";
		case ENUM_SUBGRADE:	return L"SUBGRADE";
		case ENUM_EMBANKMENT:	return L"EMBANKMENT";
		case ENUM_TRANSITIONSECTION:	return L"TRANSITIONSECTION";
		case ENUM_SUBGRADEBED:	return L"SUBGRADEBED";
		case ENUM_SLOPEFILL:	return L"SLOPEFILL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcEarthworksFillTypeEnum> IfcEarthworksFillTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcEarthworksFillTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcEarthworksFillTypeEnum>(); }
	shared_ptr<IfcEarthworksFillTypeEnum> type_object( new IfcEarthworksFillTypeEnum() );
	if( std_iequal( arg, L".BACKFILL." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_BACKFILL;
	}
	else if( std_iequal( arg, L".COUNTERWEIGHT." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_COUNTERWEIGHT;
	}
	else if( std_iequal( arg, L".SUBGRADE." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_SUBGRADE;
	}
	else if( std_iequal( arg, L".EMBANKMENT." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_EMBANKMENT;
	}
	else if( std_iequal( arg, L".TRANSITIONSECTION." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_TRANSITIONSECTION;
	}
	else if( std_iequal( arg, L".SUBGRADEBED." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_SUBGRADEBED;
	}
	else if( std_iequal( arg, L".SLOPEFILL." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_SLOPEFILL;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcEarthworksFillTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}