//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADCompoundFilter_h
#define CADCompoundFilter_h
@import Foundation;

#include "CADFilter.h"

@class NSArray;

@interface CADCompoundFilter : CADFilter

@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) long long operation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFilters:(id)filters operation:(long long)operation;
- (BOOL)validate;
- (BOOL)applicableToEntityType:(int)type;
- (id)extendWhereClause:(id)clause usingOperation:(long long)operation withValues:(id)values andTypes:(id)types;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CADCompoundFilter_h */
