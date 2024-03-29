//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudFeedCommentsEntry_h
#define PLCloudFeedCommentsEntry_h
@import Foundation;

#include "PLCloudFeedEntry.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (retain, @dynamic, nonatomic) NSString *entryCloudAssetGUID;
@property (retain, @dynamic, nonatomic) NSOrderedSet *entryLikeComments;
@property (retain, @dynamic, nonatomic) NSOrderedSet *entryComments;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryLikeComments;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryComments;

/* class methods */
+ (id)entityName;

/* instance methods */
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)library;
@end

#endif /* PLCloudFeedCommentsEntry_h */
