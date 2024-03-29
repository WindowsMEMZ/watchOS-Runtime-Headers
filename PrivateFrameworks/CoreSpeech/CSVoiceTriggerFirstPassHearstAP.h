//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceTriggerFirstPassHearstAP_h
#define CSVoiceTriggerFirstPassHearstAP_h
@import Foundation;

#include "CSOpportuneSpeakEventMonitorDelegate-Protocol.h"
#include "CSVoiceTriggerDelegate-Protocol.h"

@class NSString;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject<CSOpportuneSpeakEventMonitorDelegate>

@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)start;
- (void)setAsset:(id)asset;
@end

#endif /* CSVoiceTriggerFirstPassHearstAP_h */
