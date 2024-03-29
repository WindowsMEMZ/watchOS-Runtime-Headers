//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ONOXMLDocument_h
#define ONOXMLDocument_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "ONOSearching-Protocol.h"
#include "ONOXMLElement.h"

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter, NSString;

@interface ONOXMLDocument : NSObject<ONOSearching, NSCopying, NSCoding>

@property (nonatomic) struct _xmlDoc { void * x0; int x1; char * x2; struct _xmlNode * x3; struct _xmlNode * x4; struct _xmlNode * x5; struct _xmlNode * x6; struct _xmlNode * x7; struct _xmlDoc * x8; int x9; int x10; struct _xmlDtd * x11; struct _xmlDtd * x12; struct _xmlNs * x13; char * x14; char * x15; void * x16; void * x17; char * x18; int x19; struct _xmlDict * x20; void * x21; int x22; int x23; } * xmlDocument;
@property (retain, nonatomic) ONOXMLElement *rootElement;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableDictionary *defaultNamespaces;

/* class methods */
+ (id)XMLDocumentWithString:(id)string encoding:(unsigned long long)encoding error:(id *)error;
+ (id)XMLDocumentWithData:(id)data error:(id *)error;
+ (id)HTMLDocumentWithString:(id)string encoding:(unsigned long long)encoding error:(id *)error;
+ (id)HTMLDocumentWithData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithDocument:(struct _xmlDoc { void * x0; int x1; char * x2; struct _xmlNode * x3; struct _xmlNode * x4; struct _xmlNode * x5; struct _xmlNode * x6; struct _xmlNode * x7; struct _xmlDoc * x8; int x9; int x10; struct _xmlDtd * x11; struct _xmlDtd * x12; struct _xmlNs * x13; char * x14; char * x15; void * x16; void * x17; char * x18; int x19; struct _xmlDict * x20; void * x21; int x22; int x23; } *)document;
- (void)dealloc;
- (void)definePrefix:(id)prefix forDefaultNamespace:(id)namespace;
- (id)elementWithNode:(struct _xmlNode { void * x0; int x1; char * x2; struct _xmlNode * x3; struct _xmlNode * x4; struct _xmlNode * x5; struct _xmlNode * x6; struct _xmlNode * x7; struct _xmlDoc * x8; struct _xmlNs * x9; char * x10; struct _xmlAttr * x11; struct _xmlNs * x12; void * x13; unsigned short x14; unsigned short x15; } *)node;
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject { int x0; struct _xmlNodeSet * x1; int x2; double x3; char * x4; void * x5; int x6; void * x7; int x8; } *)object;
- (id)XPath:(id)xpath;
- (id)functionResultByEvaluatingXPath:(id)xpath;
- (void)enumerateElementsWithXPath:(id)xpath block:(id /* block */)block;
- (void)enumerateElementsWithXPath:(id)xpath usingBlock:(id /* block */)block;
- (id)firstChildWithXPath:(id)xpath;
- (id)CSS:(id)css;
- (void)enumerateElementsWithCSS:(id)css block:(id /* block */)block;
- (void)enumerateElementsWithCSS:(id)css usingBlock:(id /* block */)block;
- (id)firstChildWithCSS:(id)css;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ONOXMLDocument_h */
