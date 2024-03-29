//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef HVQueueBookmark_h
#define HVQueueBookmark_h
@import Foundation;

@class NSNumber;
@protocol BMBookmark;

@interface HVQueueBookmark : NSObject

@property (nonatomic) unsigned char los;
@property (retain, nonatomic) NSObject<BMBookmark> *pastBookmark;
@property (copy, nonatomic) NSNumber *futureCutoff;
@property (retain, nonatomic) NSObject<BMBookmark> *futureBookmark;

/* instance methods */
- (void)reset;
- (id)jsonDict;
@end

#endif /* HVQueueBookmark_h */
