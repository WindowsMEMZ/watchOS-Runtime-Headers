//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMMutableCRMergeableStringDocument_h
#define REMMutableCRMergeableStringDocument_h
@import Foundation;

#include "REMReplicaIDHelper.h"
#include "REMReplicaIDHelperOwner-Protocol.h"
#include "REMReplicaIDSource.h"
#include "REMReplicaManagerProviding-Protocol.h"
#include "REMTTHashtagHosting-Protocol.h"
#include "TTMergeableAttributedString.h"
#include "TTMergeableStringVersionedDocument.h"

@class NSString;

@interface REMMutableCRMergeableStringDocument : NSObject<REMTTHashtagHosting, REMReplicaIDHelperOwner>

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper;
@property (retain, nonatomic) NSObject<REMReplicaManagerProviding> *replicaManagerProvider;
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)hashtagAtIndex:(unsigned long long)index effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (void)enumerateHashtagInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range options:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)addHashtag:(id)hashtag range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)removeHashtagInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithReplicaIDSource:(id)idsource;
- (id)initWithReplicaIDSource:(id)idsource immutableDocumentToEdit:(id)edit;
- (id)immutableDocument;
- (id)wipeAndReplaceWithString:(id)string;
- (void)_test_insertString:(id)string atIndex:(unsigned long long)index;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)uuid;
@end

#endif /* REMMutableCRMergeableStringDocument_h */
