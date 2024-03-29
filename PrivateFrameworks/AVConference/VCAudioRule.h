//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCAudioRule_h
#define VCAudioRule_h
@import Foundation;

@interface VCAudioRule : NSObject {
  /* instance variables */
  unsigned long long _hash;
}

@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) BOOL isSecondary;
@property (readonly, nonatomic) BOOL sbr;
@property (readonly, nonatomic) unsigned int samplesPerBlock;

/* instance methods */
- (id)init;
- (id)initWithPayload:(int)payload isSecondary:(BOOL)secondary sbr:(BOOL)sbr samplesPerBlock:(unsigned int)block;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (unsigned long long)hash;
@end

#endif /* VCAudioRule_h */
