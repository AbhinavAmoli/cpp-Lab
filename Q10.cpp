#include <iostream>
using namespace std;

class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    double pricePerItem;

public:
    Invoice(string pNo, string pDesc, int q, double price)
    {
        partNumber = pNo;
        partDescription = pDesc;

        if (q < 0)
            quantity = 0;
        else
            quantity = q;

        if (price < 0)
            pricePerItem = 0.0;
        else
            pricePerItem = price;
    }

    string getPartNumber()
    {
        return partNumber;
    }

    string getPartDescription()
    {
        return partDescription;
    }

    int getQuantity()
    {
        return quantity;
    }

    double getPricePerItem()
    {
        return pricePerItem;
    }

    void setPartNumber(string pNo)
    {
        partNumber = pNo;
    }

    void setPartDescription(string pDesc)
    {
        partDescription = pDesc;
    }

    void setQuantity(int q)
    {
        if (q < 0)
            quantity = 0;
        else
            quantity = q;
    }

    void setPricePerItem(double price)
    {
        if (price < 0)
            pricePerItem = 0.0;
        else
            pricePerItem = price;
    }

    double getInvoiceAmount()
    {
        return quantity * pricePerItem;
    }
};

int main()
{
    Invoice obj("101", "Hammer", 5, 100.50);

    cout << "Part Number: " << obj.getPartNumber() << endl;
    cout << "Description: " << obj.getPartDescription() << endl;
    cout << "Quantity: " << obj.getQuantity() << endl;
    cout << "Price: " << obj.getPricePerItem() << endl;
    cout << "Invoice Amount: " << obj.getInvoiceAmount() << endl;

    return 0;
}
