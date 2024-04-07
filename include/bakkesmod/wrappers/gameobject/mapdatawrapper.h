#pragma once

class BAKKESMOD_PLUGIN_IMPORT MapDataWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(MapDataWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

	[[nodiscard]] std::string GetName() const;
	[[nodiscard]] std::string GetLocalizedName() const;
	[[nodiscard]] std::string GetLocalizedVariantName() const;
	MapDataWrapper GetIsVariantOf() const;

	/**
	 * \brief Use EnumWrapper::GetWeatherVariant to interpret this value
	 * \return A enum value for the WeatherVariant
	 */
	[[nodiscard]] unsigned char GetWeatherVariant() const;

private:
	PIMPL
	
};
