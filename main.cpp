#include "Product.cpp"
using namespace std;
Product AddProduct()
{
    int64_t ID;
    int64_t MeasurementUnits;
    int64_t ProductCost;
    std::string Title;
    std::string Color;
    std::string MeasurementType;
    std::cout << "Введите артикул ---> ";
    std::cin >> ID;
    std::cout << "Введите наименование ---> ";
    std::cin >> Title;
    std::cout << "Введите цвет ---> ";
    std::cin >> Color;
    std::cout << "Введите тип единиц измерения ---> ";
    std::cin >> MeasurementType;
    std::cout << "Введите кол-во товара в выбранных единицах измерения ---> ";
    std::cin >> MeasurementUnits;
    std::cout << "Введито стоимость ---> ";
    std::cin >> ProductCost;
    return Product(Title, Color, MeasurementType, MeasurementUnits, ProductCost, ID);
}
int main()
{
    int ProductAmount = 0;
    cin >> ProductAmount;
    Product *ProductList = new Product[ProductAmount];
    for (int i=0;i<ProductAmount;i++)
    {
        ProductList[i]=AddProduct();
    }
    for (int i=0;i<ProductAmount;i++)
    {
       cout<<ProductList[i].m_OutProdcutInfo()<<endl;
    }
}