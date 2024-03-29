//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSBannerTracker_h
#define WBSBannerTracker_h
@import Foundation;

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WBSBannerTracker : NSObject {
  /* instance variables */
  NSMutableDictionary *_blockedBanners;
  NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) long long basis;

/* class methods */
+ (id)sharedTracker;

/* instance methods */
- (id)init;
- (void)load;
- (void)clear;
- (id)_filePath;
- (void)_saveOnInteralQueue;
- (void)isBannerBlockedForIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)blockBannerForIdentifier:(id)identifier;
- (void)unblockBannerForIdentifier:(id)identifier;
- (BOOL)shouldBlockForIdentifier:(id)identifier withDismissCount:(unsigned long long)count;
@end

#endif /* WBSBannerTracker_h */
