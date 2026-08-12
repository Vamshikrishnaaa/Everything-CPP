#include <stdio.h>
#include <string.h>

typedef struct{
    int flight_number;
    char destination[50];
    int count;
}Flight;

/* Structure Definition */

/* Function Prototypes */
void input_flights(int n, Flight flights[n]);
int search_flights(int n, Flight flights[n], char destination[], int result[]);
void display(int count, int result[], Flight flights[]);

int main()
{
    char destination[50];
    int n=4; /* number of flights */
    int result[n];
    int count;
    Flight flights[n];

    input_flights(n, flights);   // added missing call

    printf("\nEnter destination to search: ");
    scanf("%s", destination);

    count = search_flights(n, flights, destination, result);
    display(count, result, flights);

    return 0;
}

/* Function to input flight details */
void input_flights(int n, Flight flights[n])
{
    for(int i=0; i<n; i++)
    {
        printf("\nEnter details of flight %d\n", i+1);

        printf("Enter flight number: ");
        scanf("%d", &flights[i].flight_number);


        printf("Enter destination: ");
        scanf("%s", flights[i].destination);

        printf("Enter available seats: ");
        scanf("%d", &flights[i].count);
    }
}

/* Function to search flights */
int search_flights(int n, Flight flights[n], char destination[], int result[])
{
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(strcmp(flights[i].destination, destination)==0)
        {
            result[count] = i;
            count++;
        }
    }
    return count;
}

/* Function to display result */
void display(int count, int result[], Flight flights[])
{
    if(count==0)
    {
        printf("No flight available to the given destination\n");
    }
    else
    {
        printf("Flights available:\n");
        for(int i=0; i<count; i++)
        {
            printf("Flight Number: %d\n", flights[result[i]].flight_number);
        }
    }
}