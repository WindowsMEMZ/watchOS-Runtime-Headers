//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEFilterDataVerdict_h
#define NEFilterDataVerdict_h
@import Foundation;

#include "NEFilterVerdict.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface NEFilterDataVerdict : NEFilterVerdict<NSSecureCoding, NSCopying>

@property unsigned long long passBytes;
@property unsigned long long peekBytes;
@property long long statisticsReportFrequency;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)needRulesVerdict;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)key remediationButtonTextMapKey:(id)key;
+ (id)dataVerdictWithPassBytes:(unsigned long long)bytes peekBytes:(unsigned long long)bytes;
+ (id)pauseVerdict;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (long long)filterAction;
@end

#endif /* NEFilterDataVerdict_h */
