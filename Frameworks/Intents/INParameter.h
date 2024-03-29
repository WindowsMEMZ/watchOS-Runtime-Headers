//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INParameter_h
#define INParameter_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface INParameter : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_indexesForSubKeyPaths;
}

@property (retain, nonatomic) Class parameterClass;
@property (copy, nonatomic) NSString *parameterKeyPath;
@property (retain, nonatomic) NSMutableDictionary *_indexesForSubKeyPaths;
@property (readonly, copy, nonatomic) NSString *_subscriptedKeyPath;

/* class methods */
+ (id)parameterForClass:(Class)class keyPath:(id)path;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqualToParameter:(id)parameter;
- (void)setIndex:(unsigned long long)index forSubKeyPath:(id)path;
- (unsigned long long)indexForSubKeyPath:(id)path;
- (id)_valueOfObject:(id)object forRemainingKeyPath:(id)path inFullyQualifiedKeyPath:(id)path;
- (id)_sanitizedKeyPathForKeyPath:(id)path removingSubscripts:(BOOL)subscripts;
- (void)_setIndexesForKeyPathWithSubscripts:(id)subscripts;
- (id)_parameterValueForParameterizedObject:(id)object;
- (id)parameterValue;
- (id)parameterizedObject;
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* INParameter_h */
