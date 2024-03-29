//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHCodableTemplateArray_h
#define ACHCodableTemplateArray_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface ACHCodableTemplateArray : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *templates;

/* class methods */
+ (Class)templatesType;

/* instance methods */
- (id)initWithSerializedData:(id)data error:(id *)error;
- (id)initWithCodableTemplates:(id)templates;
- (void)clearTemplates;
- (void)addTemplates:(id)templates;
- (unsigned long long)templatesCount;
- (id)templatesAtIndex:(unsigned long long)index;
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

#endif /* ACHCodableTemplateArray_h */
