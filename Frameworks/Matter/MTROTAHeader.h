//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTROTAHeader_h
#define MTROTAHeader_h
@import Foundation;

@class NSData, NSNumber, NSString;

@interface MTROTAHeader : NSObject

@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *payloadSize;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSString *softwareVersionString;
@property (copy, nonatomic) NSString *releaseNotesURL;
@property (copy, nonatomic) NSData *imageDigest;
@property (nonatomic) unsigned long long imageDigestType;
@property (copy, nonatomic) NSNumber *minApplicableVersion;
@property (copy, nonatomic) NSNumber *maxApplicableVersion;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* MTROTAHeader_h */
