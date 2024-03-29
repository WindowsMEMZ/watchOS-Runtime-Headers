//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1.2.2.0.0
//
#ifndef ASGreenTeaLogger_h
#define ASGreenTeaLogger_h
@import Foundation;

@interface ASGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s * logger;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)willAccessLocationForSearch;
- (void)willTransmitLocationForSearch;
- (void)willRequestAppList;
@end

#endif /* ASGreenTeaLogger_h */
