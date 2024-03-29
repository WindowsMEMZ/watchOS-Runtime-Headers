//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFileType_h
#define WFFileType_h
@import Foundation;

#include "WFType.h"
#include "WFImage.h"

@class NSArray, NSDictionary, NSString, UTType;

@interface WFFileType : WFType

@property (readonly, nonatomic) WFImage *documentIcon;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) UTType *utType;
@property (readonly, nonatomic) BOOL declared;
@property (readonly, nonatomic) BOOL dynamic;
@property (readonly, nonatomic) BOOL coreType;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSDictionary *typeDeclaration;
@property (readonly, nonatomic) NSArray *typesConformedTo;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *pboardType;
@property (readonly, nonatomic) NSString *OSType;

/* class methods */
+ (id)fileTypeCache;
+ (id)typeWithString:(id)string;
+ (id)typeWithUTType:(id)uttype;
+ (id)typeWithUTType:(id)uttype string:(id)string;
+ (id)typeFromFilename:(id)filename;
+ (id)typeFromFileExtension:(id)extension;
+ (id)typeFromMIMEType:(id)mimetype;
+ (id)typeFromPasteboardType:(id)type;
+ (BOOL)supportsSecureCoding;
+ (id)typesFromUTTypes:(id)uttypes excludingType:(id)type;
+ (id)typesFromUTTypes:(id)uttypes;
+ (id)typesFromStrings:(id)strings;
+ (id)typeForTagClass:(id)class tag:(id)tag;
+ (id)typesForTagClass:(id)class tag:(id)tag conformingToType:(id)type;

/* instance methods */
- (id)initWithUTType:(id)uttype;
- (id)initWithString:(id)string;
- (id)initWithUTType:(id)uttype string:(id)string;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isEqualToType:(id)type;
- (BOOL)isEqualToString:(id)string;
- (BOOL)isEqualToUTType:(id)uttype;
- (BOOL)conformsToType:(id)type;
- (BOOL)conformsToString:(id)string;
- (BOOL)conformsToUTType:(id)uttype;
- (BOOL)conformsToUTTypes:(id)uttypes;
- (id)conformingTypesWithFileExtension:(id)extension;
- (id)conformingTypesWithMIMEType:(id)mimetype;
- (BOOL)isDeclared;
- (BOOL)isDynamic;
- (BOOL)isCoreType;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)conformingTypesWithTagClass:(id)class tag:(id)tag;
@end

#endif /* WFFileType_h */
