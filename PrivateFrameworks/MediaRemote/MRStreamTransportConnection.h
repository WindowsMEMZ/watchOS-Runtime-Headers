//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRStreamTransportConnection_h
#define MRStreamTransportConnection_h
@import Foundation;

#include "MRExternalDeviceTransportConnection.h"
#include "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSOutputStream, NSRunLoop, NSString;

@interface MRStreamTransportConnection : MRExternalDeviceTransportConnection<NSStreamDelegate> {
  /* instance variables */
  NSInputStream *_inputStream;
  NSOutputStream *_outputStream;
  NSRunLoop *_runLoop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInputStream:(id)stream outputStream:(id)stream;
- (BOOL)isValid;
- (id)runLoop;
- (unsigned long long)sendTransportData:(id)data options:(id)options;
- (void)close;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (void)_stream:(id)_stream handleEvent:(unsigned long long)event;
- (void)_openStream:(id)stream;
- (void)_closeStream:(id)stream;
- (void)_closeAllStreams;
- (void)_setQOSPropertiesOnStream:(id)stream;
@end

#endif /* MRStreamTransportConnection_h */
