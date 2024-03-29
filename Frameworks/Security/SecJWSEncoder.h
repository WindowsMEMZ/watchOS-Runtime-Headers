//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SecJWSEncoder_h
#define SecJWSEncoder_h
@import Foundation;

@interface SecJWSEncoder : NSObject

@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } * publicKey;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } * privateKey;

/* instance methods */
- (id)init;
- (id)initWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key;
- (void)dealloc;
- (id)createKeyPair;
- (id)jwkPublicKey;
- (id)signatureWithProtectedHeader:(id)header payload:(id)payload;
- (id)encodedJWSWithPayload:(id)payload kid:(id)kid nonce:(id)nonce url:(id)url error:(id *)error;
- (id)base64URLEncodedStringRepresentationWithData:(id)data;
- (id)base64URLEncodedStringRepresentationWithDictionary:(id)dictionary;
- (id)compactJSONStringRepresentationWithDictionary:(id)dictionary;
@end

#endif /* SecJWSEncoder_h */
