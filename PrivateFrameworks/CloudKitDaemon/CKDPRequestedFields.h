//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPRequestedFields_h
#define CKDPRequestedFields_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

/* class methods */
+ (Class)fieldsType;
+ (Class)listFieldType;

/* instance methods */
- (void)_CKLogToFileHandle:(id)handle atDepth:(int)depth;
- (void)clearFields;
- (void)addFields:(id)fields;
- (unsigned long long)fieldsCount;
- (id)fieldsAtIndex:(unsigned long long)index;
- (void)clearListFields;
- (void)addListField:(id)field;
- (unsigned long long)listFieldsCount;
- (id)listFieldAtIndex:(unsigned long long)index;
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

#endif /* CKDPRequestedFields_h */
