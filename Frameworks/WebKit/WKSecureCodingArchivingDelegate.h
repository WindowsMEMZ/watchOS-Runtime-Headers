//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKSecureCodingArchivingDelegate_h
#define WKSecureCodingArchivingDelegate_h
@import Foundation;

#include "NSKeyedArchiverDelegate-Protocol.h"
#include "NSKeyedUnarchiverDelegate-Protocol.h"

@class NSString;

@interface WKSecureCodingArchivingDelegate : NSObject<NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>

@property (nonatomic) BOOL rewriteMutableArray;
@property (nonatomic) BOOL rewriteMutableData;
@property (nonatomic) BOOL rewriteMutableDictionary;
@property (nonatomic) BOOL rewriteMutableString;
@property (nonatomic) BOOL transformURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)archiver:(id)archiver willEncodeObject:(id)object;
- (id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
- (id)init;
@end

#endif /* WKSecureCodingArchivingDelegate_h */
