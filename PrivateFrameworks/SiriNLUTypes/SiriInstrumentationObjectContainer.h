//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SiriInstrumentationObjectContainer_h
#define SiriInstrumentationObjectContainer_h
@import Foundation;

@class NSMutableArray, SISchemaInstrumentationMessage;

@interface SiriInstrumentationObjectContainer : NSObject

@property (retain, nonatomic) SISchemaInstrumentationMessage *mainItem;
@property (retain, nonatomic) NSMutableArray *tier1Events;

/* instance methods */
- (void)addTier1Event:(id)event;
@end

#endif /* SiriInstrumentationObjectContainer_h */
