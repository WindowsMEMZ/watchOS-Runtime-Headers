//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMMLSEPeopleSuggestionsMetricsStore_h
#define BMMLSEPeopleSuggestionsMetricsStore_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMMLSEPeopleSuggestionsMetricsStore : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) double reciprocalRank;
@property (nonatomic) BOOL hasReciprocalRank;
@property (readonly, nonatomic) unsigned int reciprocalRankDefinitionVersion;
@property (nonatomic) BOOL hasReciprocalRankDefinitionVersion;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithEventIdentifier:(id)identifier model:(id)model reciprocalRank:(id)rank reciprocalRankDefinitionVersion:(id)version;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMMLSEPeopleSuggestionsMetricsStore_h */
