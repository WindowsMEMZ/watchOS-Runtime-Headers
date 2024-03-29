//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SFObjCType_h
#define SFObjCType_h
@import Foundation;

@class NSString;

@interface SFObjCType : NSObject

@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSString *encoding;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL number;
@property (readonly, nonatomic) BOOL integerNumber;
@property (readonly, nonatomic) BOOL floatingPointNumber;
@property (readonly, nonatomic) BOOL object;

/* class methods */
+ (id)typeForEncoding:(const char *)encoding;
+ (id)typeForValue:(id)value;

/* instance methods */
- (id)initWithCode:(long long)code encoding:(id)encoding name:(id)name className:(id)name size:(unsigned long long)size flags:(unsigned long long)flags;
- (BOOL)isNumber;
- (BOOL)isIntegerNumber;
- (BOOL)isFloatingPointNumber;
- (BOOL)isObject;
- (id)objectWithBytes:(const void *)bytes;
- (void)getBytes:(void *)bytes forObject:(id)object;
@end

#endif /* SFObjCType_h */
