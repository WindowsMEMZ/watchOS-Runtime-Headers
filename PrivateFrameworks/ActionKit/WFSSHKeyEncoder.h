//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSSHKeyEncoder_h
#define WFSSHKeyEncoder_h
@import Foundation;

@class NSData, NSMutableData;

@interface WFSSHKeyEncoder : NSObject

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) NSData *encodedData;

/* instance methods */
- (id)init;
- (void)encodeChar:(char)char;
- (void)encodeInteger:(unsigned int)integer;
- (void)encodeString:(id)string;
- (void)encodeStringWithPreceedingLength:(id)length;
- (void)encodeData:(id)data;
- (void)encodeDataWithPreceedingLength:(id)length;
@end

#endif /* WFSSHKeyEncoder_h */
