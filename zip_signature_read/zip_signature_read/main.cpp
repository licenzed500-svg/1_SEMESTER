

#include <iostream>
#include <fstream>
#include <vector>


struct Zip
{
    //BIAS
    const short SIGNATURE_BIAS = 0;
    const short MIN_VER_BIAS = 4;
    const short BYTE_FLAG_BIAS = 6;
    const short COMPRESSION_METHOD_BIAS = 8;
    const short LAST_MODIFICATION_TIME_BIAS = 10;
    const short LAST_MODIFICATION_DATE_BIAS = 12;
    const short CRC32_BIAS = 14;
    const short COMPRESSED_SIZE_BIAS = 18;
    const short SIZE_WITHOUT_COMPRESSION_BIAS = 22;
    const short FILE_NAME_LENGTH_BIAS = 26;
    const short ANOTHER_FIELD_LENGTH_BIAS = 28;
    
    
    //FIELD SIZE
    const short SIGNATURE_SIZE = 4;
    const short MIN_VER_SIZE = 2;
    const short BYTE_FLAG_SIZE = 2;
    const short COMPRESSION_METHOD_SIZE = 2;
    const short LAST_MODIFICATION_TIME_SIZE = 2;
    const short LAST_MODIFICATION_DATE_SIZE = 2;
    const short CRC32_SIZE = 4;
    const short COMPRESSED_SIZE_FIELD_SIZE = 4;
    const short SIZE_WITHOUT_COMPRESSION_SIZE = 4;
    const short FILE_NAME_SIZE = 2;
    const short ANOTHER_FIELD_SIZE = 2;
    
    //ARRAYS
    char signature[4];
    char min_ver[2];
    char byte_flag[2];
    char compression_method[2];
    char last_modification_time[2];
    char last_modification_date[2];
    char CRC32[4];
    char compressed_size[4];
    char size_without_compression[4];
    char file_name[2];
    char another_field_length[2];
    std::vector<char> _file_name;  // We will not read it
    std::vector<char> _another_field; // We will not read it
};


void read_zip_metadata(Zip *zip, char *buffer)
{
    //reading signatue
    for(short i = 0; i<zip->SIGNATURE_SIZE; i++)
    {
        zip->signature[i] = buffer[i];
        std::cout << "\n" << zip->signature[i];
    }
    
    //reading minimal version
    for(short i = 0; i<zip->MIN_VER_SIZE; i++)
    {
        zip->min_ver[i] = buffer[i+zip->MIN_VER_BIAS];
    }
    
    //reading byte flag
    for(short i = 0; i<zip->BYTE_FLAG_SIZE; i++)
    {
        zip->byte_flag[i] = buffer[i+zip->BYTE_FLAG_BIAS];
    }
    
    //reading compression method
    for(short i = 0; i<zip->COMPRESSION_METHOD_SIZE; i++)
    {
        zip->compression_method[i] = buffer[i+zip->COMPRESSION_METHOD_BIAS];
    }
    
    //reading last modification time
    for(short i = 0; i<zip->LAST_MODIFICATION_TIME_SIZE; i++)
    {
        zip->last_modification_time[i] = buffer[i+zip->LAST_MODIFICATION_TIME_BIAS];
    }
    
    //reading last modification date
    for(short i = 0; i<zip->LAST_MODIFICATION_DATE_SIZE; i++)
    {
        zip->last_modification_date[i] = buffer[i+zip->LAST_MODIFICATION_DATE_BIAS];
    }
    
    //reading CRC32
    for(short i = 0; i<zip->CRC32_SIZE; i++)
    {
        zip->CRC32[i] = buffer[i+zip->CRC32_BIAS];
    }
    
    //reading compressed size
    for(short i = 0; i<zip->COMPRESSED_SIZE_FIELD_SIZE; i++)
    {
        zip->compressed_size[i] = buffer[i+zip->COMPRESSED_SIZE_BIAS];
    }
    
    //reading size without compression
    for(short i = 0; i<zip->SIZE_WITHOUT_COMPRESSION_SIZE; i++)
    {
        zip->size_without_compression[i] = buffer[i+zip->SIZE_WITHOUT_COMPRESSION_BIAS];
    }
    
    //reading file name
    for(short i = 0; i<zip->FILE_NAME_SIZE; i++)
    {
        zip->file_name[i] = buffer[i+zip->FILE_NAME_LENGTH_BIAS];
    }
    
    //reading another field length
    for(short i = 0; i<zip->ANOTHER_FIELD_SIZE; i++)
    {
        zip->another_field_length[i] = buffer[i+zip->ANOTHER_FIELD_LENGTH_BIAS];
    }
    
    
}



int main() {
    Zip zip;
    const short BUFFER_SIZE = 128;
    
    char buffer[128];
    
    std::ifstream file("Empty.zip", std::ios::binary);
    if(file.is_open())
    {
        file.read(buffer, BUFFER_SIZE);
        read_zip_metadata(&zip, buffer);
    }
}
