//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCScreenCaptureConfiguration_h
#define AVCScreenCaptureConfiguration_h
@import Foundation;

@class NSArray, NSString;

@interface AVCScreenCaptureConfiguration : NSObject

@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) BOOL isWindowed;
@property (nonatomic) unsigned int screenCaptureDisplayID;
@property (nonatomic) BOOL isCursorCaptured;
@property (copy, nonatomic) NSArray *excludedApplicationBundleIDs;
@property (nonatomic) BOOL shouldRunInProcess;
@property (nonatomic) unsigned int selectiveSharingPort;
@property (copy, nonatomic) NSString *selectiveScreenUUID;

/* instance methods */
- (id)initWithHeight:(unsigned int)height width:(unsigned int)width framerate:(unsigned int)framerate screenCaptureDisplayID:(unsigned int)id;
- (id)init;
- (void)dealloc;
@end

#endif /* AVCScreenCaptureConfiguration_h */
