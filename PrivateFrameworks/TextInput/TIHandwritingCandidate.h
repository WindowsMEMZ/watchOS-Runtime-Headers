//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIHandwritingCandidate_h
#define TIHandwritingCandidate_h
@import Foundation;

#include "TIKeyboardCandidateSingle.h"

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle

@property (readonly, nonatomic) unsigned long long uniqueID;
@property (readonly, nonatomic) unsigned long long completionUniqueID;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (int)type;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCandidate:(id)candidate forInput:(id)input uniqueID:(unsigned long long)id completionUniqueID:(unsigned long long)id;
- (BOOL)isCompletionCandidate;
- (BOOL)isInlineCompletionCandidate;
- (id)initWithCandidateResultSetCoder:(id)coder;
- (void)encodeWithCandidateResultSetCoder:(id)coder;
@end

#endif /* TIHandwritingCandidate_h */
