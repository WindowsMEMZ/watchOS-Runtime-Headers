//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKConferenceInvalidationRecord_h
#define EKConferenceInvalidationRecord_h
@import Foundation;

@class NSMutableArray, NSMutableSet, NSURL;

@interface EKConferenceInvalidationRecord : NSObject

@property (retain, nonatomic) NSURL *validURL;
@property (retain, nonatomic) NSMutableSet *replacementForURLs;
@property (retain, nonatomic) NSMutableArray *waitingCompletionHandlers;

/* instance methods */
- (void)generateNewValidURLForOriginalURL:(id)url;
- (void)finishWithURL:(id)url error:(id)error;
@end

#endif /* EKConferenceInvalidationRecord_h */
