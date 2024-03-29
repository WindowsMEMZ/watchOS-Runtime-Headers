//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef _REMChangeUniversalToken_h
#define _REMChangeUniversalToken_h
@import Foundation;

#include "REMChangeToken.h"

@interface _REMChangeUniversalToken : REMChangeToken
/* class methods */
+ (id)universalToken;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (long long)compareToken:(id)token error:(id *)error;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isUniversal;
@end

#endif /* _REMChangeUniversalToken_h */
