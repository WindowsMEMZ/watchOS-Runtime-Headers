//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFREPBRunRequestResponse_h
#define WFREPBRunRequestResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface WFREPBRunRequestResponse : PBCodable<NSCopying>

@property (retain, nonatomic) NSString *runRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *variablesDatas;
@property (retain, nonatomic) NSMutableArray *outputDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

/* class methods */
+ (Class)variablesDataType;
+ (Class)outputDataType;

/* instance methods */
- (void)clearVariablesDatas;
- (void)addVariablesData:(id)data;
- (unsigned long long)variablesDatasCount;
- (id)variablesDataAtIndex:(unsigned long long)index;
- (void)clearOutputDatas;
- (void)addOutputData:(id)data;
- (unsigned long long)outputDatasCount;
- (id)outputDataAtIndex:(unsigned long long)index;
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

#endif /* WFREPBRunRequestResponse_h */
