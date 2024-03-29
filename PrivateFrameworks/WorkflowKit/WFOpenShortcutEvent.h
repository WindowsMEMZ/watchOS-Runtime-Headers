//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOpenShortcutEvent_h
#define WFOpenShortcutEvent_h
@import Foundation;

#include "WFEvent.h"

@class NSString;

@interface WFOpenShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (nonatomic) unsigned int actionCount;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;

/* class methods */
+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

/* instance methods */
@end

#endif /* WFOpenShortcutEvent_h */
