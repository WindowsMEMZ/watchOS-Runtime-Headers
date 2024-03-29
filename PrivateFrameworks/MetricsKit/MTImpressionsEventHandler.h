//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTImpressionsEventHandler_h
#define MTImpressionsEventHandler_h
@import Foundation;

#include "MTImpressionableEventHandler.h"

@protocol MTImpressionsEventHandlerDelegate;

@interface MTImpressionsEventHandler : MTImpressionableEventHandler

@property (weak, @dynamic, nonatomic) NSObject<MTImpressionsEventHandlerDelegate> *delegate;

/* instance methods */
- (id)knownFields;
- (id)eventType;
- (id)eventVersion:(id)version;
- (id)xpViewableThreshold:(id)threshold;
@end

#endif /* MTImpressionsEventHandler_h */
