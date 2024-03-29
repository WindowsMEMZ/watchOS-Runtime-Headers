//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostStreamEvent_h
#define SignpostStreamEvent_h
@import Foundation;

#include "SignpostEvent.h"

@protocol OS_dispatch_source;

@interface SignpostStreamEvent : SignpostEvent {
  /* instance variables */
  unsigned long long _totalFrameCount;
}

@property (nonatomic) unsigned long long _totalFrameCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) unsigned long long serialNumber;

/* class methods */
+ (id)serializationTypeNumber;

/* instance methods */
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)readable shouldRedact:(BOOL)redact;
- (id)initWithDictionary:(id)dictionary;
- (BOOL)_hasTotalSkyLightCompositeCount;
@end

#endif /* SignpostStreamEvent_h */
