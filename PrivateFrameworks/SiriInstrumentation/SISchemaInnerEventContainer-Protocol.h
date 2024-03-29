//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaInnerEventContainer_Protocol_h
#define SISchemaInnerEventContainer_Protocol_h
@import Foundation;

@protocol SISchemaInnerEventContainer 

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;

/* class methods */
+ (id)getInnerTypeStringByTag:(unsigned long long)tag;
/* instance methods */
- (unsigned long long)whichInnerEventType;
@end

#endif /* SISchemaInnerEventContainer_Protocol_h */
