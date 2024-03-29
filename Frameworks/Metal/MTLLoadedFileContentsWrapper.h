//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLLoadedFileContentsWrapper_h
#define MTLLoadedFileContentsWrapper_h
@import Foundation;

@class NSData;
@protocol OS_dispatch_data;

@interface MTLLoadedFileContentsWrapper : NSObject

@property (readonly, nonatomic) NSData *sourceContents;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *dispatchData;
@property (readonly, nonatomic) const void * bytes;
@property (readonly, nonatomic) unsigned long long length;

/* instance methods */
- (id)initWithData:(id)data;
- (void)dealloc;
@end

#endif /* MTLLoadedFileContentsWrapper_h */
