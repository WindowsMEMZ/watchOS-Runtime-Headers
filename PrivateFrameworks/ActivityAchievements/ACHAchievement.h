//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAchievement_h
#define ACHAchievement_h
@import Foundation;

#include "ACHEarnedInstance.h"
#include "ACHTemplate.h"
#include "NSSecureCoding-Protocol.h"

@class HKQuantity, NSArray, NSDictionary, NSString, NSURL;

@interface ACHAchievement : NSObject<NSSecureCoding>

@property (retain) NSString *localizationBundleURLString;
@property (retain) NSString *resourceBundleURLString;
@property (retain) NSString *propertyListBundleURLString;
@property (retain) NSString *stickerBundleURLString;
@property (retain) ACHEarnedInstance *relevantEarnedInstance;
@property unsigned long long earnedInstanceCount;
@property (retain) NSURL *localizationBundleURL;
@property (retain) NSURL *resourceBundleURL;
@property (retain) NSURL *propertyListBundleURL;
@property (retain) NSURL *stickerBundleURL;
@property double glyphTextureScale;
@property (retain) NSArray *badgeModelFilenames;
@property (retain) NSArray *textureFilenames;
@property (retain) NSString *glyphTextureFilename;
@property double glyphPositionOffsetX;
@property double glyphPositionOffsetY;
@property (retain) NSString *badgeShapeName;
@property BOOL badgeUsesFullColorEnamel;
@property BOOL unearnedUsesTwoToneEnamel;
@property BOOL faceHasMetalInlay;
@property struct { float x0; float x1; float x2; } badgeEnamelColor;
@property struct { float x0; float x1; float x2; } badgeMetalColor;
@property long long badgeModelVersion;
@property BOOL badgeUsesTriColorEnamel;
@property struct { float x0; float x1; float x2; } enamelTriColor1;
@property struct { float x0; float x1; float x2; } enamelTriColor2;
@property struct { float x0; float x1; float x2; } enamelTriColor3;
@property BOOL prerequisiteMet;
@property (copy) NSString *section;
@property (retain) HKQuantity *progress;
@property (retain) HKQuantity *goal;
@property (retain) NSDictionary *customPlaceholderValues;
@property (readonly) BOOL hasClientRequiredURLs;
@property (readonly) ACHTemplate *template;
@property (readonly) NSArray *earnedInstances;
@property (readonly) BOOL unearned;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTemplate:(id)template relevantEarnedInstance:(id)instance earnedInstanceCount:(unsigned long long)count;
- (id)initWithTemplate:(id)template earnedInstances:(id)instances;
- (id)shallowCopyWithRelevantEarnedInstance:(id)instance;
- (id)shallowCopyReplacingEarnedInstances:(id)instances;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCodable:(id)codable;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* ACHAchievement_h */
