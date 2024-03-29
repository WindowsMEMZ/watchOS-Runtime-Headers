//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion_h
#define BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion_h
@import Foundation;

#include "BMEventBase.h"
#include "BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier *modelIdentifier;
@property (readonly, nonatomic) NSString *transportBundleId;
@property (readonly, nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
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
- (id)initWithIdentifier:(id)identifier model:(id)model modelIdentifier:(id)identifier transportBundleId:(id)id rank:(id)rank score:(id)score;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion_h */
