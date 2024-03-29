//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMDSLTableTransform_h
#define BMDSLTableTransform_h
@import Foundation;

#include "BMDSLBaseCodable.h"
#include "BMDSLRowTransform-Protocol.h"

@class BMTableSchema, NSString;

@interface BMDSLTableTransform : BMDSLBaseCodable

@property (retain, nonatomic) NSObject<BMDSLRowTransform> *rowTransform;
@property (retain, nonatomic) BMTableSchema *schema;
@property (readonly, copy, nonatomic) NSString *tableName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRowTransform:(id)transform schema:(id)schema tableName:(id)name name:(id)name version:(unsigned int)version;
- (id)initWithRowTransform:(id)transform schema:(id)schema tableName:(id)name;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BMDSLTableTransform_h */
