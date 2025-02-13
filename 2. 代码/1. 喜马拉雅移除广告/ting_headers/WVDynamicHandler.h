//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WVBridgeProtocol-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol WVBridgeContext, WVWebViewBasicProtocol;

@interface WVDynamicHandler : NSObject <WVBridgeProtocol>
{
    id <WVBridgeContext> _context;
}

+ (void)WVJSBridgeInterface$callback:(CDUnknownBlockType)arg1 withRet:(id)arg2 withResult:(id)arg3;
+ (void)WVJSBridgeInterface$forbiddenThisMethodToJSB:(SEL)arg1;
+ (unsigned long long)instanceScope;
@property(nonatomic) __weak id <WVBridgeContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)WVJSBridgeInterface$release;
- (void)setViewController:(id)arg1;
- (void)setWebview:(id)arg1;
- (void)set_runtimeContext:(id)arg1;
- (id)_runtimeContext;
- (void)releaseInstance;
@property(readonly, nonatomic) __weak UIViewController *viewController;
@property(readonly, nonatomic) __weak UIView<WVWebViewBasicProtocol> *webview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

