//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSiriSelfTriggerSuppression_h
#define BMSiriSelfTriggerSuppression_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMSiriSelfTriggerSuppression : BMEventBase<BMStoreData>

@property (readonly, nonatomic) unsigned int numSelfTriggersDetectedDuringEvent;
@property (nonatomic) BOOL hasNumSelfTriggersDetectedDuringEvent;
@property (readonly, nonatomic) double durationOfSelfTriggerEventInSec;
@property (nonatomic) BOOL hasDurationOfSelfTriggerEventInSec;
@property (readonly, nonatomic) int audioSource;
@property (readonly, nonatomic) BOOL isBluetoothSpeakerActive;
@property (nonatomic) BOOL hasIsBluetoothSpeakerActive;
@property (readonly, nonatomic) BOOL isBuiltInSpeakerActive;
@property (nonatomic) BOOL hasIsBuiltInSpeakerActive;
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
- (id)initWithNumSelfTriggersDetectedDuringEvent:(id)event durationOfSelfTriggerEventInSec:(id)sec audioSource:(int)source isBluetoothSpeakerActive:(id)active isBuiltInSpeakerActive:(id)active;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSiriSelfTriggerSuppression_h */
