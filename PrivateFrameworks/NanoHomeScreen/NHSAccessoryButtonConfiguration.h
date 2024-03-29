//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NHSAccessoryButtonConfiguration_h
#define NHSAccessoryButtonConfiguration_h
@import Foundation;

@class NSString, UIColor;

@interface NHSAccessoryButtonConfiguration : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) UIColor *backgroundColor;

/* instance methods */
- (id)initWithText:(id)text backgroundColor:(id)color;
- (id)initWithSymbolName:(id)name backgroundColor:(id)color;
- (BOOL)hasText;
@end

#endif /* NHSAccessoryButtonConfiguration_h */
