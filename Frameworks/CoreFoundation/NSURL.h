//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSURL_h
#define NSURL_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSData.h"
#include "NSSecureCoding-Protocol.h"
#include "NSURL.h"

@class NSNumber, NSString;

@interface NSURL : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSString *_urlString;
  void * _clients;
  void * _reserved;
}

@property (readonly, copy, @dynamic) NSData *dataRepresentation;
@property (readonly, copy, @dynamic) NSString *absoluteString;
@property (readonly, copy, @dynamic) NSString *relativeString;
@property (readonly, copy, @dynamic) NSURL *baseURL;
@property (readonly, copy, @dynamic) NSURL *absoluteURL;
@property (readonly, copy, @dynamic) NSString *scheme;
@property (readonly, copy, @dynamic) NSString *resourceSpecifier;
@property (readonly, copy, @dynamic) NSString *host;
@property (readonly, copy, @dynamic) NSNumber *port;
@property (readonly, copy, @dynamic) NSString *user;
@property (readonly, copy, @dynamic) NSString *password;
@property (readonly, copy, @dynamic) NSString *path;
@property (readonly, copy, @dynamic) NSString *fragment;
@property (readonly, copy, @dynamic) NSString *parameterString;
@property (readonly, copy, @dynamic) NSString *query;
@property (readonly, copy, @dynamic) NSString *relativePath;
@property (readonly, @dynamic) BOOL hasDirectoryPath;
@property (readonly, @dynamic) const char * fileSystemRepresentation;
@property (readonly, @dynamic) BOOL fileURL;
@property (readonly, copy, @dynamic) NSURL *standardizedURL;
@property (readonly, copy) NSURL *filePathURL;

/* class methods */
+ (id)__unurl;
+ (BOOL)supportsSecureCoding;
+ (id)resourceValuesForKeys:(id)keys fromBookmarkData:(id)data;
+ (BOOL)writeBookmarkData:(id)data toURL:(id)url options:(unsigned long long)options error:(id *)error;
+ (id)bookmarkDataWithContentsOfURL:(id)url error:(id *)error;

/* instance methods */
- (BOOL)getResourceValue:(out id *)value forKey:(id)key error:(out id *)error;
- (id)resourceValuesForKeys:(id)keys error:(id *)error;
- (BOOL)setResourceValue:(id)value forKey:(id)key error:(id *)error;
- (BOOL)setResourceValues:(id)values error:(id *)error;
- (void)removeCachedResourceValueForKey:(id)key;
- (void)removeAllCachedResourceValues;
- (void)setTemporaryResourceValue:(id)value forKey:(id)key;
- (BOOL)isFileReferenceURL;
- (id)fileReferenceURL;
- (id)bookmarkDataWithOptions:(unsigned long long)options includingResourceValuesForKeys:(id)keys relativeToURL:(id)url error:(id *)error;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
@end

#endif /* NSURL_h */
