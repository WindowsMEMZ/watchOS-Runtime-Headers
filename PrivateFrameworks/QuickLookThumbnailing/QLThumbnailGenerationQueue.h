//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLThumbnailGenerationQueue_h
#define QLThumbnailGenerationQueue_h
@import Foundation;

@class NSMutableDictionary, NSOperationQueue;

@interface QLThumbnailGenerationQueue : NSObject

@property (retain) NSMutableDictionary *queuedURLs;
@property (retain) NSOperationQueue *queue;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)url atBackgroundPriority:(BOOL)priority completionHandler:(id /* block */)handler;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)url;
@end

#endif /* QLThumbnailGenerationQueue_h */
