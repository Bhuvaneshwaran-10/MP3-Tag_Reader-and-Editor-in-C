

/*
                                --- Mp3 Tag Reader and Editor ---

     Name : Bhuvaneshwaran P
       ID : 25036B_092
Start date: 10/01/2026
 End date : 25/01/2026

DESCRIPTION:
            The MP3 Tag Reader and Editor project is developed using the C programming language to read and modify metadata
stored in MP3 audio files. It works with ID3v2 tags, which contain information such as the title, artist, album, year, genre, and 
comments of a song. The program reads the MP3 file in binary mode and extracts specific tag frames like TIT2, TPE1, TALB, TYER, and COMM.
It allows users to view the existing metadata present in the MP3 file and also provides the functionality to edit and 
update specific tags without affecting the actual audio data. The project mainly uses file handling, command-line arguments,
structures, and string manipulation to process and modify the metadata. This project demonstrates practical concepts of binary file processing
and metadata management in C.

 */



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"

int main()
{
    FILE *fp;
    int choice;

    fp = fopen("Sample.mp3","r");

    if(fp == NULL)
    {
        printf("File Sample.mp3 not found\n");
        return 0;
    }

    char buffer[4];

    fread(buffer,1,3,fp);
    buffer[3] = '\0';

    if(strcmp(buffer,"ID3") != 0)
    {
        printf("Not a valid MP3 file\n");
        return 0;
    }

    do
    {
        printf("\n------------- MP3 TAG READER -------------\n");
        printf("1. View MP3 Tags\n");
        printf("2. Edit MP3 Tags\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                rewind(fp);         // moves pointer to beginning
                view(fp);           // view file
                break;

            case 2:
            {
                char tag_type[3];       
                char new_tag[100];

                // tag options
                printf("Enter tag option\n");
                printf("-t Title\n-a Artist\n-A Album\n-y Year\n-g Genre\n-c Comment\n");

                printf("Enter tag type: ");
                scanf("%s",tag_type);                   // enter the tag type

                printf("Enter new content: ");
                scanf(" %[^\n]",new_tag);               // enter the content to change

                edit("Sample.mp3",tag_type,new_tag);    // edit tag

                break;
            }

            case 3:
                printf("Exiting program..............\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    fclose(fp);

    return 0;
}