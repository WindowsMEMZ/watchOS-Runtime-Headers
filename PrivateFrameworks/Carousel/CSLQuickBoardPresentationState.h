//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLQuickBoardPresentationState_h
#define CSLQuickBoardPresentationState_h
@import Foundation;

@class NSString;

@interface CSLQuickBoardPresentationState : NSObject

@property (readonly, nonatomic) unsigned long long activeQuickBoardLayer;
@property (readonly, nonatomic) NSString *hostSceneIdentifier;

/* class methods */
+ (id)none;

/* instance methods */
- (id)initWithLayer:(unsigned long long)layer hostSceneIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* CSLQuickBoardPresentationState_h */
