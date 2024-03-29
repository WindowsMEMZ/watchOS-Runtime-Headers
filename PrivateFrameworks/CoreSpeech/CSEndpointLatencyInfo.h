//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSEndpointLatencyInfo_h
#define CSEndpointLatencyInfo_h
@import Foundation;

@class NSMutableArray, NSString;

@interface CSEndpointLatencyInfo : NSObject

@property (retain, nonatomic) NSMutableArray *trailingPktSpeechLatencies;
@property (retain, nonatomic) NSMutableArray *trailingPktLatencies;
@property (nonatomic) unsigned long long numOfAudioPackets;
@property (nonatomic) unsigned long long numOfValidTrailingPackets;
@property (nonatomic) unsigned long long numOfValidTrailingSpeechPackets;
@property (nonatomic) double firstPktLatency;
@property (retain, nonatomic) NSString *requestMHUUID;

/* instance methods */
- (id)initWithRequestMHUUID:(id)mhuuid;
- (void)addPktInfoWithTimestamp:(unsigned long long)timestamp arrivalTimestamp:(unsigned long long)timestamp currentMachTime:(unsigned long long)time;
- (void)report;
- (void)_emitMHEndpointLatencyInfo:(id)info withRequestMHUUID:(id)mhuuid;
@end

#endif /* CSEndpointLatencyInfo_h */
