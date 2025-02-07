//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBXBridgeProtocol-Protocol.h"

@class JSValue, NSMutableArray, NSMutableDictionary, NSString, WBXApplication, WBXPage;
@protocol WBXBridgeProtocol;

@interface WBXBridgeContext : NSObject <WBXBridgeProtocol>
{
    _Bool _frameworkLoadFinished;
    JSValue *exception;
    WBXApplication *_app;
    WBXPage *_topPage;
    NSString *_instanceID;
    id <WBXBridgeProtocol> _jsBridge;
    NSMutableDictionary *_sendQueue;
    NSMutableArray *_insStack;
    NSMutableArray *_methodQueue;
}

+ (void)mountContextEnvironment:(id)arg1 app:(id)arg2;
@property(retain, nonatomic) NSMutableArray *methodQueue; // @synthesize methodQueue=_methodQueue;
@property(nonatomic) _Bool frameworkLoadFinished; // @synthesize frameworkLoadFinished=_frameworkLoadFinished;
@property(retain, nonatomic) NSMutableArray *insStack; // @synthesize insStack=_insStack;
@property(retain, nonatomic) NSMutableDictionary *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain, nonatomic) id <WBXBridgeProtocol> jsBridge; // @synthesize jsBridge=_jsBridge;
@property(readonly, nonatomic) NSString *instanceID; // @synthesize instanceID=_instanceID;
@property(nonatomic) __weak WBXPage *topPage; // @synthesize topPage=_topPage;
@property(nonatomic) __weak WBXApplication *app; // @synthesize app=_app;
@property(readonly, nonatomic) JSValue *exception; // @synthesize exception;
- (void).cxx_destruct;
- (void)_sendQueueLoop;
- (id)executeJavascript:(id)arg1 withSourceURL:(id)arg2;
- (void)executeJavascript:(id)arg1;
- (void)resetEnvironment;
- (id)callJSMethod:(id)arg1 args:(id)arg2;
- (void)registerModules:(id)arg1;
- (id)excuteJSMethod:(id)arg1 arcs:(id)arg2;
- (id)excuteJSMethodWithResult:(id)arg1;
- (void)callJSMethod:(id)arg1 args:(id)arg2 onContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)executeJsMethod:(id)arg1;
- (void)executeJSFramework:(id)arg1;
- (void)updateState:(id)arg1 data:(id)arg2;
- (void)refreshPage:(id)arg1;
- (void)destroyPage:(id)arg1;
- (void)registerGlobalFunctions;
- (void)unload;
- (id)initWithApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

