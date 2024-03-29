//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef AWDProactiveModelFittingQuantizedSparseMatrix_h
#define AWDProactiveModelFittingQuantizedSparseMatrix_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 bucketSize; unsigned int x :1 columnLength; unsigned int x :1 minValue; unsigned int x :1 rowLength; } _has;
}

@property (readonly, nonatomic) unsigned long long columnIndicesCount;
@property (readonly, nonatomic) unsigned int * columnIndices;
@property (nonatomic) BOOL hasColumnLength;
@property (nonatomic) unsigned int columnLength;
@property (readonly, nonatomic) unsigned long long rowIndicesCount;
@property (readonly, nonatomic) unsigned int * rowIndices;
@property (nonatomic) BOOL hasRowLength;
@property (nonatomic) unsigned int rowLength;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) unsigned int * values;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) float bucketSize;

/* instance methods */
- (void)dealloc;
- (void)clearColumnIndices;
- (void)addColumnIndices:(unsigned int)indices;
- (unsigned int)columnIndicesAtIndex:(unsigned long long)index;
- (void)setColumnIndices:(unsigned int *)indices count:(unsigned long long)count;
- (void)clearRowIndices;
- (void)addRowIndices:(unsigned int)indices;
- (unsigned int)rowIndicesAtIndex:(unsigned long long)index;
- (void)setRowIndices:(unsigned int *)indices count:(unsigned long long)count;
- (void)clearValues;
- (void)addValues:(unsigned int)values;
- (unsigned int)valuesAtIndex:(unsigned long long)index;
- (void)setValues:(unsigned int *)values count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* AWDProactiveModelFittingQuantizedSparseMatrix_h */
