//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDescriptionBuilder_h
#define UIDescriptionBuilder_h
@import Foundation;

@class NSMutableString, NSObject, NSString;

@interface UIDescriptionBuilder : NSObject

@property (nonatomic) NSObject *object;
@property (retain, nonatomic) NSMutableString *descriptionString;
@property (copy, nonatomic) NSString *separator;
@property (readonly, nonatomic) NSString *string;

/* class methods */
+ (id)descriptionBuilderWithObject:(id)object;
+ (id)descriptionForObject:(id)object namesAndObjects:(id)objects;
+ (id)descriptionForObject:(id)object keys:(id)keys;

/* instance methods */
- (id)initWithObject:(id)object;
- (id)appendObject:(id)object withName:(id)name;
- (id)appendName:(id)name object:(id)object;
- (id)appendName:(id)name object:(id)object usingLightweightDescription:(BOOL)description;
- (id)appendName:(id)name boolValue:(BOOL)value;
- (id)appendName:(id)name integerValue:(long long)value;
- (id)appendName:(id)name unsignedInteger:(unsigned long long)integer;
- (id)appendName:(id)name intValue:(int)value;
- (id)appendName:(id)name doubleValue:(double)value;
- (id)appendName:(id)name pointerValue:(void *)value;
- (id)appendName:(id)name selector:(SEL)selector;
- (id)appendNamesAndObjects:(id)objects;
- (id)appendKey:(id)key;
- (id)appendKeys:(id)keys;
- (void)tryAppendKey:(id)key;
@end

#endif /* UIDescriptionBuilder_h */
