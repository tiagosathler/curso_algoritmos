""" Problema "aumento"
 Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto
 cada pessoa ganha, conforme tabela ao lado.
 Fazer um programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois do aumento,
 quanto foi o aumento e qual foi a porcentagem de aumento.

 Salário atual:
 Até R$ 1000.00                       -> Aumento 20%
 Acima de R$ 1000.00 até R$ 3000.00   -> Aumento 15%
 Acima de R$ 3000.00 até R$ 8000.00   -> Aumento 10%
 Acima de R$ 8000.00                  -> Aumento 5%
"""

SALARY_RANGE1 = 1000.0
SALARY_RANGE2 = 3000.0
SALARY_RANGE3 = 8000.0


def aumento() -> None:
    actual_salary = float(input("Digite o salário da pessoa: "))

    percentage = 5

    if actual_salary <= SALARY_RANGE1:
        percentage = 20
    elif actual_salary <= SALARY_RANGE2:
        percentage = 15
    elif actual_salary <= SALARY_RANGE3:
        percentage = 10

    salary_increment = actual_salary * percentage / 100.00
    new_salary = actual_salary + salary_increment

    print(f"Novo salário = R$ {new_salary:.2f}")
    print(f"Aumento = R$ {salary_increment:.2f}")
    print(f"Porcentagem = {percentage} %")


if __name__ == "__main__":
    aumento()
