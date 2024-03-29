//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DERewindableReader_h
#define DERewindableReader_h
@import Foundation;

#include "DEReader-Protocol.h"

@class NSMutableData;

@interface DERewindableReader : NSObject<DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

/* instance methods */
- (id)initWithReader:(id)reader;
- (id)init;
- (void)dealloc;
- (void)disableRewind;
- (BOOL)isRewindable;
- (BOOL)rewind;
- (void)close;
- (id)readDataOfLength:(unsigned long long)length;
- (id)readData;
@end

#endif /* DERewindableReader_h */
