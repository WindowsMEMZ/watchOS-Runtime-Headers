//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 207.0.0.0.0
//
#ifndef WCContentIndex_h
#define WCContentIndex_h
@import Foundation;

#include "NSFilePresenter-Protocol.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSSet, NSString, NSURL;

@interface WCContentIndex : NSObject<NSFilePresenter>

@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSURL *itemURL;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *cachedContentIndex;
@property (retain, nonatomic) id lastGenerationIdentifier;
@property (readonly, copy, nonatomic) NSArray *index;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainingFolder:(id)folder;
- (void)invalidate;
- (void)loadContentIfNecessary;
- (BOOL)isEqual:(id)equal;
- (void)addContentIdentifier:(id)identifier;
- (void)removeContentIdentifier:(id)identifier;
- (void)commit;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)url;
@end

#endif /* WCContentIndex_h */
