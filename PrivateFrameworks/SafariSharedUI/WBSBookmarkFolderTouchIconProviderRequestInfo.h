//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSBookmarkFolderTouchIconProviderRequestInfo_h
#define WBSBookmarkFolderTouchIconProviderRequestInfo_h
@import Foundation;

@class NSArray, NSMutableArray, NSSet;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject

@property (copy, nonatomic) NSSet *subrequestTokens;
@property (readonly, copy, nonatomic) NSArray *thumbnailImages;
@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (nonatomic) BOOL hasScheduledCoalescedUpdate;

/* instance methods */
- (id)init;
- (void)setThumbnailImage:(id)image atIndex:(unsigned long long)index;
- (void)setBackgroundColor:(id)color atIndex:(unsigned long long)index;
@end

#endif /* WBSBookmarkFolderTouchIconProviderRequestInfo_h */
