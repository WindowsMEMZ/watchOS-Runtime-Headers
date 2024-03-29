//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKAttribute_h
#define SKAttribute_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol {basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}};

@interface SKAttribute : NSObject<NSSecureCoding> {
  /* instance variables */
  struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } _nameString;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)attributeWithName:(id)name type:(long long)type;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToAttribute:(id)attribute;
- (id)initWithName:(id)name type:(long long)type;
- (const void *)getNameString;
@end

#endif /* SKAttribute_h */
