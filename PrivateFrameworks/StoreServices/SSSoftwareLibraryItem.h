//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSSoftwareLibraryItem_h
#define SSSoftwareLibraryItem_h
@import Foundation;

#include "SSXPCCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject<SSXPCCoding> {
  /* instance variables */
  NSMutableDictionary *_etags;
  NSMutableDictionary *_propertyValues;
}

@property (nonatomic) BOOL beta;
@property (nonatomic) BOOL launchProhibited;
@property (nonatomic) BOOL placeholder;
@property (nonatomic) BOOL profileValidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)ETagForAssetType:(id)type;
- (BOOL)setETag:(id)etag forAssetType:(id)type error:(id *)error;
- (id)valueForProperty:(id)property;
- (id)_initWithITunesMetadata:(id)metadata;
- (void)_setValue:(id)value forProperty:(id)property;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (BOOL)isBeta;
- (BOOL)isPlaceholder;
- (BOOL)isProfileValidated;
- (BOOL)isLaunchProhibited;
@end

#endif /* SSSoftwareLibraryItem_h */
