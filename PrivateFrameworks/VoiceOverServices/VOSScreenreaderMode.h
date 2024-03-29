//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef VOSScreenreaderMode_h
#define VOSScreenreaderMode_h
@import Foundation;

@class NSString;

@interface VOSScreenreaderMode : NSObject

@property (readonly, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) NSString *localizedName;

/* class methods */
+ (id)Default;
+ (id)Handwriting;
+ (id)BrailleScreenInput;
+ (id)Invalid;
+ (id)allModes;
+ (id)modeWithStringValue:(id)value;

/* instance methods */
- (id)_initWithRawValue:(id)value;
- (id)description;
@end

#endif /* VOSScreenreaderMode_h */
