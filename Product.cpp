#include "Product.h"
#include <iostream>
Product::Product(std::string Title, std::string Color, std::string MeasurementType, int64_t MeasurementUnits, int64_t ProductCost, int64_t ID)
{
    m_ProductTitle = Title;
    m_Color = Color;
    m_MeasurementType = MeasurementType;
    m_MeasurementUnits = MeasurementUnits;
    m_ProductCost = ProductCost;
    m_ID = ID;
}
std::string Product::m_GetProductTitle()
{
    return m_ProductTitle;
}
std::string Product::m_GetColor()
{
    return m_Color;
}
std::string Product::m_GetMeasurementType()
{
    return m_MeasurementType;
}
int64_t Product::m_GetMeasurementUnits()
{
    return m_MeasurementUnits;
}
int64_t Product::m_GetProductCost()
{
    return m_ProductCost;
}
int64_t Product::m_GetID()
{
    return m_ID;
}
void Product::m_OutProdcutInfo()
{
    std::cout << m_ID << "|" << m_ProductTitle << "|" << m_Color << "|" << m_MeasurementUnits << " " << m_MeasurementType << "|" << m_ProductCost << std::endl;
}
