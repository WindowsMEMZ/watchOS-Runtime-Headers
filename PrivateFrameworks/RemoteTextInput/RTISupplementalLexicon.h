//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTISupplementalLexicon_h
#define RTISupplementalLexicon_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, TISupplementalLexicon;

@interface RTISupplementalLexicon : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSDictionary *iconForIdentifier;
@property (readonly, nonatomic) TISupplementalLexicon *lexicon;
@property (readonly, nonatomic) unsigned long long identifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTISupplementalLexicon:(id)lexicon iconForIdentifier:(id)identifier;
- (id)initWithTISupplementalLexicon:(id)lexicon iconProvider:(id /* block */)provider;
- (void)enumerateSupplementalItems:(id /* block */)items;
- (id)iconForIdentifier:(unsigned long long)identifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* RTISupplementalLexicon_h */
