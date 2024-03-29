//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef JSContext_h
#define JSContext_h
@import Foundation;

#include "JSValue.h"
#include "JSVirtualMachine.h"

@class NSString;
@protocol {RetainPtr<JSVirtualMachine>="m_ptr"^v}, {Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No>="m_slot"^{JSValue}}, {WeakObjCPtr<id<JSModuleLoaderDelegate>>="m_weakReference"@};

@interface JSContext : NSObject {
  /* instance variables */
  struct RetainPtr<JSVirtualMachine> { void *m_ptr; } m_virtualMachine;
  struct OpaqueJSContext * m_context;
  struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> { struct JSValue *m_slot; } m_exception;
  struct WeakObjCPtr<id<JSModuleLoaderDelegate>> { id m_weakReference; } m_moduleLoaderDelegate;
}

@property (readonly) JSValue *globalObject;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSVirtualMachine *virtualMachine;
@property (copy) NSString *name;
@property (nonatomic) BOOL inspectable;

/* class methods */
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)ref;
+ (id)currentContext;
+ (id)currentThis;
+ (id)currentCallee;
+ (id)currentArguments;

/* instance methods */
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)ref;
- (void)notifyException:(struct OpaqueJSValue *)exception;
- (id)valueFromNotifyException:(struct OpaqueJSValue *)exception;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue *)exception;
- (void)beginCallbackWithData:(void *)data calleeValue:(struct OpaqueJSValue *)value thisValue:(struct OpaqueJSValue *)value argumentCount:(unsigned long long)count arguments:(const struct OpaqueJSValue * *)arguments;
- (void)endCallbackWithData:(void *)data;
- (id)wrapperForObjCObject:(id)cobject;
- (id)wrapperMap;
- (id)wrapperForJSObject:(struct OpaqueJSValue *)jsobject;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (struct OpaqueJSContext *)JSGlobalContextRef;
- (void)ensureWrapperMap;
- (id)init;
- (id)initWithVirtualMachine:(id)machine;
- (void)dealloc;
- (id)evaluateScript:(id)script;
- (id)evaluateScript:(id)script withSourceURL:(id)url;
- (id)evaluateJSScript:(id)jsscript;
- (id)dependencyIdentifiersForModuleJSScript:(id)jsscript;
- (void)_setITMLDebuggableType;
- (BOOL)isInspectable;
- (BOOL)_remoteInspectionEnabled;
- (void)_setRemoteInspectionEnabled:(BOOL)enabled;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)exceptions;
- (struct __CFRunLoop *)_debuggerRunLoop;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop *)loop;
- (id)moduleLoaderDelegate;
- (void)setModuleLoaderDelegate:(id)delegate;
@end

#endif /* JSContext_h */
