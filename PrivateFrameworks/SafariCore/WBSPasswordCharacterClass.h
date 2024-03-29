//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPasswordCharacterClass_h
#define WBSPasswordCharacterClass_h
@import Foundation;

@class NSString;

@interface WBSPasswordCharacterClass : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

/* class methods */
+ (id)customCharacterClassWithValue:(id)value;
+ (id)namedCharacterClassWithType:(long long)type;
+ (id)asciiPrintableCharacterClass;
+ (id)digitCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)specialCharacterClass;
+ (id)unicodeCharacterClass;

/* instance methods */
- (id)initWithType:(long long)type value:(id)value;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* WBSPasswordCharacterClass_h */
