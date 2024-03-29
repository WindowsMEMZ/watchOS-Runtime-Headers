//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFConcreteTimeTriggerBuilderLikeObject_Protocol_h
#define HFConcreteTimeTriggerBuilderLikeObject_Protocol_h
@import Foundation;

@protocol HFConcreteTimeTriggerBuilderLikeObject <NSObject>

@property (readonly, weak, nonatomic) NSString *name;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;

/* instance methods */
- (void)triggerEnabledStateDidChange:(BOOL)change;
- (void)copyCurrentStateFromTriggerBuilder:(id)builder;
@end

#endif /* HFConcreteTimeTriggerBuilderLikeObject_Protocol_h */
