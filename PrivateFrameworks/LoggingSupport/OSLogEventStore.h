//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogEventStore_h
#define OSLogEventStore_h
@import Foundation;

@class NSArray, NSURL;

@interface OSLogEventStore : NSObject {
  /* instance variables */
  NSURL *_archiveURL;
  NSArray *_relativeFilePaths;
  id /* block */ _progressHandler;
  id /* block */ _upgradeHandler;
}

@property (retain, nonatomic) NSURL *_archiveURL;
@property (retain, nonatomic) NSArray *_relativeFilePaths;
@property (copy, nonatomic) id /* block */ _progressHandler;
@property (copy, nonatomic) id /* block */ _upgradeHandler;

/* class methods */
+ (id)localStore;
+ (id)storeWithArchiveURL:(id)url;
+ (id)storeWithFileURL:(id)url;
+ (id)storeWithArchiveURL:(id)url relativePaths:(id)paths;

/* instance methods */
- (id)initWithArchiveURL:(id)url;
- (id)initWithArchiveURL:(id)url relativePaths:(id)paths;
- (void)setProgressHandler:(id /* block */)handler;
- (void)setUpgradeConfirmationHandler:(id /* block */)handler;
- (void)prepareWithCompletionHandler:(id /* block */)handler;
@end

#endif /* OSLogEventStore_h */
