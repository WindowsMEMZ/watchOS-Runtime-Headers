//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef NviContext_h
#define NviContext_h
@import Foundation;

@class NSDictionary, NSString;

@interface NviContext : NSObject

@property (retain, nonatomic) NSDictionary *voiceTriggerInfo;
@property (nonatomic) BOOL requestHistoricalAudio;
@property (nonatomic) unsigned long long reqStartAudioSampleId;
@property (nonatomic) unsigned long long reqStartMachAbsTime;
@property (nonatomic) BOOL shouldLogRawSensorData;
@property (retain, nonatomic) NSString *rootLogDir;

/* instance methods */
- (id)description;
@end

#endif /* NviContext_h */
