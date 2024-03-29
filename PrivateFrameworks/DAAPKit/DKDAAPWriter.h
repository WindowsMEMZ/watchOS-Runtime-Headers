//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef DKDAAPWriter_h
#define DKDAAPWriter_h
@import Foundation;

@class NSError, NSMutableArray, NSOutputStream;

@interface DKDAAPWriter : NSObject

@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSMutableArray *containerStack;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithStream:(id)stream;
- (void)close;
- (void)startContainerWithCode:(unsigned int)code;
- (void)endContainerWithCode:(unsigned int)code;
- (void)writeData:(id)data withCode:(unsigned int)code;
- (void)writeUInt8:(unsigned char)uint8 withCode:(unsigned int)code;
- (void)writeSInt8:(char)sint8 withCode:(unsigned int)code;
- (void)writeUInt16:(unsigned short)uint16 withCode:(unsigned int)code;
- (void)writeSInt16:(short)sint16 withCode:(unsigned int)code;
- (void)writeUInt32:(unsigned int)uint32 withCode:(unsigned int)code;
- (void)writeSInt32:(int)sint32 withCode:(unsigned int)code;
- (void)writeUInt64:(unsigned long long)uint64 withCode:(unsigned int)code;
- (void)writeSInt64:(long long)sint64 withCode:(unsigned int)code;
- (void)writeString:(id)string withCode:(unsigned int)code;
- (void)writeCString:(const char *)cstring withCode:(unsigned int)code;
- (void)writeBytes:(char *)bytes ofLength:(unsigned int)length withCode:(unsigned int)code;
- (void)writeContainerData:(id)data;
- (void)_performWriteWithBuffer:(id /* block */)buffer;
- (void)_writeDataToOutputStream:(id)stream;
@end

#endif /* DKDAAPWriter_h */
