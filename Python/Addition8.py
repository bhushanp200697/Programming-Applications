import Addition8_Module

def main():
    print("Value of __name__ from main is : ",__name__)

    print("Enter first number : ")
    no1 = int(input())
    print("Enter second number : ")
    no2 = int(input())

    Sum = Addition8_Module.Addition(no1,no2)

    print("Addition is : ",Sum)

if __name__ == "__main__":
    main()