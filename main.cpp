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
    std::cout << "Введито стоимость ---> ";
    std::cin >> ProductCost;
    return Product(Title, Color, MeasurementType, MeasurementUnits, ProductCost, ID);
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
    for (int i = 0; i < ProductAmount; i++)
    {
        ProductList[i].m_OutProdcutInfo();
    }
}