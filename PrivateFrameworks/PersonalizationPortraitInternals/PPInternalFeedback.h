//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPInternalFeedback_h
#define PPInternalFeedback_h
@import Foundation;

#include "PPBaseFeedback.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface PPInternalFeedback : PPBaseFeedback<BMStoreData>

@property (nonatomic) unsigned char storeType;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)fromBaseFeedback:(id)feedback storeType:(unsigned char)type;

/* instance methods */
- (id)initWithFeedbackItems:(id)items timestamp:(id)timestamp clientIdentifier:(id)identifier clientBundleId:(id)id mappingId:(id)id;
- (id)initWithFeedbackItems:(id)items timestamp:(id)timestamp clientIdentifier:(id)identifier clientBundleId:(id)id mappingId:(id)id storeType:(unsigned char)type build:(id)build;
- (id)serialize;
- (id)json;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PPInternalFeedback_h */
