//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADFilter_h
#define CADFilter_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface CADFilter : NSObject<NSSecureCoding>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)validate;
- (BOOL)applicableToEntityType:(int)type;
- (id)extendWhereClause:(id)clause usingOperation:(long long)operation withValues:(id)values andTypes:(id)types;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CADFilter_h */
