//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NFEventManager_h
#define NFEventManager_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;

@interface NFEventManager : NSObject

@property (readonly, nonatomic) NSMutableSet *events;
@property (readonly, nonatomic) NSMutableDictionary *triggers;

/* instance methods */
- (id)init;
- (void)fireEvent:(id)event;
- (void)triggerOnceWhenAllEventsHaveOccurred:(id)occurred block:(id /* block */)block;
- (void)triggerAlwaysWhenAllEventsHaveOccurred:(id)occurred block:(id /* block */)block;
- (void)triggerOnceWhenAnyEventHasOccurred:(id)occurred block:(id /* block */)block;
- (void)triggerOnEvent:(id)event block:(id /* block */)block;
- (void)triggerOnAnyEvent:(id)event block:(id /* block */)block;
- (void)attemptTriggersForCurrentEvent:(id)event;
- (void)handleOnceTrigger:(id)trigger event:(id)event;
- (void)handleAlwaysTrigger:(id)trigger event:(id)event;
@end

#endif /* NFEventManager_h */
