//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusLinearMovementSequence_h
#define _UIFocusLinearMovementSequence_h
@import Foundation;

@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL looping;
@property (readonly, nonatomic) BOOL restrictEnteringSequence;

/* class methods */
+ (id)sequenceWithItems:(id)items loops:(BOOL)loops restrictEnteringSequence:(BOOL)sequence;
+ (id)sequenceWithItems:(id)items loops:(BOOL)loops;

/* instance methods */
- (id)init;
- (id)initWithItems:(id)items loops:(BOOL)loops;
- (id)initWithItems:(id)items loops:(BOOL)loops restrictEnteringSequence:(BOOL)sequence;
- (BOOL)isLooping;
- (BOOL)restrictsEnteringSequence;
@end

#endif /* _UIFocusLinearMovementSequence_h */
