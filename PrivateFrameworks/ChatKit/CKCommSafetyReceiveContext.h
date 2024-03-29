//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKCommSafetyReceiveContext_h
#define CKCommSafetyReceiveContext_h
@import Foundation;

@class NSIndexPath;

@interface CKCommSafetyReceiveContext : NSObject

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL shouldTargetAssociatedMessages;

/* class methods */
+ (id)contextKey;
+ (id)contextWithIndexPath:(id)path;
+ (id)contextWithIndexPath:(id)path shouldTargetAssociatedMessages:(BOOL)messages;

/* instance methods */
- (id)initWithIndexPath:(id)path shouldTargetAssociatedMessages:(BOOL)messages;
@end

#endif /* CKCommSafetyReceiveContext_h */
