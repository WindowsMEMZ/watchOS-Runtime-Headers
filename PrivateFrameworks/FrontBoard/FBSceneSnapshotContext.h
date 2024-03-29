//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSceneSnapshotContext_h
#define FBSceneSnapshotContext_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"

@class BSSettings, FBSSceneClientSettings, FBSSceneSettings, NSDate, NSSet, NSString;

@interface FBSceneSnapshotContext : NSObject<BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL opaque;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSSet *layersToExclude;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contextWithFBSContext:(id)fbscontext;

/* instance methods */
- (id)initWithScene:(id)scene;
- (id)initWithFBSContext:(id)fbscontext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)isOpaque;
@end

#endif /* FBSceneSnapshotContext_h */
