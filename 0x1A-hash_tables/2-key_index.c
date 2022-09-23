#include "hash_tables.h"

/**
 * key_index - gives out the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);
    return (hash % size);
}
