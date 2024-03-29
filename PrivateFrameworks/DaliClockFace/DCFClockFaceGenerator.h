//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 24.0.0.0.0
//
#ifndef DCFClockFaceGenerator_h
#define DCFClockFaceGenerator_h
@import Foundation;

@interface DCFClockFaceGenerator : NSObject

@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned long long timeFormat;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long badge;
@property (nonatomic) unsigned long long puckColor;
@property (nonatomic) BOOL powerReserve;
@property (nonatomic) double timeOffset;

/* instance methods */
- (id)init;
- (id)generateEcoModeClockFaceForDate:(id)date;
- (void)_narrowGamutIfNecessary;
- (unsigned int)_encodeTime:(id)time withTimeFormat:(unsigned long long)format;
@end

#endif /* DCFClockFaceGenerator_h */
