//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 18.1.0.0.0
//
#ifndef TLTransliteratorCandidate_h
#define TLTransliteratorCandidate_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface TLTransliteratorCandidate : NSObject<NSCopying>

@property (readonly, copy) NSString *inputWord;
@property (readonly, copy) NSString *transliteratedWord;
@property (readonly) double lmScore;
@property (readonly) double seq2seqScore;
@property (readonly) double totalScore;
@property (readonly) BOOL isExtensionCandidate;
@property (readonly) long long type;

/* class methods */
+ (id)createWithCompositeTransliteratorCandidate:(const void *)candidate;

/* instance methods */
- (id)initWithInputWord:(id)word transliteratedWord:(id)word lmScore:(double)score seq2seqScore:(double)score totalScore:(double)score isExtensionCandidate:(BOOL)candidate type:(long long)type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* TLTransliteratorCandidate_h */
