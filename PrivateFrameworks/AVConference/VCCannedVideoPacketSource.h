//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCCannedVideoPacketSource_h
#define VCCannedVideoPacketSource_h
@import Foundation;

@class NSFileHandle, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface VCCannedVideoPacketSource : NSObject {
  /* instance variables */
  unsigned char _mode;
  NSFileHandle *_fileHandle;
  NSString *_filePath;
  struct __CFAllocator * _blockBufferHeaderAllocator;
  struct __CFAllocator * _rtcpPacketAllocator;
  NSObject<OS_dispatch_queue> *_writeQueue;
  NSMutableDictionary *_rtpCallbacks;
  NSMutableDictionary *_rtcpCallbacks;
  struct OpaqueFigThread * _cannedReplayThread;
  BOOL _cannedReplayThreadCanceled;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _replayMutex;
  struct _opaque_pthread_cond_t { long long __sig; char x[40] __opaque; } _replayCondition;
}

/* class methods */
+ (BOOL)createFileAtPath:(id)path;
+ (BOOL)removeFileAtPath:(id)path;
+ (BOOL)overwriteFileAtPath:(id)path;

/* instance methods */
- (id)initWithMode:(unsigned char)mode filePath:(id)path;
- (BOOL)setUpSourceFileWithMode:(unsigned char)mode;
- (void)dealloc;
- (int)startCannedInjection;
- (int)stopCannedInjection;
@end

#endif /* VCCannedVideoPacketSource_h */
