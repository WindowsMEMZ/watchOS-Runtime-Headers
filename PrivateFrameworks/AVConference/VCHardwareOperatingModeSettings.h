//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCHardwareOperatingModeSettings_h
#define VCHardwareOperatingModeSettings_h
@import Foundation;

@class NSString;

@interface VCHardwareOperatingModeSettings : NSObject {
  /* instance variables */
  int _avcOperatingMode;
}

@property (readonly, nonatomic) unsigned int usageMode;
@property (readonly, nonatomic) BOOL supportVCPDecoderHEVC;
@property (readonly, nonatomic) BOOL supportVCPEncoderHEVC;
@property (readonly, nonatomic) BOOL vcpInitializedForHEVC;
@property (readonly, nonatomic) NSString *featureListStringHEVC;
@property (readonly, nonatomic) NSString *featureListStringH264;
@property (readonly, nonatomic) NSString *featureListStringFixedPositionHEVC;
@property (readonly, nonatomic) NSString *featureListStringFixedPositionH264;
@property (readonly, nonatomic) unsigned int tilesPerVideoFrame;

/* class methods */
+ (unsigned int)encoderUsageTypeWithOperatingMode:(int)mode;

/* instance methods */
- (id)initWithMode:(int)mode;
- (void)dealloc;
- (unsigned int)numTilesPerVideoFrameForHDRMode:(unsigned long long)hdrmode;
- (void)initFeatureListString;
@end

#endif /* VCHardwareOperatingModeSettings_h */
