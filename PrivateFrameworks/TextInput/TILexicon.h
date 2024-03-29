//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TILexicon_h
#define TILexicon_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface TILexicon : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSArray *entries;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)lexiconWithEntries:(id)entries;
+ (void)requestLexiconFromBundlePath:(id)path completionHandler:(id /* block */)handler;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TILexicon_h */
