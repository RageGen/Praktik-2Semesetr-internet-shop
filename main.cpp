#include "Product.cpp"
using namespace std;
int ProductAmount;
Product AddProduct()
{
    int64_t ID;
    int64_t MeasurementUnits;
    int64_t ProductCost;
    string Title;
    string Color;
    string MeasurementType;
    std::cout << "Введите артикул ---> ";
    std::cin >> ID;
    cin.ignore();
    std::cout << "Введите наименование ---> ";
    std::getline(cin, Title);
    std::cout << "Введите цвет ---> ";
    std::cin >> Color;
    std::cout << "Введите тип единиц измерения ---> ";
    std::cin >> MeasurementType;
    std::cout << "Введите кол-во товара в выбранных единицах измерения ---> ";
    std::cin >> MeasurementUnits;
    std::cout << "Введите стоимость ---> ";
    std::cin >> ProductCost;
    return Product(Title, Color, MeasurementType, MeasurementUnits, ProductCost, ID);
}
void ProductTable(vector<Product>&ProductList)
{
    int64_t MaxIDLength=6;
    int64_t MaxTitleLength=0;
    int64_t MaxColorLength=0;
    int64_t MaxMeasurementTypeLength=0;
    int64_t MaxMeasurementUnitsLength=0;
    for (int i=0;i<ProductAmount;i++)
    {
        if (ProductList[i].m_GetProductTitle().length()>MaxTitleLength)
        {
            MaxTitleLength=ProductList[i].m_GetProductTitle().length();
        }
        if (ProductList[i].m_GetColor().length()>MaxColorLength)
        {
            MaxColorLength=ProductList[i].m_GetColor().length();
        }
        if (ProductList[i].m_GetMeasurementType().length()>MaxMeasurementTypeLength)
        {
            MaxMeasurementTypeLength=ProductList[i].m_GetMeasurementType().length();
        }
    }
    for (int i=0;i<ProductAmount;i++)
    {
        int64_t BufferUnit=ProductList[i].m_GetMeasurementUnits();
        for (int k=0;BufferUnit>0;k++)
        {
            BufferUnit/=10;
            if (k>MaxMeasurementUnitsLength)
            {
                MaxMeasurementUnitsLength=k;
            }
        }
    }
    for (int j=0;j<ProductAmount;j++)
    {
        cout<<"|"<<setw(MaxIDLength)<<left<<ProductList[j].m_GetID()<<"|"<<setw(MaxTitleLength)<<left<<ProductList[j].m_GetProductTitle()<<"|"<<setw(MaxColorLength)<<left<<ProductList[j].m_GetColor()
        <<"|"<<setw(MaxMeasurementUnitsLength)<<left<<ProductList[j].m_GetMeasurementUnits()<<setw(MaxMeasurementTypeLength)<<left<<ProductList[j].m_GetMeasurementType()<<"|"<< endl;
    }
}
int main()
{
    vector<Product> ProductList;
    cout << "Сколько товаров хотите добавить?" << endl;
    cin >> ProductAmount;
    for (int i = 0; i < ProductAmount; i++)
    {
        ProductList.push_back(AddProduct());
    }
    ProductTable(ProductList);
}