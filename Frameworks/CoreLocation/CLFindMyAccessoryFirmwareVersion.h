//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLFindMyAccessoryFirmwareVersion_h
#define CLFindMyAccessoryFirmwareVersion_h
@import Foundation;

@class NSString;

@interface CLFindMyAccessoryFirmwareVersion : NSObject {
  /* instance variables */
  struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned char x8; } * _version;
}

@property (readonly) NSString *vanBurenVersion;
@property (readonly) NSString *rtKitVersion;
@property (readonly) NSString *specificationVersion;
@property (readonly) unsigned long long roseAPVersion;
@property (readonly) unsigned long long roseDSPVersion;
@property (readonly) unsigned long long hardwareVersion;
@property (readonly) unsigned long long calibrationDataVersion;

/* instance methods */
- (id)initWithBytes:(const void *)bytes length:(unsigned long long)length;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)description;
@end

#endif /* CLFindMyAccessoryFirmwareVersion_h */
