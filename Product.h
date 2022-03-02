#include <string>
class Product
{
private:
    std::string m_ProductTitle;
    std::string m_Color;
    std::string m_MeasurementType;
    int64_t m_MeasurementUnits;
    int64_t m_ProductCost;
    int64_t m_ID;

public:
    Product(std::string, std::string, std::string, int64_t, int64_t, int64_t);
    std::string m_GetProductTitle();
    std::string m_GetColor();
    std::string m_GetMeasurementType();
    int64_t m_GetMeasurementUnits();
    int64_t m_GetProductCost();
    int64_t m_GetID();
    std::string m_SetProductTitle();
    std::string m_SetColor();
    std::string m_SetMeasurementType();
    int64_t m_SetMeasurementUnits();
    int64_t m_SetProductCost();
    int64_t m_SetID();
    void m_OutProdcutInfo();
    Product m_AddProduct();
};