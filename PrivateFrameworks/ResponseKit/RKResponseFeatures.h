//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKResponseFeatures_h
#define RKResponseFeatures_h
@import Foundation;

@class NSString;

@interface RKResponseFeatures : NSObject

@property (readonly) NSString *response;
@property (readonly) int count;
@property (readonly) double numOfElapsedDays;
@property (readonly) double normalizedSourceAppCount;
@property (readonly) double normalizedSourceNotificationCount;
@property (readonly) double normalizedInputMethodCannedCount;
@property (readonly) double normalizedInputMethodScribbleCount;
@property (readonly) double normalizedInputMethodDictationCount;
@property (readonly) unsigned long long responseLength;
@property (readonly) int sameRecipientCount;

/* instance methods */
- (id)initWithFeatures:(id)features count:(int)count numOfElapsedDays:(double)days sourceAppCount:(double)count sourceNotificationCount:(double)count inputSourceCannedCount:(double)count inputSourceScribbleCount:(double)count inputSourceDictationCount:(double)count responseLength:(unsigned long long)length sameRecipientCount:(int)count;
@end

#endif /* RKResponseFeatures_h */
