//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLPullSessionScopesAcknowledgement_h
#define CPLPullSessionScopesAcknowledgement_h
@import Foundation;

#include "CPLChangeSessionUpdate.h"
#include "CPLChangeBatch.h"

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *scopesChangeBatch;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStore:(id)store scopesChangeBatch:(id)batch;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)applyToStore:(id)store error:(id *)error;
- (BOOL)discardFromStore:(id)store error:(id *)error;
- (id)storageForStatusInStore:(id)store;
- (id)statusDescription;
@end

#endif /* CPLPullSessionScopesAcknowledgement_h */
