//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSContext, JSValue, NSArray, NSString, NSURL;

@protocol WXBridgeProtocol <NSObject>
@property(readonly, nonatomic) JSValue *exception;
- (void)registerCallNativeComponent:(void (^)(NSString *, NSString *, NSString *, NSArray *, NSDictionary *))arg1;
- (void)registerCallNativeModule:(NSInvocation * (^)(NSString *, NSString *, NSString *, NSArray *, NSDictionary *))arg1;
- (void)registerCallCreateFinish:(long long (^)(NSString *))arg1;
- (void)registerCallRemoveEvent:(long long (^)(NSString *, NSString *, NSString *))arg1;
- (void)registerCallAddEvent:(long long (^)(NSString *, NSString *, NSString *))arg1;
- (void)registerCallUpdateStyle:(long long (^)(NSString *, NSString *, NSDictionary *))arg1;
- (void)registerCallUpdateAttrs:(long long (^)(NSString *, NSString *, NSDictionary *))arg1;
- (void)registerCallMoveElement:(long long (^)(NSString *, NSString *, NSString *, long long))arg1;
- (void)registerCallRemoveElement:(long long (^)(NSString *, NSString *))arg1;
- (void)registerCallCreateBody:(long long (^)(NSString *, NSDictionary *))arg1;
- (void)registerCallAddElement:(long long (^)(NSString *, NSString *, NSDictionary *, long long))arg1;
- (void)registerCallNative:(long long (^)(NSString *, NSArray *, NSString *))arg1;
- (void)registerCallUpdateComponentData:(long long (^)(NSString *, NSString *, NSString *))arg1;
- (void)resetEnvironment;
- (JSValue *)callJSMethod:(NSString *)arg1 args:(NSArray *)arg2;
- (void)executeJavascript:(NSString *)arg1;
- (void)executeJSFramework:(NSString *)arg1;

@optional
@property(retain, nonatomic) NSString *weexInstanceId;
- (JSContext *)javaScriptContext;
- (void)setJSContext:(JSContext *)arg1;
- (JSValue *)executeJavascript:(NSString *)arg1 withSourceURL:(NSURL *)arg2;
- (void)registerCallUpdateFinish:(long long (^)(NSString *))arg1;
- (void)registerCallRefreshFinish:(long long (^)(NSString *))arg1;
- (void)garbageCollect;
- (void)removeTimers:(NSString *)arg1;
@end

