//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSSwitchControlSettings_h
#define AXSSSwitchControlSettings_h
@import Foundation;

@class NSArray;

@interface AXSSSwitchControlSettings : NSObject

@property (copy, nonatomic) NSArray *scanningStyles;
@property (copy, nonatomic) NSArray *tapBehaviors;
@property (copy, nonatomic) NSArray *cursorSizes;
@property (copy, nonatomic) NSArray *postActivationScanLocations;
@property (nonatomic) double autoScanningInterval;
@property (nonatomic) double autoHideTimeout;
@property (nonatomic) double pauseOnFirstItemInterval;
@property (nonatomic) unsigned long long numberOfScanLoops;
@property (nonatomic) double dwellDuration;
@property (nonatomic) double repeatActionInterval;
@property (nonatomic) double holdDuration;
@property (nonatomic) double ignoreRepeatDuration;
@property (nonatomic) BOOL soundEffectsEnabled;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) double longPressDuration;
@property (nonatomic) double autoTapTimeout;

/* instance methods */
- (id)init;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (id)description;
@end

#endif /* AXSSSwitchControlSettings_h */
