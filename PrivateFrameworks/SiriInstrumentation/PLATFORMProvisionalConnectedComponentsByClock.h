//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PLATFORMProvisionalConnectedComponentsByClock_h
#define PLATFORMProvisionalConnectedComponentsByClock_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData;

@interface PLATFORMProvisionalConnectedComponentsByClock : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *connectedComponents;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (void)clearConnectedComponents;
- (void)deleteConnectedComponents;
- (void)addConnectedComponents:(id)components;
- (unsigned long long)connectedComponentsCount;
- (id)connectedComponentsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PLATFORMProvisionalConnectedComponentsByClock_h */
