#pragma once

class BAKKESMOD_PLUGIN_IMPORT ProductPaintWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(ProductPaintWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	[[nodiscard]]  std::string GetLabel() const;
	[[nodiscard]]  bool GetbVisible() const;

	[[nodiscard]] int GetId() const;

	/**
	 * \brief Use EnumWrapper::GetPaintFinishTyp() to interpret this value
	 * \return A enum value for the WeatherVariant
	 */
	[[nodiscard]] unsigned char GetFinishType() const;
	[[nodiscard]] std::vector<LinearColor> GetColors() const;
	//END SELF IMPLEMENTED

private:
	PIMPL
	
};
