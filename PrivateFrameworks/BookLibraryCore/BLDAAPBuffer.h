//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BLDAAPBuffer_h
#define BLDAAPBuffer_h
@import Foundation;

@class NSData;

@interface BLDAAPBuffer : NSObject

@property (readonly, nonatomic) NSData *data;

/* instance methods */
- (id)init;
- (long long)appendUInt8:(unsigned char)uint8 withCode:(unsigned int)code;
- (long long)appendUInt32:(unsigned int)uint32 withCode:(unsigned int)code;
- (long long)appendUInt64:(unsigned long long)uint64 withCode:(unsigned int)code;
- (long long)appendHeader:(unsigned int)header size:(unsigned int)size;
@end

#endif /* BLDAAPBuffer_h */
