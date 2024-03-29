//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFConversationTransaction_h
#define AFConversationTransaction_h
@import Foundation;

@class NSArray;

@interface AFConversationTransaction : NSObject

@property (readonly, nonatomic) NSArray *updatedItemIndexPaths;
@property (readonly, nonatomic) NSArray *insertedItemIndexPaths;
@property (readonly, nonatomic) NSArray *presentationStateChangedItemIndexPaths;

/* instance methods */
- (id)initWithUpdatedItemIndexPaths:(id)paths insertedItemIndexPaths:(id)paths presentationStateChangedItemIndexPaths:(id)paths;
@end

#endif /* AFConversationTransaction_h */
