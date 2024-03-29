//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMUserFocusInferredMode_h
#define BMUserFocusInferredMode_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSDate, NSString;

@interface BMUserFocusInferredMode : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_absoluteTimestamp;
  double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) int origin;
@property (readonly, nonatomic) NSString *originBundleID;
@property (readonly, nonatomic) BOOL isAutomationEnabled;
@property (nonatomic) BOOL hasIsAutomationEnabled;
@property (readonly, nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasIsStart;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *originAnchorType;
@property (readonly, nonatomic) unsigned long long uiLocation;
@property (nonatomic) BOOL hasUiLocation;
@property (readonly, nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (readonly, nonatomic) NSArray *serializedTriggers;
@property (readonly, nonatomic) int modeType;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (nonatomic) BOOL hasShouldSuggestTriggers;
@property (readonly, nonatomic) NSString *userModeName;
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
- (id)initWithAbsoluteTimestamp:(id)timestamp modeIdentifier:(id)identifier origin:(int)origin originBundleID:(id)id isAutomationEnabled:(id)enabled isStart:(id)start uuid:(id)uuid originAnchorType:(id)type uiLocation:(id)location confidenceScore:(id)score serializedTriggers:(id)triggers modeType:(int)type shouldSuggestTriggers:(id)triggers userModeName:(id)name;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_serializedTriggersJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMUserFocusInferredMode_h */
