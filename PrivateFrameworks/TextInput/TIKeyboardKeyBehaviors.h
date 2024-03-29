//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardKeyBehaviors_h
#define TIKeyboardKeyBehaviors_h
@import Foundation;

@interface TIKeyboardKeyBehaviors : NSObject

@property (nonatomic) unsigned long long spaceKeyBehavior;
@property (nonatomic) unsigned long long returnKeyBehavior;
@property (nonatomic) unsigned long long tabKeyBehavior;

/* class methods */
+ (id)behaviorForSpaceKey:(unsigned long long)key forReturnKey:(unsigned long long)key;
+ (id)behaviorForSpaceKey:(unsigned long long)key forReturnKey:(unsigned long long)key forTabKey:(unsigned long long)key;

/* instance methods */
- (id)initWithSpaceKeyBehavior:(unsigned long long)behavior returnKeyBehavior:(unsigned long long)behavior tabKeyBehavior:(unsigned long long)behavior;
@end

#endif /* TIKeyboardKeyBehaviors_h */
