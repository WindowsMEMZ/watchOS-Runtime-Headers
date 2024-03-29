//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTStickerConfiguration_h
#define AVTStickerConfiguration_h
@import Foundation;

#include "AVTAvatarBodyPose.h"
#include "AVTAvatarPhysicalizedPose.h"
#include "AVTAvatarPoseAnimation.h"
#include "AVTStickerCamera.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AVTStickerConfiguration : NSObject {
  /* instance variables */
  NSNumber *_legacySizeOption;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) BOOL preRendered;
@property (retain, nonatomic) NSDictionary *configurationDictionary;
@property (retain, nonatomic) NSString *assetsPath;
@property (nonatomic) BOOL hasLoadedFromConfiguration;
@property (retain, nonatomic) AVTAvatarPhysicalizedPose *physicalizedPose;
@property (retain, nonatomic) AVTAvatarBodyPose *bodyPose;
@property (retain, nonatomic) NSArray *poseAdjustments;
@property (retain, nonatomic) NSArray *props;
@property (retain, nonatomic) NSArray *shaderModifiers;
@property (retain, nonatomic) AVTStickerCamera *camera;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *emojiRepresentation;
@property (readonly, nonatomic) AVTAvatarPoseAnimation *poseAnimation;
@property (readonly, nonatomic) NSString *stickerPack;
@property (readonly, nonatomic) NSArray *morpherOverrides;
@property (readonly, nonatomic) NSArray *presetOverrides;
@property (readonly, nonatomic) unsigned long long stickerVersion;

/* class methods */
+ (id)allStickerPackNames;
+ (id)stickerConfigurationsForMemoji;
+ (id)stickerConfigurationsForPuppetNamed:(id)named;
+ (id)stickerConfigurationsForAnimojiNamed:(id)named;
+ (id)stickerConfigurationsForMemojiInStickerPack:(id)pack;
+ (id)stickerConfigurationsForAnimojiNamed:(id)named inStickerPack:(id)pack;
+ (id)stickerConfigurationForMemojiInStickerPack:(id)pack stickerName:(id)name;
+ (id)stickerConfigurationForAnimojiNamed:(id)named inStickerPack:(id)pack stickerName:(id)name;
+ (id)unavailableAnimojiNamesForStickerPack:(id)pack;
+ (id)availableStickerNamesForMemojiInStickerPack:(id)pack;
+ (id)availableStickerNamesForAnimojiNamed:(id)named inStickerPack:(id)pack;

/* instance methods */
- (id)legacySizeOption;
- (id)initWithConfigurationAtPath:(id)path;
- (id)initWithConfigurationAtPath:(id)path forStickerPack:(id)pack;
- (id)initWithConfigDictionary:(id)dictionary assetsPath:(id)path forStickerPack:(id)pack;
- (id)initWithName:(id)name poseAnimation:(id)animation bodyPose:(id)pose props:(id)props shaders:(id)shaders camera:(id)camera options:(id)options;
- (id)initWithName:(id)name pose:(id)pose props:(id)props shaders:(id)shaders camera:(id)camera options:(id)options;
- (id)initWithName:(id)name pose:(id)pose bodyPose:(id)pose props:(id)props shaders:(id)shaders camera:(id)camera options:(id)options;
- (id)framingMode;
- (BOOL)hasProps;
- (BOOL)showsBody;
- (BOOL)definesPoseOnly;
- (void)setupOptions:(id)options;
- (void)loadIfNeeded;
- (void)unload;
- (void)_updateDictionary:(id)dictionary withTargetPath:(id)path;
- (id)description;
- (id)dictionaryWithTargetPath:(id)path;
@end

#endif /* AVTStickerConfiguration_h */
