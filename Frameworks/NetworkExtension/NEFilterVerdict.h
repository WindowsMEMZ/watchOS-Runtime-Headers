//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEFilterVerdict_h
#define NEFilterVerdict_h
@import Foundation;

#include "NEPrettyDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NEFilterVerdict : NSObject<NEPrettyDescription, NSSecureCoding, NSCopying> {
  /* instance variables */
  BOOL _remediate;
  BOOL _urlAppendString;
  BOOL _pause;
  NSString *_remediationURLMapKey;
  NSString *_remediationButtonTextMapKey;
  NSString *_urlAppendStringMapKey;
}

@property (readonly) long long filterAction;
@property BOOL needRules;
@property BOOL drop;
@property BOOL shouldReport;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (id)description;
- (id)initWithDrop:(BOOL)drop remediate:(BOOL)remediate;
@end

#endif /* NEFilterVerdict_h */
