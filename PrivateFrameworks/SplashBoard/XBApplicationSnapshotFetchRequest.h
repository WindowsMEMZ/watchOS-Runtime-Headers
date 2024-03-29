//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 297.1.0.0.0
//
#ifndef XBApplicationSnapshotFetchRequest_h
#define XBApplicationSnapshotFetchRequest_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "XBApplicationSnapshotGenerationContext.h"
#include "XBApplicationSnapshotPredicate.h"

@class NSArray, NSString;

@interface XBApplicationSnapshotFetchRequest : NSObject<BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSArray *NSSortDescriptors;
@property (retain, nonatomic) XBApplicationSnapshotPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* XBApplicationSnapshotFetchRequest_h */
