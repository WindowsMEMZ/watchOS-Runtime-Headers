//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef DASearchQueryConsumer_Protocol_h
#define DASearchQueryConsumer_Protocol_h
@import Foundation;

@protocol DASearchQueryConsumer 
/* instance methods */
- (void)searchQuery:(id)query returnedResults:(id)results;
- (void)searchQuery:(id)query finishedWithError:(id)error;
@optional
/* instance methods */
- (void)searchQuery:(id)query returnedTotalCount:(id)count;
@end

#endif /* DASearchQueryConsumer_Protocol_h */
