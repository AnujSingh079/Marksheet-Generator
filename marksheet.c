#include <stdio.h>

/* Function to calculate total marks */
int calculateTotal(int marks[5], int n)
{
    int total = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    return total;
}

/* Function to calculate percentage */
float calculatePercentage(int total, int n)
{
    return (float)total / n;
}

/* Function to calculate grade */
char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

/* Function to check result */
int checkResult(int marks[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (marks[i] < 40)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int marks[5];
    int i;
    int total;
    float percentage;
    char grade;
    int result;

    printf("===== MARKSHEET GENERATOR =====\n\n");

    printf("Enter marks for 5 subjects:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    total = calculateTotal(marks, 5);
    percentage = calculatePercentage(total, 5);
    grade = calculateGrade(percentage);
    result = checkResult(marks, 5);

    printf("\n========== MARKSHEET ==========\n");

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d : %d\n", i + 1, marks[i]);
    }

    printf("-------------------------------\n");
    printf("Total      : %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    if (result == 1)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

    printf("===============================\n");

    return 0;
}
